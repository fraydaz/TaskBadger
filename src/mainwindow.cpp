#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "project.h"
#include "tabformlayout.h"
#include <QtCore>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    project = new Project();
    projModel = new ProjectModel();
    setUILayout();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setUILayout()
{
    openWidgetPg(dashboardPg);
    ui->created->setDate(QDate::currentDate());
    ui->due->setDate(QDate::currentDate());
    populateCat();
    populateStat();
    setTreeView();
    setTableView(ui->tableView, "projects_view");
    setTableView(ui->projectsView, "projects_view");
}
void MainWindow::openProjTab(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}
void MainWindow::openWidgetPg(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
void MainWindow::setTreeView()
{
    model = projModel->setTreeView("projects_tree");
    ui->treeView->setModel(model);
}
void MainWindow::setTableView(QTableView *table, QString view)
{
    model = projModel->setTableView(view);
    table->setModel(model);
    table->resizeColumnsToContents();
}
void MainWindow::populateCat()
{
    model = projModel->setComboBox("category", "name");
    ui->category->setModel(model);
}
void MainWindow::populateStat()
{
    model = projModel->setComboBox("status", "id");
    ui->status->setModel(model);
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
}
void MainWindow::editProject(QString id)
{
    // create layout for view & edit project
    QVBoxLayout *projLayout = new QVBoxLayout;
    projLayout = projModel->setProjLayout(id);
    newTab = new QWidget(ui->tabWidget);

    // set layout and open new tab
    newTab->setLayout(projLayout);
    ui->tabWidget->addTab(newTab, "Project #" + id);
    ui->tabWidget->setCurrentWidget(newTab);
}
QVBoxLayout* MainWindow::setProjLayout()
{
    QVBoxLayout *projLayout = new QVBoxLayout;
    class TabFormLayout *layout;
    layout = new TabFormLayout();
    projLayout = layout->setupUi();
    return projLayout;
}
void MainWindow::clearProjForm()
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())
    {
        widget->clear();
    }
    foreach(QDateEdit *widget, this->findChildren<QDateEdit*>())
    {
        widget->setDate(QDate::currentDate());
    }
    // reset all other fields to default values
    ui->status->setCurrentText("New");
    ui->category->setCurrentText("Personal");
    ui->priority->setCurrentText("Normal");
    ui->description->clear();
    ui->cost->setValue(0.00);
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
    setTableView(ui->tableView, "projects_view");
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_actionNext_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr+1);
}

void MainWindow::on_actionBack_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    openWidgetPg(curr-1);
}

/**************************************
              PROJECT SLOTS
***************************************/

void MainWindow::on_projectsView_clicked(const QModelIndex &index)
{
    QModelIndex idIndex = model->index(index.row(), 0, QModelIndex());
    projectID = idIndex.data().toString();
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
    openProjTab(newProjTab);
}

void MainWindow::on_deleteProj_clicked()
{
    // add confirmation before deleting
    project->delete_project(projectID);
    setTableView(ui->projectsView, "projects_view");
}

void MainWindow::on_searchProj_clicked()
{

}

/**************************************
             DASHBOARD SLOTS
***************************************/

void MainWindow::on_createProject_clicked()
{
    openWidgetPg(projectsPg);
    openProjTab(newProjTab);
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    setTableView(ui->tableView, "upcoming_due");
}

void MainWindow::on_urgentProjects_clicked()
{
    openWidgetPg(projectsPg);
    openProjTab(ProjectsTab);
}

/**************************************
           TAB WIDGET SLOTS
***************************************/

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}
