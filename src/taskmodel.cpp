#include "taskmodel.h"

TaskModel::TaskModel()
{
    taskDAO = new TaskDAO();
}
QVBoxLayout* TaskModel::setLayout(QString id)
{
    QVBoxLayout *taskLayout = new QVBoxLayout;
    class TaskFormLayout *newLayout;
    newLayout = new TaskFormLayout();
    taskLayout = newLayout->setupUi();
    newLayout->objID->setText(id);
    newLayout->objID->setStyleSheet("");
    newLayout->objName->setText(taskDAO->getObjectInfo(id, "name", "task"));
    newLayout->objPriority->setCurrentText(taskDAO->getObjectInfo(id, "priority", "task"));
    newLayout->objDescription->setText(taskDAO->getObjectInfo(id, "description", "task"));
    QString statusID = taskDAO->getObjectInfo(id, "statusID", "task");
    newLayout->objStatus->setCurrentText(taskDAO->getFkValue("status", statusID));
    QString projectID = taskDAO->getObjectInfo(id, "projectID", "task");
    newLayout->objProject->setCurrentText(taskDAO->getFkValue("project", projectID));
    newLayout->objDue->setDate(taskDAO->getObjectDate(id, "due_date", "task"));
    return taskLayout;
}
