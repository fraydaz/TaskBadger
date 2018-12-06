#ifndef OBJECTMODEL_H
#define OBJECTMODEL_H

#include "objectdao.h"
#include <QSqlQueryModel>
#include <QString>
#include <QTableView>
#include <QTabWidget>
#include <QVBoxLayout>

class ObjectModel
{
public:
    ObjectModel();
    virtual QSqlQueryModel* getComboBox(QString menu, QString order);
    virtual QSqlQueryModel* getTableModel(QString view);
    virtual QSqlQueryModel* getTableModel(QString view, QString id);
    virtual QSqlQueryModel* getTreeModel(QString view);
    virtual QSqlQueryModel* getListModel(QString routine, QString id);
    virtual QVBoxLayout* setLayout(QString id) = 0;

protected:
    QSqlQueryModel *model;
    class ObjectDAO* objectDAO;
};

#endif // OBJECTMODEL_H
