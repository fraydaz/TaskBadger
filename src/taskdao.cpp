#include "taskdao.h"
#include <QSqlQuery>
#include <QVariant>

TaskDAO::TaskDAO()
{
    Database = new DBManager();
}
bool TaskDAO::saveTask(QString n, QString d, QString p,
                       QDate due, int s, int proj)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);

    // prepare INSERT query and then bind
    // values to prevent MySQL injection
    query.prepare("INSERT INTO task(name, description, priority, "
                      "due_date, statusID, projectID) "
                       "VALUES(:tName, :tDetails, :tPriority, "
                      ":tDue, :tStatus, :tProject)");
    query.bindValue(":tName", n);
    query.bindValue(":tDetails", d);
    query.bindValue(":tPriority", p);
    query.bindValue(":tDue", due);
    query.bindValue(":tStatus", s);
    query.bindValue(":tProject", proj);

    bool saved = Database->sqlInsert(query);
    return saved;
}
bool TaskDAO::updateTask(QString id, QString n, QString d, QString p,
                         QDate due, int s, int proj)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);

    // prepare UPDATE query and then bind
    // values to prevent MySQL injection
    query.prepare("UPDATE task SET name = :tName, description = :tDetails, "
                  "priority = :tPriority, due_date = :tDue, statusID = :tStatus "
                  " WHERE id = :id");
    query.bindValue(":tName", n);
    query.bindValue(":tDetails", d);
    query.bindValue(":tPriority", p);
    query.bindValue(":tDue", due);
    query.bindValue(":tStatus", s);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
