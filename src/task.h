#ifndef TASK_H
#define TASK_H

// Task Data Class

#include "taskdao.h"
#include "dbobject.h"
#include <QString>

class Task : public DBObject
{
public:
    Task();

    void create_task();
    void update_task(QString id);
    QString getProjectName(QString id);

private:
    class TaskDAO* taskDAO;
};

#endif // TASK_H
