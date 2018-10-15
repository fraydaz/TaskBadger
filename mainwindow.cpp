#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectDB();
    setTreeView();
    setTableView();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::connectDB()
{
   DB = new DBConnection();
}
void MainWindow::setTreeView()
{
    QString sql = "SELECT name AS 'My Projects' FROM category ORDER BY id ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->treeView->setModel(model);
}
void MainWindow::setTableView()
{
    QString sql = "SELECT name, priority, due_date FROM project ORDER BY id ASC;";
    QSqlQuery query =  DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
}
void MainWindow::on_createProject_clicked()
{
    NewProject = new CreateProject();
    NewProject->show();
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    ViewProjects = new Project();
    ViewProjects->show();
}
