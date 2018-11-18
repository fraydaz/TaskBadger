#include "objectdao.h"
#include <QSqlQuery>
#include <QVariant>

ObjectDAO::ObjectDAO()
{
    Database = new DBManager();
}
int ObjectDAO::getFkID(QString table, QString value)
{
    int id = 0;
    QString sql = "SELECT id FROM " + table + " WHERE name='" + value + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    id = query.value(0).toInt();
    return id;
}
QString ObjectDAO::getFkValue(QString table, QString id)
{
    QString value = "";
    QString sql = "SELECT name FROM " + table + " WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
void ObjectDAO::deleteObject(QString table,QString id)
{
    QString sql = "DELETE FROM " + table + " WHERE id='" + id + "'";
    Database->sqlDelete(sql);
}
QSqlQuery ObjectDAO::getList(QString table, QString value)
{
    QString sql = "SELECT name FROM " + table + " ORDER BY " + value + " ASC";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QSqlQuery ObjectDAO::getView(QString view)
{
    QString sql = "SELECT * FROM " + view + ";";
    QSqlQuery query = Database->sqlSelect(sql);
    return query;
}
QString ObjectDAO::getObjectInfo(QString id, QString data, QString table)
{
    QString value = "";
    QString sql = "SELECT " + data + " FROM  " + table + " WHERE id='" + id + "'";
    QSqlQuery query =  Database->sqlSelect(sql);
    query.next();
    value = query.value(0).toString();
    return value;
}
QDate ObjectDAO::getObjectDate(QString id, QString data, QString table)
{
    QDate date = QDate::currentDate();
    QString sql = "SELECT " + data + " FROM  " + table + " WHERE id='" + id + "'";
    QSqlQuery query = Database->sqlSelect(sql);
    query.next();
    date = query.value(0).toDate();
    return date;
}
QSqlQuery ObjectDAO::getRoutine(QString procedure, QString id)
{
    QString set = "SET @id = " + id + ";";
    QSqlQuery query = Database->sqlExec(set);
    QString call = "CALL " + procedure + "(@id);";
    QSqlQuery result = Database->sqlExec(call);
    return result;
}
