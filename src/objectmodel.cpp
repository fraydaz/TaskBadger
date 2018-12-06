#include "objectmodel.h"

ObjectModel::ObjectModel()
{
    objectDAO = new ObjectDAO();
}
QSqlQueryModel* ObjectModel::getComboBox(QString menu, QString order)
{
    QSqlQuery query = objectDAO->getList(menu, order);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QSqlQueryModel* ObjectModel::getTableModel(QString view)
{
    QSqlQuery query = objectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QSqlQueryModel* ObjectModel::getTableModel(QString view, QString id)
{
    QSqlQuery query = objectDAO->getRoutine(view, id);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QSqlQueryModel* ObjectModel::getTreeModel(QString view)
{
    QSqlQuery query = objectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QSqlQueryModel* ObjectModel::getListModel(QString routine, QString id)
{
    QSqlQuery query = objectDAO->getRoutine(routine, id);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
