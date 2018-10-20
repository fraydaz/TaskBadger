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
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    this->model = new QSqlQueryModel();

    QString sql = "SELECT name AS 'My Projects' FROM category ORDER BY id ASC;";
    QSqlQuery* query = new QSqlQuery(localdb);
    query->prepare(sql);

    if(!query->exec())
        qWarning() << "ERROR: " << query->lastError();
    else
        qDebug () << "Query Successful: " << query->lastQuery();
     model->setQuery(*query);

    ui->treeView->setModel(model);
}
void MainWindow::setTableView()
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    this->model = new QSqlQueryModel();
    QString sql = "SELECT id AS 'Project #', name AS Project, "
                  "priority AS Priority, statusID AS Status, "
                  "due_date AS 'Due Date' FROM project ORDER BY id ASC;";
    QSqlQuery* query = new QSqlQuery(localdb);
    query->prepare(sql);

    if(!query->exec())
        qWarning() << "ERROR: " << query->lastError();
    else
        qDebug () << "Query Successful: " << query->lastQuery();
    model->setQuery(*query);

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
