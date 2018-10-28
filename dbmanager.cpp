#include "dbmanager.h"
#include <QSqlError>
#include <QDebug>
#include <QString>

DBManager::DBManager()
{
    connectDB();
}
bool DBManager::connectDB()
{
    if (QSqlDatabase::contains("MyDB"))
        QSqlDatabase db = QSqlDatabase::database("MyDB");
    else
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "MyDB");
        db.setHostName(host);
        db.setDatabaseName(database);
        db.setUserName(username);
        db.setPassword(password);
        if (!db.open())
        {
            QString error = db.lastError().text();
            errorMsg.setText(error);
            errorMsg.show();
        }
    }
}
QSqlQuery DBManager::sqlSelect(QString query)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery result = QSqlQuery(localdb);
    result.prepare(query);

    if(!result.exec())
        qWarning() << "ERROR: " << result.lastError();
    else
        qDebug() << "Query Successful: " << result.lastQuery();
    return result;
}

QSqlQuery DBManager::sqlSelect(QSqlQuery query)
{
    if(!query.exec())
        qWarning() << "ERROR: " << query.lastError();
    else
        qDebug() << "Query Successful: " << query.lastQuery();
    return query;
}
bool DBManager::sqlInsert(QSqlQuery sql)
{
    bool success = false;
    success = sql.exec();

    if(!success)
        qWarning() << "ERROR: " << sql.lastError().text();
    else
        qDebug() << "New Project Saved.";
    return success;
}
