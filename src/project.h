#ifndef PROJECT_H
#define PROJECT_H

// Project Data Class
//
#include "projectdao.h"
#include <QString>
#include <QDateTime>
#include <QVector>
#include <QSqlDatabase>

class Project
{
public:
    Project();
    //explicit Project(const QString& name = "");

    // Functions for View Projects
    int getId() const;
    QString getName() const;
    QString getDescription() const;
    QString getPriority() const;
    QString getCost() const;
    QDateTime getDateCreated() const;
    QDate getDueDate() const;
    QString getStatus() const;
    QString getCategory() const;

    // Done
    void setName(const QString& name);
    void setDescription(const QString& description);
    void setPriority(const QString& priority);
    void setCost(const QString& cost);
    void setDateCreated();
    void setDueDate(QDate due);
    void setCatID(const QString& catVal);
    void setStatusID(const QString& statusVal);

    // Write This Code Today
    void create_project();
    void update_project(QString id);
    void delete_project(QString id);

    // Pages To Be Added
    void add_task();
    void add_list();
    void view_tasks();
    void view_lists();


private:
    class ProjectDAO* projectDAO;

    int pId;
    QString pName;
    QString pDetails;
    QString pPriority;
    QString pCost;
    QDateTime pDate;
    QDate pDue;
    QString pStatus;
    QString pCat;
    int pStatusID;
    int pCatID;
};

#endif // PROJECT_H
