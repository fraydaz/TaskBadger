#include "task.h"

Task::Task()
{
    taskDAO = new TaskDAO();
}
void Task::create_task()
{
    taskDAO->saveTask(oName, oDetails, oPriority,
                      oDue, oStatusID, oProjectID);
}
void Task::update_task(QString id)
{
    taskDAO->updateTask(id, oName, oDetails, oPriority,
                           oDue, oStatusID, oProjectID);
}
QString Task::getProjectName(QString id)
{
    return taskDAO->getFkValue("project", id);
}
