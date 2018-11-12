#include "task.h"
#include <QSqlQuery>

Task::Task()
{
    taskDAO = new TaskDAO();
}
void Task::create_task()
{
    taskDAO->saveTask(tName, tDetails, tPriority,
                      tDue, tStatusID, tProjectID);
}
void Task::delete_task(QString id)
{
    taskDAO->deleteTask(id);
}
void Task::update_task(QString id)
{
    taskDAO->updateTask(id, tName, tDetails, tPriority,
                           tDue, tStatusID, tProjectID);
}
/******************************************
                SET FUNCTIONS
*******************************************/
void Task::setName(const QString &name)
{
    tName = name;
}
void Task::setDetails(const QString &description)
{
    tDetails = description;
}
void Task::setPriority(const QString &priority)
{
    tPriority = priority;
}
void Task::setDueDate(QDate due)
{
    tDue = due;
}
void Task::setStatusID(const QString &statusVal)
{
    tStatus = statusVal;
    tStatusID = taskDAO->getFkID("status", statusVal);
}
void Task::setProjectID(const QString &projectVal)
{
    tProject = projectVal;
    tProjectID = taskDAO->getFkID("project", projectVal);
}
/******************************************
                GET FUNCTIONS
*******************************************/
int Task::getId() const
{
    return tId;
}
QString Task::getName() const
{
    return tName;
}
QString Task::getDetails() const
{
    return tDetails;
}
QString Task::getPriority() const
{
    return tPriority;
}
QDate Task::getDueDate() const
{
    return tDue;
}
QString Task::getStatus() const
{
    return tStatus;
}
QString Task::getProject() const
{
    return tProject;
}
