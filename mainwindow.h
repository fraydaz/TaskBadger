#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QSqlQueryModel>
#include "project.h"
#include "dbconnection.h"

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

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    class Project *ProjectPg;
    class DBConnection *DB;

   // void connectDB();
    void setTreeView();
    void setTableView();
};

#endif // MAINWINDOW_H
