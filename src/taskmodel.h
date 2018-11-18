#ifndef TASKMODEL_H
#define TASKMODEL_H

#include "objectmodel.h"
#include "taskformlayout.h"
#include "taskdao.h"

class TaskModel : public ObjectModel
{
public:
    TaskModel();
    QVBoxLayout* setLayout(QString id);

private:
    class TaskDAO* taskDAO;
};

#endif // TASKMODEL_H
