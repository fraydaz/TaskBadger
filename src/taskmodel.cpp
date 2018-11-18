#include "taskmodel.h"

TaskModel::TaskModel()
{
    taskDAO = new TaskDAO();
}
QSqlQueryModel* TaskModel::getTableModel(QString view, QString id)
{
    QSqlQuery query = objectDAO->getRoutine(view, id);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QVBoxLayout* TaskModel::setTaskLayout(QString id)
{
    QVBoxLayout *taskLayout = new QVBoxLayout;
    class TaskFormLayout *newLayout;
    newLayout = new TaskFormLayout();
    taskLayout = newLayout->setupUi();
    newLayout->number->setText(id);
    newLayout->number->setStyleSheet("");
    newLayout->name->setText(taskDAO->getObjectInfo(id, "name", "task"));
    newLayout->priority->setCurrentText(taskDAO->getObjectInfo(id, "priority", "task"));
    newLayout->description->setText(taskDAO->getObjectInfo(id, "description", "task"));
    QString statusID = taskDAO->getObjectInfo(id, "statusID", "task");
    newLayout->status->setCurrentText(taskDAO->getFkValue("status", statusID));
    QString projectID = taskDAO->getObjectInfo(id, "projectID", "task");
    newLayout->project->setCurrentText(taskDAO->getFkValue("project", projectID));
    newLayout->due->setDate(taskDAO->getObjectDate(id, "due_date", "task"));
    return taskLayout;
}
