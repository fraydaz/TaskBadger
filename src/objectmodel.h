#ifndef OBJECTMODEL_H
#define OBJECTMODEL_H

#include "objectdao.h"
#include <QSqlQueryModel>
#include <QString>
#include <QTableView>
#include <QTabWidget>
#include <QVBoxLayout>

/*
 * This is a base class that acts as an interface
 * between objects and data access objects to
 * return data from the database for layouts
*/

class ObjectModel
{
public:
    ObjectModel();
    virtual QSqlQueryModel* getComboBox(QString menu, QString order);

    // database views
    virtual QSqlQueryModel* getTableModel(QString view);

    // stored procedures
    virtual QSqlQueryModel* getTableModel(QString view, QString id);
    virtual QSqlQueryModel* getTreeModel(QString view);

    // pure virtual function to setup dynamic layouts
    virtual QVBoxLayout* setLayout(QString id) = 0;

protected:
    QSqlQueryModel *model;
    class ObjectDAO* objectDAO;
};

#endif // OBJECTMODEL_H
