#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "exception.h"
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>

/*
 * This class interacts directly with the
 * database. It opens the database connection
 * when the application begins and then
 * handles all the database queries.
*/
class DBManager
{
public:

    DBManager();

    // closes the database connection
    ~DBManager();

    void connectDB();

    bool sqlInsert(QSqlQuery sql);

    void sqlDelete(QString sql);

    QSqlQuery sqlSelect(QString sql);
    QSqlQuery sqlSelect(QSqlQuery sql);

    // execute other queries
    QSqlQuery sqlExec(QString sql);

private:
    QSqlDatabase db;
    QString host;
    QString database;
    QString username;
    QString password;

    // to show error/success
    // messages when query fails
    QMessageBox errorMsg;

    class Exception* exception;
};

#endif // DBMANAGER_H
