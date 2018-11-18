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
    //virtual QSqlQueryModel* getTreeView(QString view);
    //virtual QVBoxLayout* setLayout(QString id);
    //void setProjData(TabFormLayout *layout, QString id);

protected:
    QSqlQueryModel *model;
    class ObjectDAO* objectDAO;
};

#endif // OBJECTMODEL_H
