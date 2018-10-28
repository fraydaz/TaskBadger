#include "project.h"
#include <QSqlQuery>

Project::Project()
{
    projectDAO = new ProjectDAO();
}
void Project::create_project()
{
    projectDAO->saveProject(pName, pDetails, pPriority, pCost,
                            pDate, pDue, pStatusID, pCatID);
}

/******************************************
                SET FUNCTIONS
*******************************************/
void Project::setName(const QString &name)
{
    pName = name;
}
void Project::setDescription(const QString &description)
{
    pDetails = description;
}
void Project::setPriority(const QString &priority)
{
    pPriority = priority;
}
void Project::setCost(const QString &cost)
{
    pCost = cost;
}
void Project::setDateCreated()
{
    pDate = QDateTime::currentDateTime();
}
void Project::setDueDate(QDate due)
{
    pDue = due;
}
void Project::setCatID(const QString &catVal)
{
    pCat = catVal;
    pCatID = projectDAO->getFkID("category", catVal);
}
void Project::setStatusID(const QString &statusVal)
{
    pStatus = statusVal;
    pStatusID = projectDAO->getFkID("status", statusVal);
}

/******************************************
                GET FUNCTIONS
*******************************************/
int Project::getId() const
{
    return pId;
}
QString Project::getName() const
{
    return pName;
}
QString Project::getDescription() const
{
    return pDetails;
}
QString Project::getPriority() const
{
    return pPriority;
}
QString Project::getCost() const
{
    return pCost;
}
QDateTime Project::getDateCreated() const
{
    return pDate;
}
QDate Project::getDueDate() const
{
    return pDue;
}
QString Project::getStatus() const
{
    return pStatus;
}
QString Project::getCategory() const
{
    return pCat;
}
