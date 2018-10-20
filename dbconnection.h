#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>

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
    QString host = "localhost";
    QString database = "task_badger";
    QString username = "badger";
    QString password = "champlain";
    QMessageBox errorMsg;
};

#endif // DBCONNECTION_H
