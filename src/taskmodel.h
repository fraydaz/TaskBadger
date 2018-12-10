#ifndef TASKMODEL_H
#define TASKMODEL_H

#include "objectmodel.h"
#include "taskformlayout.h"
#include "taskdao.h"

/*
 * This class inherits from ObjectModel
 * and acts as an interface between the task,
 * TaskFormLayout and TaskDAO classes to set
 * up the layout with data from the database
*/

class TaskModel : public ObjectModel
{
public:
    TaskModel();

    // sets up layout to view/edit existing
    // task with the task info from db
    QVBoxLayout* setLayout(QString id);

private:
    class TaskDAO* taskDAO;
};

#endif // TASKMODEL_H
