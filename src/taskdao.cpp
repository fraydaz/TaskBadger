#include "taskdao.h"
#include <QSqlQuery>
#include <QVariant>

TaskDAO::TaskDAO()
{
    Database = new DBManager();
}
int TaskDAO::getFkID(QString table, QString value)
{
    int id = 0;
    QString sql = "SELECT id FROM " + table + " WHERE name='" + value + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    id = query.value(0).toInt();
    return id;
}
QString TaskDAO::getFkValue(QString table, QString id)
{
    QString value = "";
    QString sql = "SELECT name FROM " + table + " WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
bool TaskDAO::saveTask(QString n, QString d, QString p,
                       QDate due, int s, int proj)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO task(name, details, priority, "
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
void TaskDAO::deleteTask(QString id)
{
    QString sql = "DELETE FROM task WHERE id='" + id + "'";
    Database->sqlDelete(sql);
}
bool TaskDAO::updateTask(QString id, QString n, QString d, QString p,
                         QDate due, int s, int proj)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("UPDATE task SET name = :tName, details = :tDetails, "
                  "priority = :tPriority, due_date = :tDue, statusID = :tStatus, "
                  "projectID = :tProject WHERE id = :id");
    query.bindValue(":tName", n);
    query.bindValue(":tDetails", d);
    query.bindValue(":tPriority", p);
    query.bindValue(":tDue", due);
    query.bindValue(":tStatus", s);
    query.bindValue(":tProject", proj);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
QSqlQuery TaskDAO::getList(QString table, QString value)
{
    QString sql = "SELECT name FROM " + table + " ORDER BY " + value + " ASC";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QSqlQuery TaskDAO::getView(QString view)
{
    QString sql = "SELECT * FROM " + view + ";";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QString TaskDAO::getTaskInfo(QString id, QString data)
{
    QString value = "";
    QString sql = "SELECT " + data + " FROM task WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
QDate TaskDAO::getTaskDate(QString id, QString data)
{
    QDate date = QDate::currentDate();
    QString sql = "SELECT " + data + " FROM task WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    date = query.value(0).toDate();
    return date;
}
