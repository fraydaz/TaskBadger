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
    // check if database is already open
    if (QSqlDatabase::contains("MyDB"))
        db = QSqlDatabase::database("MyDB");
    else
    {
        // if not connect to database
        db = QSqlDatabase::addDatabase("QMYSQL", "MyDB");
        db.setHostName("localhost");
        db.setDatabaseName("task_badger");
        db.setUserName("badger");
        db.setPassword("champlain");
        db.setPort(3306);

        if (!db.open())
            exception->showDialog(db.lastError().text());
    }
}
// run 'SELECT' queries when passed a string
QSqlQuery DBManager::sqlSelect(QString sql)
{
    // perform query on the open database
    QSqlQuery query = QSqlQuery(db);

    // prepare query
    query.prepare(sql);

    if(!query.exec())
    {
        // show error message with details from MySQL
        exception->showDialog(query.lastError().text());

        // show query that was run for debugging
        qDebug() << "Query Failed: " << query.lastQuery();
    }
    else
        // only shows in application output, not for user
        qDebug() << "Query Successful: " << query.lastQuery();

    // return results from the query
    return query;
}
QSqlQuery DBManager::sqlExec(QString sql)
{
    QSqlQuery query = QSqlQuery(db);
    if(!query.exec(sql))
    {
        exception->showDialog(query.lastError().text());
        qDebug() << "Query Failed: " << query.lastQuery();
    }
    else
    {
        qDebug() << "Query Successful: " << query.lastQuery();

        // for debugging only
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
        exception->showDialog(query.lastError().text());
    else
        qDebug() << "Query Successful: " << query.lastQuery();
    return query;
}
bool DBManager::sqlInsert(QSqlQuery query)
{
    bool success = false;

    // run the insert query
    success = query.exec();

    if(!success)
    {
        qDebug() << "Query Failed: " << query.lastQuery();
        exception->showDialog(query.lastError().text());
    }
    else
        exception->showDialog("Successfully Saved");
    return success;
}
 void DBManager::sqlDelete(QString sql)
 {
     QSqlQuery query = QSqlQuery(db);
     query.prepare(sql);

     if(!query.exec())
         exception->showDialog(query.lastError().text());
     else
         qDebug() << "Record Deleted: " << query.lastQuery();
 }
