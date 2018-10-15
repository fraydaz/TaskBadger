#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

class DBConnection
{
public:
    DBConnection();
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    bool sqlInsert(QSqlQuery sql);
    QSqlQuery sqlSelect(QString query);
    void sqlDelete(QString query);
    void initializeDB();
private:
    QString host = "127.0.0.1";
    QString database = "task_badger";
    QString username = "badger";
    QString password = "champlain";
};

#endif // DBCONNECTION_H
