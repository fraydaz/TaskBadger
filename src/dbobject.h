#ifndef DBOBJECT_H
#define DBOBJECT_H

#include <QString>
#include <QDateTime>
#include "objectdao.h"

class DBObject
{
public:
    DBObject();

    virtual int getId() const;
    virtual QString getName() const;
    virtual QString getDescription() const;
    virtual QString getPriority() const;
    virtual QDate getDueDate() const;
    virtual QString getStatus() const;
    virtual QString getCost() const;
    virtual QDateTime getDateCreated() const;
    virtual QString getCategory() const;
    virtual QString getProject() const;
    virtual QString getCatID(const QString& catVal) const;
    virtual QString getListID(const QString& listVal) const;

    // Virtual functions to set values
    // for database objects
    virtual void setName(const QString& name);
    virtual void setDescription(const QString& description);
    virtual void setPriority(const QString& priority);
    virtual void setCost(const QString& cost);
    virtual void setDateCreated();
    virtual void setDueDate(QDate due);
    virtual void setStatusID(const QString& statusVal);
    virtual void setCatID(const QString& catVal);
    virtual void setProjectID(const QString& projectVal);
    virtual void setTaskID(const QString& taskVal);
    virtual void setListID(const QString& listVal);

    virtual void delete_object(QString table, QString id);

    // Virtual functions
  /*  virtual void add_task();
    virtual void add_list();
    virtual void view_tasks();
    virtual void view_lists();*/

protected:
    class ObjectDAO* objectDAO;

    int oId;
    QString oName;
    QString oDetails;
    QString oPriority;
    QString oCost;
    QDateTime oDate;
    QDate oDue;
    QString oStatus;
    int oStatusID;
    QString oCat;
    int oCatID;
    QString oProject;
    int oProjectID;
    int oTaskID;
    QString oTask;
    int oListID;
    QString oList;
};

#endif // DBOBJECT_H
