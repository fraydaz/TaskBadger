#ifndef TASK_H
#define TASK_H

// Task Data Class

#include "taskdao.h"
#include "dbobject.h"
#include <QString>

/*
 * This class inherits from DBObject
 * and handles the project tasks
*/
class Task : public DBObject
{
public:
    Task();

    void create_task();
    void update_task(QString id);

    // gets name of project when passed the ID
    QString getProjectName(QString id);

private:
    class TaskDAO* taskDAO;
};

#endif // TASK_H
