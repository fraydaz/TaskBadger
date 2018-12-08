#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "project.h"
#include "projectformlayout.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    project = new Project();
    projectModel = new ProjectModel();
    task = new Task();
    taskModel = new TaskModel();
    list = new List();
    listModel = new ListModel();
    item = new ListItem();
    setUILayout();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setUILayout()
{
    openWidgetPg(dashboardPg);
    setDefaultDate();
    setComboBox(ui->category, "category", "name");
    setComboBox(ui->status, "status", "id");
    setComboBox(ui->t_status, "status", "id");
    setComboBox(ui->t_project, "project", "id");
    setTreeView();
    setTableView(ui->tableView, "projects_view");
    setTableView(ui->projectsView, "projects_view");
    //setTableView(ui->tasksView, "tasks_view");
}
void MainWindow::setDefaultDate()
{
    foreach(QDateEdit *widget, this->findChildren<QDateEdit*>())
        {
            widget->setDate(QDate::currentDate());
        }
}
void MainWindow::openTab(QTabWidget *widget, int index)
{
    widget->setCurrentIndex(index);
}
void MainWindow::openWidgetPg(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
/**************************************
                SET VIEWS
***************************************/
void MainWindow::setTreeView()
{
    model = projectModel->getTreeModel("projects_tree");
    ui->treeView->setModel(model);
}
void MainWindow::setListView()
{
    model = listModel->getTableModel("list_items", listID);
    ui->itemsView->setModel(model);
}
void MainWindow::setTableView(QTableView *table, QString view)
{
    model = projectModel->getTableModel(view);
    table->setModel(model);
    table->resizeColumnsToContents();
}
void MainWindow::setTableView(QTableView *table, QString view, QString id)
{
    model = projectModel->getTableModel(view, id);
    table->setModel(model);
    table->resizeColumnsToContents();
    int index = ui->stackedWidget->currentIndex();
    if (index == 2 || index == 3)
        table->setColumnHidden(0, true);
}
void MainWindow::setComboBox(QComboBox* menu, QString table, QString column)
{
    model = projectModel->getComboBox(table, column);
    menu->setModel(model);
}
/**************************************
              SAVE OBJECTS
***************************************/
void MainWindow::saveProject()
{
    project->setName(ui->name->text());
    project->setDescription(ui->description->toPlainText());
    project->setPriority(ui->priority->currentText());
    project->setCost(ui->cost->text());
    project->setDateCreated();
    project->setDueDate(ui->due->date());
    project->setCatID(ui->category->currentText());
    project->setStatusID(ui->status->currentText());
    project->create_project();
    setComboBox(ui->t_project, "project", "id");
    clearProjForm();
}
void MainWindow::saveTask()
{
    task->setName(ui->t_name->text());
    task->setDescription(ui->t_description->toPlainText());
    task->setPriority(ui->t_priority->currentText());
    task->setDueDate(ui->t_due->date());
    task->setStatusID(ui->t_status->currentText());
    task->setProjectID(ui->t_project->currentText());
    task->create_task();
    clearTaskForm();
}
void MainWindow::saveList()
{
    list->setName(ui->l_name->text());
    if (listType == "project")
    {
        list->setProjectID(ui->l_project->currentText());
        list->create_list("project");
    }
    else
    {
        list->setTaskID(ui->l_task->currentText());
        list->create_list("task");
    }
}
void MainWindow::saveItem()
{
    item->setName(ui->l_item->text());
    item->setListID(ui->l_name->text());
    item->create_item();
    ui->l_item->clear();
}
/**************************************
              EDIT OBJECTS
***************************************/
void MainWindow::editProject(QString id)
{
    // create layout for view & edit project
    QVBoxLayout *projLayout = new QVBoxLayout;
    projLayout = projectModel->setLayout(id);
    newTab = new QWidget(ui->project_tabWidget);

    // set layout and open new tab
    newTab->setLayout(projLayout);
    ui->project_tabWidget->addTab(newTab, "Project #" + id);
    ui->project_tabWidget->setCurrentWidget(newTab);
}
void MainWindow::editTask(QString id)
{
    // create layout for view & edit task
    QVBoxLayout *taskLayout = new QVBoxLayout;
    taskLayout = taskModel->setLayout(id);
    newTab = new QWidget(ui->task_tabWidget);

    // set layout and open new tab
    newTab->setLayout(taskLayout);
    ui->task_tabWidget->addTab(newTab, "Task #" + id);
    ui->task_tabWidget->setCurrentWidget(newTab);
}
void MainWindow::editList(QString id)
{
    // create layout for view & edit list
    QVBoxLayout *listLayout = new QVBoxLayout;
    listModel->setListType(listType);
    listLayout = listModel->setLayout(id);
    newTab = new QWidget(ui->list_tabWidget);

    // set layout and open new tab
    newTab->setLayout(listLayout);
    ui->list_tabWidget->addTab(newTab, "List #" + id);
    ui->list_tabWidget->setCurrentWidget(newTab);
}
/*void MainWindow::editList(QString id)
{
    openTab(ui->list_tabWidget, createNewTab);
    ui->l_name->setText(listName);
    if (listType == "project")
    {
        ui->l_project->setCurrentText(list->getProjectName(id));
        ui->l_task->setCurrentIndex(-1);
    }
    else if (listType == "task")
    {
        ui->l_task->setCurrentText(list->getTaskName(id));
        ui->l_project->setCurrentIndex(-1);
    }
    setListView();
}*/
/**************************************
             RESET FORMS
***************************************/
void MainWindow::clearProjForm()
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())
    {
        widget->clear();
    }
    setDefaultDate();
    // reset all other fields to default values
    ui->status->setCurrentText("New");
    ui->category->setCurrentText("Personal");
    ui->priority->setCurrentText("Normal");
    ui->description->clear();
    ui->cost->setValue(0.00);
}
void MainWindow::clearTaskForm()
{
    // reset all fields to default values
    ui->t_name->clear();
    ui->t_num->clear();
    setDefaultDate();
    ui->t_status->setCurrentText("New");
    ui->t_priority->setCurrentText("Normal");
    ui->t_description->clear();
}
void MainWindow::clearListForm()
{
    // reset all fields to default values
    ui->l_name->clear();
    ui->l_item->clear();
    foreach(QComboBox *widget, this->findChildren<QComboBox*>())
        widget->setCurrentIndex(-1);
}
void MainWindow::refreshPg()
{
    switch (ui->stackedWidget->currentIndex()) {
    case 0:
    {
        setTreeView();
        setTableView(ui->tableView, "projects_view");
    }
        break;
    case 1:
    {
        setTableView(ui->projectsView, "projects_view");
        clearProjForm();
    }
        break;
    case 2:
    {
        setTableView(ui->tasksView, "project_tasks", projectID);
        clearTaskForm();
    }
        break;
    case 3:
    {
        if (ui->list_tabWidget->currentIndex() == 0)
        {
            if (ui->l_task->currentText() == "")
                    setTableView(ui->listsView, "project_lists", projectID);
            else if (ui->l_project->currentText() == "")
                    setTableView(ui->listsView, "task_lists", taskID);
        }
        else if (ui->list_tabWidget->currentIndex() == 1)
            clearListForm();
    }
        break;
    case 4:
        setTableView(ui->upcomingDue, "upcoming_due");
        break;
    case 5:
        setTableView(ui->urgentProj, "urgent_proj");
        break;
    default:
        setTreeView();
        break;
    }
}
/**************************************
              ACTION SLOTS
***************************************/

