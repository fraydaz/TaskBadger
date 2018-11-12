#ifndef TASK_H
#define TASK_H

// Task Data Class

#include "taskdao.h"
#include <QString>
#include <QDateTime>
#include <QVector>
#include <QSqlDatabase>

class Task
{
public:
    Task();
    // Functions for View Tasks
    int getId() const;
    QString getName() const;
    QString getDetails() const;
    QString getPriority() const;
    QDate getDueDate() const;
    QString getStatus() const;
    QString getProject() const;

    void setName(const QString& name);
    void setDetails(const QString& description);
    void setPriority(const QString& priority);
    void setDueDate(QDate due);
    void setStatusID(const QString& statusVal);
    void setProjectID(const QString& projectVal);

    void create_task();
    void update_task(QString id);
    void delete_task(QString id);

private:
    class TaskDAO* taskDAO;

    int tId;
    QString tName;
    QString tDetails;
    QString tPriority;
    QDate tDue;
    QString tStatus;
    QString tProject;
    int tStatusID;
    int tProjectID;
};

#endif // TASK_H
