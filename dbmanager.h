#ifndef DBMANAGER_H
#define DBMANAGER_H

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
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    bool connectDB();
    bool sqlInsert(QSqlQuery sql);
    QSqlQuery sqlSelect(QString query);
    QSqlQuery sqlSelect(QSqlQuery query);
    void sqlDelete(QString query);
    void initializeDB();
private:
    QString host = "localhost";
    QString database = "task_badger";
    QString username = "badger";
    QString password = "champlain";
    QMessageBox errorMsg;
};

#endif // DBMANAGER_H
