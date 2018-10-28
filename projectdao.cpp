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
QString ProjectDAO::getFkValue(QString table, int id)
{
    QString value = "";
    QString sql = "SELECT name FROM " + table + " WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
void ProjectDAO::saveProject(QString n, QString d, QString p, QString c,
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

   Database->sqlInsert(query);
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
