#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    // open home page
    openWidgetPg(dashboardPg);

    // set default values in form fields
    setDefaultDate();
    setComboBox(ui->category, "category", "name");
    setComboBox(ui->status, "status", "id");
    setComboBox(ui->t_status, "status", "id");
    setComboBox(ui->t_project, "project", "id");

    // show project tree on home page
    setTreeView();
    setTableView(ui->tableView, "projects_view");
}
void MainWindow::setDefaultDate()
{
    // set all date pickers to today's date
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

    // hide ID column on task and lists pages
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
    // set values from form
    project->setName(ui->name->text());
    project->setDescription(ui->description->toPlainText());
    project->setPriority(ui->priority->currentText());
    project->setCost(ui->cost->text());
    project->setDateCreated();
    project->setDueDate(ui->due->date());
    project->setCatID(ui->category->currentText());
    project->setStatusID(ui->status->currentText());

    // save project
    project->create_project();

    // reset combobox and clear form
    setComboBox(ui->t_project, "project", "id");
    clearProjForm();
}
void MainWindow::saveTask()
{
    // set values from form
    task->setName(ui->t_name->text());
    task->setDescription(ui->t_description->toPlainText());
    task->setPriority(ui->t_priority->currentText());
    task->setDueDate(ui->t_due->date());
    task->setStatusID(ui->t_status->currentText());
    task->setProjectID(ui->t_project->currentText());

    // save task
    task->create_task();

    // clear form
    clearTaskForm();
}
void MainWindow::saveList()
{
    // set values from form
    list->setName(ui->l_name->text());
    if (listType == "project")
    {
        list->setProjectID(ui->l_project->currentText());

        // create project list
        list->create_list("project");
    }
    else
    {
        list->setTaskID(ui->l_task->currentText());

        // create task list
        list->create_list("task");
    }
}
void MainWindow::saveItem()
{
    // set values from form
    item->setName(ui->l_item->text());
    item->setListID(ui->l_name->text());

    // save new list item
    item->create_item();

    // reset list item field
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
/**************************************
             RESET FORMS
***************************************/
void MainWindow::clearProjForm()
{
    // clear all line edits on project form
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
    // clear line edits
    ui->t_name->clear();
    ui->t_num->clear();

    // reset all other fields to default values
    setDefaultDate();
    ui->t_status->setCurrentText("New");
    ui->t_priority->setCurrentText("Normal");
    ui->t_description->clear();
}
void MainWindow::clearListForm()
{
    // clear all fields on list form
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
        // home page
        setTreeView();
        setTableView(ui->tableView, "projects_view");
    }
        break;
    case 1:
    {
        // project page
        setTableView(ui->projectsView, "projects_view");
        clearProjForm();
    }
        break;
    case 2:
    {
        // task page
        setTableView(ui->tasksView, "project_tasks", projectID);
        clearTaskForm();
    }
        break;
    case 3:
    {
        // list page
        if (ui->list_tabWidget->currentIndex() == 0)
        {
            if (ui->l_task->currentText() == "")
                // show all lists for selected project
                setTableView(ui->listsView, "project_lists", projectID);

            else if (ui->l_project->currentText() == "")
                // show all lists for selected task
                setTableView(ui->listsView, "task_lists", taskID);
        }
        // on new list tab
        else if (ui->list_tabWidget->currentIndex() == 1)
            clearListForm();
    }
        break;
    case 4:
        // upcoming deadlines page
        setTableView(ui->upcomingDue, "upcoming_due");
        break;
    case 5:
        // urgent project page
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
    // go to home page
    openWidgetPg(dashboardPg);
}

void MainWindow::on_actionRefresh_triggered()
{
    refreshPg();
}

void MainWindow::on_actionNext_triggered()
{
    // go to next page
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr+1);
    if (ui->stackedWidget->currentIndex() == tasksPg)
        setTableView(ui->tasksView, "project_tasks", projectID);
}

void MainWindow::on_actionBack_triggered()
{
    // go to previous page
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
    // go to project page
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, createNewTab);
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    // go to upcoming deadlines page
    openWidgetPg(upcomingPg);
    setTableView(ui->upcomingDue, "upcoming_due");
}

void MainWindow::on_urgentProjects_clicked()
{
    // go to urgent projects page
    openWidgetPg(urgentPg);
    setTableView(ui->urgentProj, "urgent_proj");
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    // go to project page
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, viewAllTab);

    // store ID and name of selected category
    QString category = index.data().toString();
    QString catID = project->getCatID(category);

    // show all projects for selected category
    setTableView(ui->projectsView, "project_category", catID);
}

/**************************************
              PROJECT SLOTS
***************************************/

void MainWindow::on_projectsView_clicked(const QModelIndex &index)
{
    // enable edit, delete, tasks, lists buttons
    ui->editProj->setEnabled(true);
    ui->deleteProj->setEnabled(true);
    ui->projTasks->setEnabled(true);
    ui->projLists->setEnabled(true);

    // store ID and name of selected project
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    projectID = idIndex.data().toString();
    projectName = nameIndex.data().toString();

    // for debugging only
    qDebug() << "Project ID: " << projectID << "Project Name: " << projectName;
}

void MainWindow::on_projectsView_doubleClicked(const QModelIndex &index)
{
    // open selected project in new tab
    editProject(projectID);
}

