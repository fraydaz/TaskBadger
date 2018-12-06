#include "list.h"

List::List()
{
    listDAO = new ListDAO();
}
void List::create_list(QString l_type)
{
    if (l_type == "project")
        listDAO->saveList_Proj(oName, oProjectID);
    else if (l_type == "task")
         listDAO->saveList_Task(oName, oTaskID);
}
void List::update_list(QString id)
{
    //listDAO->updateList(id, oName, oProjectID, oTaskID);
}
QString List::getProjectName(QString id)
{
    return listDAO->getFkValue("project", id);
}
QString List::getTaskName(QString id)
{
    return listDAO->getFkValue("task", id);
}
