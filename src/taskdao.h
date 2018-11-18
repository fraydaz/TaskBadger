#ifndef TASKDAO_H
#define TASKDAO_H

#include "dbmanager.h"
#include "objectdao.h"
#include <QString>
#include <QDateTime>

class TaskDAO : public ObjectDAO
{
public:
    TaskDAO();

    bool saveTask(QString n, QString d, QString p,
                     QDate due, int s, int proj);
    bool updateTask(QString id, QString n, QString d, QString p,
                       QDate due, int s, int proj);

private:
    class DBManager *Database;
};

#endif // TASKDAO_H
