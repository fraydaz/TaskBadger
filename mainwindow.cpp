#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DB = new DBConnection();
    ProjectPg = new Project();
    setTreeView();
    setTableView();
}

MainWindow::~MainWindow()
{
    delete ui;
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
    QString sql = "SELECT id AS 'Project #', name AS Project, "
                  "priority AS Priority, statusID AS Status, "
                  "due_date AS 'Due Date' FROM project ORDER BY id ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(model);
}
void MainWindow::on_createProject_clicked()
{
    ProjectPg->openNewTab();
    ProjectPg->show();
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    ProjectPg->openProjects();
    ProjectPg->show();
}
