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
void MainWindow::setTreeView()
{
    model = projectModel->getTreeModel("projects_tree");
    ui->treeView->setModel(model);
}
void MainWindow::setTableView(QTableView *table, QString view)
{
    model = projectModel->getTableModel(view);
    table->setModel(model);
    //table->resizeColumnsToContents();
}
void MainWindow::setTaskView(QString view, QString id)
{
    model = taskModel->getTableModel(view, id);
    ui->tasksView->setModel(model);
    ui->tasksView->setColumnHidden(0, true);
    ui->tasksView->resizeColumnsToContents();
}
void MainWindow::setComboBox(QComboBox* menu, QString table, QString column)
{
    model = projectModel->getComboBox(table, column);
    menu->setModel(model);
}
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
QVBoxLayout* MainWindow::setProjLayout()
{
    QVBoxLayout *projLayout = new QVBoxLayout;
    class ProjectFormLayout *layout;
    layout = new ProjectFormLayout();
    projLayout = layout->setupUi();
    return projLayout;
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
QVBoxLayout* MainWindow::setTaskLayout()
{
    QVBoxLayout *taskLayout = new QVBoxLayout;
    class ProjectFormLayout *layout;
    layout = new ProjectFormLayout();
    taskLayout = layout->setupUi();
    return taskLayout;
}
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
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())
    {
        widget->clear();
    }
    setDefaultDate();
    // reset all other fields to default values
    ui->t_status->setCurrentText("New");
    ui->t_priority->setCurrentText("Normal");
    ui->t_description->clear();
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
    clearProjForm();
    setTreeView();
    //setTableViews();
    setTableView(ui->tableView, "projects_view");
    setTableView(ui->projectsView, "projects_view");
    //setTableView(ui->tasksView, "tasks_view");
}

void MainWindow::on_actionNext_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr+1);
    if (ui->stackedWidget->currentIndex() == tasksPg)
        setTaskView("project_tasks", projectID);
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
    setTableView(ui->tableView, "upcoming_due");
}

void MainWindow::on_urgentProjects_clicked()
{
    openWidgetPg(projectsPg);
    openTab(ui->project_tabWidget, viewAllTab);
    setTableView(ui->projectsView, "projects_view");
}

/**************************************
              PROJECT SLOTS
***************************************/

void MainWindow::on_projectsView_clicked(const QModelIndex &index)
{
    ui->editProj->setEnabled(true);
    ui->deleteProj->setEnabled(true);
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

void MainWindow::on_searchProj_clicked()
{

}

void MainWindow::on_projTasks_clicked()
{
    openWidgetPg(tasksPg);
    openTab(ui->task_tabWidget, viewAllTab);
    ui->task_tabWidget->setTabText(viewAllTab, "Project #" + projectID + " Tasks");
    ui->projectInfo->setText("Project #" + projectID + ": " + projectName);
    setTaskView("project_tasks", projectID);
}

void MainWindow::on_projLists_clicked()
{
    openWidgetPg(listsPg);
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
    openWidgetPg(listsPg);
}

void MainWindow::on_new_task_clicked()
{
    openTab(ui->task_tabWidget, createNewTab);
    setComboBox(ui->t_project, "project", "id");
    ui->t_project->setCurrentText(task->getProjectName(projectID));
    setTaskView("project_tasks", projectID);
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

void MainWindow::on_search_task_clicked()
{

}

void MainWindow::on_task_save_clicked()
{
    saveTask();
}

void MainWindow::on_task_cancel_clicked()
{
    openWidgetPg(dashboardPg);
}

void MainWindow::on_tasksView_clicked(const QModelIndex &index)
{
    ui->edit_task->setEnabled(true);
    ui->delete_task->setEnabled(true);
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    taskID = idIndex.data().toString();
    qDebug() << "Task ID: " << taskID;
}

void MainWindow::on_tasksView_doubleClicked(const QModelIndex &index)
{
    editTask(taskID);
}
