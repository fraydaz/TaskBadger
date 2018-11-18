#ifndef TASKMODEL_H
#define TASKMODEL_H

#include "objectmodel.h"
#include "taskformlayout.h"

class TaskModel : public ObjectModel
{
public:
    TaskModel();

    QSqlQueryModel* getTableModel(QString view, QString id);
    QVBoxLayout* setTaskLayout(QString id);

private:
    class TaskDAO* taskDAO;
};

#endif // TASKMODEL_H
