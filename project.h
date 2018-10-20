#ifndef PROJECT_H
#define PROJECT_H

#include <QMainWindow>
#include <QWidget>
#include "mainwindow.h"
#include "dbconnection.h"
#include <QString>
#include <QDateTime>
#include <QSqlQueryModel>

namespace Ui {
class Project;
}

class Project : public QWidget
{
    Q_OBJECT

public:
    explicit Project(QWidget *parent = 0);
     void openNewTab();
     void openProjects();
    ~Project();

private slots:

    void on_editProj_clicked();

    void on_newProj_clicked();

    void on_deleteProj_clicked();

    void on_searchProj_clicked();

    void on_ProjSave_2_clicked();

    void on_ProjCancel_2_clicked();

private:
    Ui::Project *ui;
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
    void setTableView();
};

#endif // PROJECT_H
