#include "dbmanager.h"
#include <QSqlError>
#include <QDebug>
#include <QString>

DBManager::DBManager()
{
    connectDB();
    exception = new Exception();
}
DBManager::~DBManager()
{
    db.close();
}
void DBManager::connectDB()
{
    if (QSqlDatabase::contains("MyDB"))
        db = QSqlDatabase::database("MyDB");
    else
    {
        db = QSqlDatabase::addDatabase("QMYSQL", "MyDB");
        db.setHostName("localhost");
        db.setDatabaseName("task_badger");
        db.setUserName("badger");
        db.setPassword("champlain");
        db.setPort(3306);

        if (!db.open())
            exception->showError(db.lastError().text());
    }
}
QSqlQuery DBManager::sqlSelect(QString sql)
{
    QSqlQuery query = QSqlQuery(db);
    query.prepare(sql);

    if(!query.exec())
    {
        exception->showError(query.lastError().text());
        qDebug() << "Query Failed: " << query.lastQuery();
    }
    else
        qDebug() << "Query Successful: " << query.lastQuery();
    return query;
}
QSqlQuery DBManager::sqlExec(QString sql)
{
    QSqlQuery query = QSqlQuery(db);
    if(!query.exec(sql))
    {
        exception->showError(query.lastError().text());
        qDebug() << "Query Failed: " << query.lastQuery();
    }
    else
    {
        qDebug() << "Query Successful: " << query.lastQuery();
        int i = 0;
            while (query.next()) {
                qDebug() << query.value(i++);
            }
    }
    return query;
}
QSqlQuery DBManager::sqlSelect(QSqlQuery query)
{
    if(!query.exec())
        exception->showError(query.lastError().text());
    else
        qDebug() << "Query Successful: " << query.lastQuery();
    return query;
}
bool DBManager::sqlInsert(QSqlQuery query)
{
    bool success = false;
    success = query.exec();

    if(!success)
    {
        qDebug() << "Query Failed: " << query.lastQuery();
        exception->showError(query.lastError().text());
    }
    else
        exception->showSuccess("Successfully Saved");
    return success;
}
 void DBManager::sqlDelete(QString sql)
 {
     QSqlQuery query = QSqlQuery(db);
     query.prepare(sql);

     if(!query.exec())
         exception->showError(query.lastError().text());
     else
         qDebug() << "Record Deleted: " << query.lastQuery();
 }
/*QString DBManager::sqlCount(QSqlQuery query)
{
    QString total = "0";
    if(!query.exec())
        exception->showError(query.lastError().text());
    else
    {
        total = query.value(0).toString();
        qDebug() << "Total is: " << total;
    }
    qDebug() << "Query Successful: " << query.lastQuery();
    return total;
}*/