void MainWindow::on_actionHome_triggered()
{
    openWidgetPg(dashboardPg);
}

void MainWindow::on_actionRefresh_triggered()
{
    refreshPg();
}

void MainWindow::on_actionNext_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr+1);
    if (ui->stackedWidget->currentIndex() == tasksPg)
        setTableView(ui->tasksView, "project_tasks", projectID);
}

void MainWindow::on_actionBack_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr-1);
    if (ui->stackedWidget->currentIndex() == projectsPg)
        setTableView(ui->projectsView, "projects_view");
}

/**************************************
             DASHBOARD SLOTS
***************************************/

void MainWindow::on_createProject_clicked()
{
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, createNewTab);
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    openWidgetPg(upcomingPg);
    setTableView(ui->upcomingDue, "upcoming_due");
}

void MainWindow::on_urgentProjects_clicked()
{
    openWidgetPg(urgentPg);
    setTableView(ui->urgentProj, "urgent_proj");
}

/**************************************
              PROJECT SLOTS
***************************************/

void MainWindow::on_projectsView_clicked(const QModelIndex &index)
{
    ui->editProj->setEnabled(true);
    ui->deleteProj->setEnabled(true);
    ui->projTasks->setEnabled(true);
    ui->projLists->setEnabled(true);
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    projectID = idIndex.data().toString();
    projectName = nameIndex.data().toString();
    qDebug() << "Project ID: " << projectID << "Project Name: " << projectName;
}

void MainWindow::on_projectsView_doubleClicked(const QModelIndex &index)
{
    editProject(projectID);
}

void MainWindow::on_ProjSave_clicked()
{
    saveProject();
}

void MainWindow::on_ProjCancel_clicked()
{
    clearProjForm();
    openWidgetPg(dashboardPg);
}

void MainWindow::on_editProj_clicked()
{
    editProject(projectID);
}

void MainWindow::on_newProj_clicked()
{
    openTab(ui->project_tabWidget, createNewTab);
}

