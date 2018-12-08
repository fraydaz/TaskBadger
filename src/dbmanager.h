#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "exception.h"
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>

class DBManager
{
public:
    DBManager();
    ~DBManager();
    QSqlDatabase db;
    void connectDB();
    bool sqlInsert(QSqlQuery sql);
    QSqlQuery sqlSelect(QString sql);
    QSqlQuery sqlExec(QString sql);
    QSqlQuery sqlSelect(QSqlQuery sql);
    void sqlDelete(QString sql);
    QString sqlCount(QSqlQuery query);
    void initializeDB();
private:
    QString host;
    QString database;
    QString username;
    QString password;
    QMessageBox errorMsg;
    class Exception* exception;
};

#endif // DBMANAGER_H
