#include "projectmodel.h"
#include <QSqlQuery>

ProjectModel::ProjectModel()
{
    projectDAO = new ProjectDAO();
    project = new Project();
}

QSqlQueryModel* ProjectModel::setComboBox(QString menu, QString order)
{
    QSqlQuery query = projectDAO->getList(menu, order);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}

QSqlQueryModel* ProjectModel::setTableView(QString view)
{
    QSqlQuery query = projectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}

QSqlQueryModel* ProjectModel::setTreeView(QString view)
{
    QSqlQuery query = projectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
