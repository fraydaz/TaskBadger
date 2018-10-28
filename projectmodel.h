#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include "projectdao.h"
#include "project.h"
#include <QtCore>
#include <QtGui>
#include <QString>
#include <QDateTime>
#include <QSqlQueryModel>
#include <QTabWidget>
#include <QTableView>

class ProjectModel
{
public:
    ProjectModel();
    QSqlQueryModel* setComboBox(QString menu, QString order);
    QSqlQueryModel* setTableView(QString view);
    QSqlQueryModel* setTreeView(QString view);

private:
    class ProjectDAO* projectDAO;
    class Project* project;
    QSqlQueryModel *model;
};

#endif // PROJECTMODEL_H
