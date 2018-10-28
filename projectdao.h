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

    QString getFkValue(QString table, int id);

    bool saveProject(QString n, QString d, QString p, QString c,
                     QDateTime dt, QDate due, int s, int cat);

    QSqlQuery getList(QString table, QString value);
    QSqlQuery getView(QString view);

private:
    class DBManager *Database;
};

#endif // PROJECTDAO_H
