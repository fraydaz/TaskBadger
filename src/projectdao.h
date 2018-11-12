#ifndef PROJECTDAO_H
#define PROJECTDAO_H

#include "dbmanager.h"
#include <QString>
#include <QDateTime>

class ProjectDAO
{
public:
    ProjectDAO();
    int getFkID(QString table, QString value);

    QString getFkValue(QString table, QString id);

    bool saveProject(QString n, QString d, QString p, QString c,
                     QDateTime dt, QDate due, int s, int cat);
    void deleteProject(QString id);
    bool updateProject(QString id, QString n, QString d, QString p,
                       QString c, QDate due, int s, int cat);
    QSqlQuery getList(QString table, QString value);
    QSqlQuery getView(QString view);
    QSqlQuery getRoutine(QString procedure, QString id);
    QString getProjInfo(QString id, QString data);
    QDate getProjDate(QString id, QString data);

private:
    class DBManager *Database;
};

#endif // PROJECTDAO_H
