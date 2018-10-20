#include "project.h"
#include "ui_project.h"

Project::Project(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Project)
{
    ui->setupUi(this);
    DB = new DBConnection();
    ui->tabWidget->setCurrentIndex(0);
    setTableView();
    ui->created->setDate(QDate::currentDate());
    ui->due->setDate(QDate::currentDate());
    populateCat();
    populateStat();
}

void Project::setTableView()
{
    QString sql = "SELECT id AS 'Project #', name AS Project, "
                  "priority AS Priority, categoryID AS 'Category',"
                  " statusID AS Status, due_date AS 'Due Date' "
                  "FROM project ORDER BY id DESC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
}

Project::~Project()
{
    delete ui;
}

void Project::on_editProj_clicked()
{
    // open project in new tab - edit mode
}

void Project::on_newProj_clicked()
{
    openNewTab();
}

void Project::on_deleteProj_clicked()
{
    // confirm & delete project
}

void Project::on_searchProj_clicked()
{
    // open search dialog and query db
}
void Project::openNewTab()
{
    // opens create new project tab
    ui->tabWidget->setCurrentIndex(1);
}
void Project::openProjects()
{
    ui->tabWidget->setCurrentIndex(0);
}
void Project::populateCat()
{
    QString sql = "SELECT name FROM category ORDER BY name ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->category->setModel(model);
}
void Project::populateStat()
{
    QString sql = "SELECT value FROM status ORDER BY id ASC;";
    QSqlQuery query =  DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->status->setModel(model);
}
void Project::on_ProjSave_2_clicked()
{
    getFormInfo();
}

void Project::on_ProjCancel_2_clicked()
{
    this->close();
}
void Project::getFormInfo()
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
void Project::setCatID()
{
    QString catVal = ui->category->currentText();
    QString sql = "SELECT id FROM category WHERE name='" + catVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pCat = query.value(0).toInt();
}
void Project::setStatusID()
{
    QString statusVal = ui->status->currentText();
    QString sql = "SELECT id FROM status WHERE value='" + statusVal + "'";
    QSqlQuery query =  DB->sqlSelect(sql);
    query.next();
    pStatus = query.value(0).toInt();
}
void Project::insertData()
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