void MainWindow::on_deleteProj_clicked()
{
    // add confirmation before deleting
    project->delete_object("project", projectID);
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_projTasks_clicked()
{
    openWidgetPg(tasksPg);
    openTab(ui->task_tabWidget, viewAllTab);
    ui->task_tabWidget->setTabText(viewAllTab, "Project #" + projectID + " Tasks");
    ui->projectInfo->setText("Project #" + projectID + ": " + projectName);
    setTableView(ui->tasksView,"project_tasks", projectID);
}

void MainWindow::on_projLists_clicked()
{
    listType = "project";
    ui->l_task->setCurrentIndex(-1);
    ui->l_task->setDisabled(true);
    ui->l_project->setDisabled(false);
    openWidgetPg(listsPg);
    openTab(ui->list_tabWidget, viewAllTab);
    ui->list_tabWidget->setTabText(viewAllTab, "Project #" + projectID + " Lists");
    ui->listInfo->setText("Project #" + projectID + ": " + projectName);
    setTableView(ui->listsView, "project_lists", projectID);
    setComboBox(ui->l_project, "project", "id");
    ui->l_project->setCurrentText(list->getProjectName(projectID));
    refreshPg();
}

/**************************************
           TAB WIDGET SLOTS
***************************************/

void MainWindow::on_project_tabWidget_tabCloseRequested(int index)
{
    ui->project_tabWidget->removeTab(index);
}

void MainWindow::on_task_tabWidget_tabCloseRequested(int index)
{
    ui->task_tabWidget->removeTab(index);
}

void MainWindow::on_list_tabWidget_tabCloseRequested(int index)
{
    ui->list_tabWidget->removeTab(index);
}

/**************************************
              TASK SLOTS
***************************************/

void MainWindow::on_back_to_project_clicked()
{
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, viewAllTab);
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_task_list_clicked()
{
    listType = "task";
    ui->l_project->setCurrentIndex(-1);
    ui->l_project->setDisabled(true);
    ui->l_task->setDisabled(false);
    openWidgetPg(listsPg);
    openTab(ui->list_tabWidget, viewAllTab);
    ui->list_tabWidget->setTabText(viewAllTab, "Task #" + taskID + " Lists");
    ui->listInfo->setText("Task #" + taskID + ": " + taskName);
    setTableView(ui->listsView, "task_lists", taskID);
    setComboBox(ui->l_task, "task", "id");
    ui->l_task->setCurrentText(list->getTaskName(taskID));
    refreshPg();
}

void MainWindow::on_new_task_clicked()
{
    openTab(ui->task_tabWidget, createNewTab);
    setComboBox(ui->t_project, "project", "id");
    ui->t_project->setCurrentText(task->getProjectName(projectID));
    setTableView(ui->tasksView,"project_tasks", projectID);
}

void MainWindow::on_edit_task_clicked()
{
    editTask(taskID);
}

void MainWindow::on_delete_task_clicked()
{
    task->delete_object("task", taskID);
    setTableView(ui->tasksView, "tasks_view");
}

void MainWindow::on_task_save_clicked()
{
    saveTask();
}

void MainWindow::on_task_cancel_clicked()
{
    openWidgetPg(dashboardPg);
    clearTaskForm();
}

void MainWindow::on_tasksView_clicked(const QModelIndex &index)
{
    ui->edit_task->setEnabled(true);
    ui->delete_task->setEnabled(true);
    ui->task_list->setEnabled(true);
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    taskID = idIndex.data().toString();
    taskName = nameIndex.data().toString();
    qDebug() << "Task ID: " << taskID;
}

void MainWindow::on_tasksView_doubleClicked(const QModelIndex &index)
{
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    editTask(idIndex.data().toString());
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, viewAllTab);
    QString category = index.data().toString();
    QString catID = project->getCatID(category);
    setTableView(ui->projectsView, "project_category", catID);
}
/**************************************
              LIST SLOTS
***************************************/
void MainWindow::on_list_save_clicked()
{
    saveList();
}

void MainWindow::on_list_cancel_clicked()
{
    openWidgetPg(dashboardPg);
    clearListForm();
}

void MainWindow::on_back_button_clicked()
{
    if (ui->l_task->currentText() != "")
    {
        openWidgetPg(tasksPg);
        openTab(ui->task_tabWidget, viewAllTab);
        setTableView(ui->tasksView, "tasks_view");
    }
    else
    {
        openWidgetPg(projectsPg);
        openTab(ui->project_tabWidget, viewAllTab);
        setTableView(ui->projectsView, "projects_view");
    }
}

void MainWindow::on_new_list_clicked()
{
    openTab(ui->list_tabWidget, createNewTab);
    refreshPg();
}

void MainWindow::on_delete_list_clicked()
{
    list->delete_object("list", listID);
    refreshPg();
}

void MainWindow::on_listsView_clicked(const QModelIndex &index)
{
    ui->edit_list->setEnabled(true);
    ui->delete_list->setEnabled(true);
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    listID = idIndex.data().toString();
    listName = nameIndex.data().toString();
    qDebug() << "List ID: " << listID;
}

void MainWindow::on_listsView_doubleClicked(const QModelIndex &index)
{
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    editList(idIndex.data().toString());
}

void MainWindow::on_edit_list_clicked()
{
    editList(listID);
}

void MainWindow::on_saveItem_clicked()
{
    saveItem();
    setListView();
}
