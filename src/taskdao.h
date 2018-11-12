#ifndef TASKDAO_H
#define TASKDAO_H

#include "dbmanager.h"
#include <QString>
#include <QDateTime>

class TaskDAO
{
public:
    TaskDAO();
    int getFkID(QString table, QString value);

    QString getFkValue(QString table, QString id);

    bool saveTask(QString n, QString d, QString p,
                     QDate due, int s, int proj);
    void deleteTask(QString id);
    bool updateTask(QString id, QString n, QString d, QString p,
                       QDate due, int s, int proj);
    QSqlQuery getList(QString table, QString value);
    QSqlQuery getView(QString view);
    QString getTaskInfo(QString id, QString data);
    QDate getTaskDate(QString id, QString data);

private:
    class DBManager *Database;
};

#endif // TASKDAO_H
