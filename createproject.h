#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QMainWindow>
#include "mainwindow.h"
#include "dbconnection.h"
#include <QString>
#include <QDateTime>
#include <QSqlQueryModel>

namespace Ui {
class CreateProject;
}

class CreateProject : public QMainWindow
{
    Q_OBJECT


public:
    explicit CreateProject(QWidget *parent = 0);
    ~CreateProject();

private slots:

    void on_ProjCancel_clicked();
    void on_ProjSave_clicked();

private:
    Ui::CreateProject *ui;
    QSqlQueryModel *model;
    class DBConnection *DB;

    QString pName;
    QString pDetails;
    QString pPriority;
    QString pCost;
    QDate pDue;
    int pStatus;
    int pCat;
    QDateTime pDate = QDateTime::currentDateTime();

    void populateCat();
    void populateStat();
    void getFormInfo();
    void setCatID();
    void setStatusID();
    void insertData();

};

#endif // CREATEPROJECT_H
