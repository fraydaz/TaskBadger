#include "project.h"
#include "ui_project.h"

Project::Project(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Project)
{
    ui->setupUi(this);
    setTableView();
    mainWindowPtr = new MainWindow();
    DB = new DBConnection();
}

void Project::setTableView()
{
    QString sql = "SELECT * FROM project ORDER BY id ASC;";
    QSqlQuery query = DB->sqlSelect(sql);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
}

Project::~Project()
{
    delete ui;
}
