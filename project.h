#ifndef PROJECT_H
#define PROJECT_H

#include <QMainWindow>
#include <QWidget>
#include "mainwindow.h"
#include "dbconnection.h"
#include <QSqlQueryModel>
#include <QString>
#include <QDateTime>

namespace Ui {
class Project;
}

class Project : public QWidget
{
    Q_OBJECT

public:
    explicit Project(QWidget *parent = 0);
    ~Project();

/*private slots:

    void on_ProjCancel_clicked();
    void on_ProjSave_clicked();*/

private:
    Ui::Project *ui;
  //  Ui::CreateProject *newProjectUI;
    QSqlQueryModel *model;
    class MainWindow* mainWindowPtr;
    class DBConnection *DB;

    QString pName;
    QString pDetails;
    QString pPriority;
    QString pCost;
    QDate pDue;
    int pStatus;
    int pCat;
    QDateTime pDate = QDateTime::currentDateTime();
    class Dialog *dialog;

    void populateCat();
    void populateStat();
    void setCatID();
    void setStatusID();
    void insertData();
    void setTableView();
};

#endif // PROJECT_H