void MainWindow::on_ProjSave_clicked()
{
    saveProject();
}

void MainWindow::on_ProjCancel_clicked()
{
    // reset form and go to home page
    clearProjForm();
    openWidgetPg(dashboardPg);
}

void MainWindow::on_editProj_clicked()
{
    // open project in new tab to edit
    editProject(projectID);
}

void MainWindow::on_newProj_clicked()
{
    // open 'new project' tab
    openTab(ui->project_tabWidget, createNewTab);
}

void MainWindow::on_deleteProj_clicked()
{
    // delete selected project and refresh page
    project->delete_object("project", projectID);
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_projTasks_clicked()
{
    // go to task page
    openWidgetPg(tasksPg);
    openTab(ui->task_tabWidget, viewAllTab);
    ui->task_tabWidget->setTabText(viewAllTab, "Project #" + projectID + " Tasks");
    ui->projectInfo->setText("Project #" + projectID + ": " + projectName);

    // show all tasks for selected project
    setTableView(ui->tasksView,"project_tasks", projectID);
}

void MainWindow::on_projLists_clicked()
{
    listType = "project";

    // set up default values for new list form
    ui->l_task->setCurrentIndex(-1);
    ui->l_task->setDisabled(true);
    ui->l_project->setDisabled(false);
    setComboBox(ui->l_project, "project", "id");
    ui->l_project->setCurrentText(list->getProjectName(projectID));

    // go to list page
    openWidgetPg(listsPg);
    openTab(ui->list_tabWidget, viewAllTab);
    ui->list_tabWidget->setTabText(viewAllTab, "Project #" + projectID + " Lists");
    ui->listInfo->setText("Project #" + projectID + ": " + projectName);

    // show all lists for selected project
    setTableView(ui->listsView, "project_lists", projectID);
    refreshPg();
}

/**************************************
           TAB WIDGET SLOTS
***************************************/

void MainWindow::on_project_tabWidget_tabCloseRequested(int index)
{
    // close current project tab
    ui->project_tabWidget->removeTab(index);
}

void MainWindow::on_task_tabWidget_tabCloseRequested(int index)
{
    // close current task tab
    ui->task_tabWidget->removeTab(index);
}

void MainWindow::on_list_tabWidget_tabCloseRequested(int index)
{
    // close current list tab
    ui->list_tabWidget->removeTab(index);
}

/**************************************
              TASK SLOTS
***************************************/

void MainWindow::on_back_to_project_clicked()
{
    // go to projects page and refresh table
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, viewAllTab);
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_task_list_clicked()
{
    listType = "task";

    // set up default values for new list form
    ui->l_project->setCurrentIndex(-1);
    ui->l_project->setDisabled(true);
    ui->l_task->setDisabled(false);
    setComboBox(ui->l_task, "task", "id");
    ui->l_task->setCurrentText(list->getTaskName(taskID));

    // go to list page
    openWidgetPg(listsPg);
    openTab(ui->list_tabWidget, viewAllTab);
    ui->list_tabWidget->setTabText(viewAllTab, "Task #" + taskID + " Lists");
    ui->listInfo->setText("Task #" + taskID + ": " + taskName);

    // show all lists for selected task
    setTableView(ui->listsView, "task_lists", taskID);
    refreshPg();
}

void MainWindow::on_new_task_clicked()
{
    // open 'new task' tab
    openTab(ui->task_tabWidget, createNewTab);

    // set default values in new task form
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
    // delete selected task & refresh table
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
    // enable lists, edit, delete buttons
    ui->edit_task->setEnabled(true);
    ui->delete_task->setEnabled(true);
    ui->task_list->setEnabled(true);

    // store ID and name of selected task
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    taskID = idIndex.data().toString();
    taskName = nameIndex.data().toString();

    // for debugging only
    qDebug() << "Task ID: " << taskID;
}

void MainWindow::on_tasksView_doubleClicked(const QModelIndex &index)
{
    // open selected task in new tab to view/edit
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    editTask(idIndex.data().toString());
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
        // go back to task page
        openWidgetPg(tasksPg);
        openTab(ui->task_tabWidget, viewAllTab);
        setTableView(ui->tasksView, "tasks_view");
    }
    else
    {
        // go back to project page
        openWidgetPg(projectsPg);
        openTab(ui->project_tabWidget, viewAllTab);
        setTableView(ui->projectsView, "projects_view");
    }
}

void MainWindow::on_new_list_clicked()
{
    // go to 'new list' tab
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
    // enable edit and delete buttons
    ui->edit_list->setEnabled(true);
    ui->delete_list->setEnabled(true);

    // store ID and name of selected list
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    QModelIndex nameIndex = model->index(index.row(), 1, QModelIndex());
    listID = idIndex.data().toString();
    listName = nameIndex.data().toString();

    // for debugging only
    qDebug() << "List ID: " << listID;
}

void MainWindow::on_listsView_doubleClicked(const QModelIndex &index)
{
    // open selected list in new tab to view/edit
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    editList(idIndex.data().toString());
}

void MainWindow::on_edit_list_clicked()
{
    editList(listID);
}

void MainWindow::on_saveItem_clicked()
{
    // save list item & refresh list view
    saveItem();
    setListView();
}
