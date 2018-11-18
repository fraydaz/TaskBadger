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
