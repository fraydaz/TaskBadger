#include "projectdao.h"
#include <QSqlQuery>
#include <QVariant>

ProjectDAO::ProjectDAO()
{
    Database = new DBManager();
}
int ProjectDAO::getFkID(QString table, QString value)
{
    int id = 0;
    QString sql = "SELECT id FROM " + table + " WHERE name='" + value + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    id = query.value(0).toInt();
    return id;
}
QString ProjectDAO::getFkValue(QString table, QString id)
{
    QString value = "";
    QString sql = "SELECT name FROM " + table + " WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
bool ProjectDAO::saveProject(QString n, QString d, QString p, QString c,
                             QDateTime dt, QDate due, int s, int cat)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO project(name, description, priority, "
                      "total_cost, date_created, due_date, statusID, categoryID) "
                       "VALUES(:pName, :pDetails, :pPriority, :pCost, :pDate, "
                      ":pDue, :pStatus, :pCat)");
    query.bindValue(":pName", n);
    query.bindValue(":pDetails", d);
    query.bindValue(":pPriority", p);
    query.bindValue(":pCost", c);
    query.bindValue(":pDate", dt);
    query.bindValue(":pDue", due);
    query.bindValue(":pStatus", s);
    query.bindValue(":pCat", cat);

    bool saved = Database->sqlInsert(query);
    return saved;
}
void ProjectDAO::deleteProject(QString id)
{
    QString sql = "DELETE FROM project WHERE id='" + id + "'";
    Database->sqlDelete(sql);
}
bool ProjectDAO::updateProject(QString id, QString n, QString d, QString p,
                               QString c, QDate due, int s, int cat)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("UPDATE project SET name = :pName, description = :pDetails, "
                  "priority = :pPriority, total_cost = :pCost, due_date = :pDue, "
                  "statusID = :pStatus, categoryID = :pCat WHERE id = :id");
    query.bindValue(":pName", n);
    query.bindValue(":pDetails", d);
    query.bindValue(":pPriority", p);
    query.bindValue(":pCost", c);
    query.bindValue(":pDue", due);
    query.bindValue(":pStatus", s);
    query.bindValue(":pCat", cat);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
QSqlQuery ProjectDAO::getList(QString table, QString value)
{
    QString sql = "SELECT name FROM " + table + " ORDER BY " + value + " ASC";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QSqlQuery ProjectDAO::getView(QString view)
{
    QString sql = "SELECT * FROM " + view + ";";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QSqlQuery ProjectDAO::getRoutine(QString procedure, QString id)
{
    QString set = "SET @id = " + id + ";";
    QSqlQuery query = Database->sqlExec(set);
    QString call = "CALL " + procedure + "(@id);";
    QSqlQuery result = Database->sqlExec(call);
    return result;
}
QString ProjectDAO::getProjInfo(QString id, QString data)
{
    QString value = "";
    QString sql = "SELECT " + data + " FROM project WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
QDate ProjectDAO::getProjDate(QString id, QString data)
{
    QDate date = QDate::currentDate();
    QString sql = "SELECT " + data + " FROM project WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    date = query.value(0).toDate();
    return date;
}
