#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "dbconnection.h"
#include <QString>
#include <QDateTime>
#include <QSqlQueryModel>
#include <QTabWidget>
#include <QTableView>
#include <QHBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_createProject_clicked();

    void on_upcomingDeadlines_clicked();

    void on_urgentProjects_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);


    void on_tabWidget_tabCloseRequested(int index);

    void on_ProjSave_3_clicked();

    void on_ProjCancel_3_clicked();

    void on_editProj_2_clicked();

    void on_newProj_2_clicked();

    void on_deleteProj_2_clicked();

    void on_searchProj_2_clicked();


    void on_actionHome_triggered();

    void on_actionRefresh_triggered();

    void on_actionNext_triggered();

    void on_actionBack_triggered();

    void on_tableView_3_clicked(const QModelIndex &index);

    void on_tableView_3_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    class Project *ProjectPg;
    class DBConnection *DB;

   // void connectDB();
    void setTreeView();
    void setTableView();

    QString pName;
    QString pDetails;
    QString pPriority;
    QString pCost;
    QDate pDue;
    int pStatus;
    int pCat;
    QDateTime pDate = QDateTime::currentDateTime();
    QWidget *newTab;
    QTableView *newTable;

    void populateCat();
    void populateStat();
    void getFormInfo();
    void setCatID();
    void setStatusID();
    void insertData();
    QHBoxLayout* setProjLayout();
};

#endif // MAINWINDOW_H
