#include "dbobject.h"

DBObject::DBObject()
{
    // pointer to database access object
    // base class
    objectDAO = new ObjectDAO();
}

void DBObject::delete_object(QString table, QString id)
{
    objectDAO->deleteObject(table, id);
}
/******************************************
                GET FUNCTIONS
*******************************************/
int DBObject::getId() const
{
    return oId;
}
QString DBObject::getName() const
{
    return oName;
}
QString DBObject::getDescription() const
{
    return oDetails;
}
QString DBObject::getPriority() const
{
    return oPriority;
}
QString DBObject::getCost() const
{
    return oCost;
}
QDateTime DBObject::getDateCreated() const
{
    return oDate;
}
QDate DBObject::getDueDate() const
{
    return oDue;
}
QString DBObject::getStatus() const
{
    return oStatus;
}
QString DBObject::getCategory() const
{
    return oCat;
}
QString DBObject::getProject() const
{
    return oProject;
}
QString DBObject::getCatID(const QString& catVal) const
{
    int id = objectDAO->getFkID("category", catVal);
    return QString::number(id);

}
QString DBObject::getListID(const QString& listVal) const
{
    int id = objectDAO->getFkID("list", listVal);
    return QString::number(id);

}
/******************************************
                SET FUNCTIONS
*******************************************/
void DBObject::setName(const QString& name)
{
    oName = name;
}
void DBObject::setDescription(const QString& description)
{
    oDetails = description;
}
void DBObject::setPriority(const QString& priority)
{
    oPriority = priority;
}
void DBObject::setCost(const QString& cost)
{
    oCost = cost;
}
void DBObject::setDateCreated()
{
    oDate = QDateTime::currentDateTime();
}
void DBObject::setDueDate(const QDate due)
{
    oDue = due;
}
void DBObject::setStatusID(const QString& statusVal)
{
    oStatus = statusVal;
    oStatusID = objectDAO->getFkID("status", statusVal);
}
void DBObject::setCatID(const QString& catVal)
{
    oCat = catVal;
    oCatID = objectDAO->getFkID("category", catVal);
}
void DBObject::setProjectID(const QString& projectVal)
{
    oProject = projectVal;
    oProjectID = objectDAO->getFkID("project", projectVal);
}
void DBObject::setTaskID(const QString& taskVal)
{
    oTask = taskVal;
    oTaskID = objectDAO->getFkID("task", taskVal);
}
void DBObject::setListID(const QString& listVal)
{
    oList = listVal;
    oListID = objectDAO->getFkID("list", listVal);
}
