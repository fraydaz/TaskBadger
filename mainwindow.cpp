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
    ui->stackedWidget->setCurrentIndex(0);
    ui->created_2->setDate(QDate::currentDate());
    ui->due_2->setDate(QDate::currentDate());
    populateCat();
    populateStat();
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
    QString sql = "SELECT * from projects_view;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView_3->setSortingEnabled(true);
    ui->tableView_3->setModel(model);
    ui->tableView_3->resizeColumnsToContents();
}
void MainWindow::on_createProject_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_upcomingDeadlines_clicked()
{
    QString sql = "SELECT * from upcoming_due;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setSortingEnabled(true);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_urgentProjects_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(0);
}
void MainWindow::populateCat()
{
    QString sql = "SELECT name FROM category ORDER BY name ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->category_2->setModel(model);
}
void MainWindow::populateStat()
{
    QString sql = "SELECT value FROM status ORDER BY id ASC;";
    QSqlQuery query =  DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->status_2->setModel(model);
}



void MainWindow::getFormInfo()
{
    pName = ui->name_2->text();
    pDetails = ui->description_2->toPlainText();
    pPriority = ui->priority_2->currentText();
    pCost = ui->cost_2->text();
    pDue = ui->due_2->date();
    setCatID();
    setStatusID();
    insertData();
}
void MainWindow::setCatID()
{
    QString catVal = ui->category_2->currentText();
    QString sql = "SELECT id FROM category WHERE name='" + catVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pCat = query.value(0).toInt();
}
void MainWindow::setStatusID()
{
    QString statusVal = ui->status_2->currentText();
    QString sql = "SELECT id FROM status WHERE value='" + statusVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pStatus = query.value(0).toInt();
}
void MainWindow::insertData()
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO project(name, description, priorityID, "
                      "total_cost, date_created, due_date, statusID, categoryID) "
                       "VALUES(:pName, :pDetails, :pPriority, :pCost, :pDate, "
                      ":pDue, :pStatus, :pCat)");
    query.bindValue(":pName", pName);
    query.bindValue(":pDetails", pDetails);
    query.bindValue(":pPriority", pPriority);
    query.bindValue(":pCost", pCost);
    query.bindValue(":pDate", pDate);
    query.bindValue(":pDue", pDue);
    query.bindValue(":pStatus", pStatus);
    query.bindValue(":pCat", pCat);

    bool success =  DB->sqlInsert(query);
    if (success)
        this->close();
}

QHBoxLayout* MainWindow::setProjLayout()
{
    // test setting up layout in code
    // create actual layout for viewing project here
    QHBoxLayout *hLayout = new QHBoxLayout;
        QPushButton *b1 = new QPushButton("A");
        QPushButton *b2 = new QPushButton("B");
        QPushButton *b3 = new QPushButton("C");
        hLayout->addWidget(b1);
        hLayout->addWidget(b2);
        hLayout->addWidget(b3);
        return hLayout;
}
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

/**************************************
           SIGNALS & SLOTS
***************************************/


void MainWindow::on_ProjSave_3_clicked()
{
    getFormInfo();
}

void MainWindow::on_ProjCancel_3_clicked()
{
    //this->close();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_editProj_2_clicked()
{

}

void MainWindow::on_newProj_2_clicked()
{
     ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_deleteProj_2_clicked()
{

}

void MainWindow::on_searchProj_2_clicked()
{

}

void MainWindow::on_actionHome_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
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
    this->ui->stackedWidget->setCurrentIndex(curr+1);
}

void MainWindow::on_actionBack_triggered()
{
    int curr = this->ui->stackedWidget->currentIndex();
    this->ui->stackedWidget->setCurrentIndex(curr-1);
}

void MainWindow::on_tableView_3_clicked(const QModelIndex &index)
{
    if (index.isValid())
    {
        QString cellData = index.data().toString();
        qDebug() << "The value at this cell is: " << cellData;
    }
}

void MainWindow::on_tableView_3_doubleClicked(const QModelIndex &index)
{
    QHBoxLayout *projLayout = new QHBoxLayout;
    projLayout = setProjLayout();
    newTab = new QWidget(ui->tabWidget);

    newTab->setLayout(projLayout);
    ui->tabWidget->addTab(newTab, "projectNum");
    ui->tabWidget->setCurrentWidget(newTab);

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
}
