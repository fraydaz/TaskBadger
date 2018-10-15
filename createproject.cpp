#include "createproject.h"
#include "ui_createproject.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

CreateProject::CreateProject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateProject)
{
    ui->setupUi(this);
    ui->created->setDate(QDate::currentDate());
    ui->due->setDate(QDate::currentDate());
    DB = new DBConnection();
    populateCat();
    populateStat();
}

CreateProject::~CreateProject()
{
    delete ui;
}
void CreateProject::populateCat()
{
    QString sql = "SELECT name FROM category ORDER BY name ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->category->setModel(model);
}
void CreateProject::populateStat()
{
    QString sql = "SELECT value FROM status ORDER BY id ASC;";
    QSqlQuery query =  DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->status->setModel(model);
}
void CreateProject::on_ProjCancel_clicked()
{
    this->close();
}

void CreateProject::on_ProjSave_clicked()
{
    getFormInfo();
}
void CreateProject::getFormInfo()
{
    pName = ui->name->text();
    pDetails = ui->description->toPlainText();
    pPriority = ui->priority->currentText();
    pCost = ui->cost->text();
    pDue = ui->due->date();
    setCatID();
    setStatusID();
    insertData();
}
void CreateProject::setCatID()
{
    QString catVal = ui->category->currentText();
    QString sql = "SELECT id FROM category WHERE name='" + catVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pCat = query.value(0).toInt();
}
void CreateProject::setStatusID()
{
    QString statusVal = ui->status->currentText();
    QString sql = "SELECT id FROM status WHERE value='" + statusVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pStatus = query.value(0).toInt();
}
void CreateProject::insertData()
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO project(name, description, priority, "
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
