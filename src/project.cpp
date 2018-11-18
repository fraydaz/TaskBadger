#include "project.h"

Project::Project()
{
    projectDAO = new ProjectDAO();
}
void Project::create_project()
{
    projectDAO->saveProject(oName, oDetails, oPriority,
                              oCost, oDate, oDue, oStatusID, oCatID);
}
void Project::update_project(QString id)
{
    projectDAO->updateProject(id, oName, oDetails, oPriority,
                              oCost, oDue, oStatusID, oCatID);
}
