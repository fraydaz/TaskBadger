#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include "projectdao.h"
#include "project.h"
#include "tabformlayout.h"
#include "taskformlayout.h"
#include "taskdao.h"
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
    QSqlQueryModel* setTaskView(QString view, QString id);
    QSqlQueryModel* setTreeView(QString view);
    QVBoxLayout* setProjLayout(QString id);
    QVBoxLayout* setTaskLayout(QString id);
    //void setProjData(TabFormLayout *layout, QString id);

private:
    class ProjectDAO* projectDAO;
    class TaskDAO* taskDAO;
    class Project* project;
    QSqlQueryModel *model;
};

#endif // PROJECTMODEL_H
