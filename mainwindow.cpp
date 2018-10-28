#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "project.h"
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

QHBoxLayout* MainWindow::setProjLayout()
{
    // test setting up layout in code
    // create actual layout for viewing project here
    QHBoxLayout *hLayout = new QHBoxLayout;
        QPushButton *b1 = new QPushButton("A");
        hLayout->addWidget(b1);
        return hLayout;
}
void MainWindow::clearProjForm()
{

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
   /* QString queryStr = model->query().executedQuery();
    model->clear();
    model->query().clear();
    model->setQuery(queryStr);*/
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
    if (index.isValid())
    {
        QString cellData = index.data().toString();
        qDebug() << "The value at this cell is: " << cellData;
    }
}

void MainWindow::on_projectsView_doubleClicked(const QModelIndex &index)
{
    QHBoxLayout *projLayout = new QHBoxLayout;
    projLayout = setProjLayout();
    newTab = new QWidget(ui->tabWidget);

    newTab->setLayout(projLayout);
    ui->tabWidget->addTab(newTab, "projectNum");
    ui->tabWidget->setCurrentWidget(newTab);
}

    /* // get ID of row & mySql query
     int row = index.row();
     QString idString = ui->tableView->model()->data(ui->tableView->model()->index(row,0)).toString();
     QString sql = "SELECT * FROM project WHERE id = "
            " + QString::number(idString)";
     QSqlQuery query = DB->sqlSelect(sql);
     // display data from query in table
     this->model = new QSqlQueryModel();
     model->setQuery(query);
     newTable->setModel(model);
     newTable->show();*/

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

}

void MainWindow::on_newProj_clicked()
{
    openProjTab(newProjTab);
}

void MainWindow::on_deleteProj_clicked()
{

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
