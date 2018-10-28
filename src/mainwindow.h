#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "project.h"
#include "projectmodel.h"
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
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
    void setUILayout();
    void openProjTab(int index);
    void openWidgetPg(int index);

    void populateCat();
    void populateStat();

    void saveProject();
    void setTreeView();
    void setTableView(QTableView *table, QString view);

    void clearProjForm();
    QHBoxLayout* setProjLayout();

private slots:
    /*      ACTION SLOTS        */
    void on_actionHome_triggered();

    void on_actionRefresh_triggered();

    void on_actionNext_triggered();

    void on_actionBack_triggered();


    /*  DASHBOARD BUTTON SLOTS   */
    void on_createProject_clicked();

    void on_upcomingDeadlines_clicked();

    void on_urgentProjects_clicked();

    void on_tabWidget_tabCloseRequested(int index);


    /*  PROJECT BUTTON SLOTS   */

    void on_editProj_clicked();

    void on_newProj_clicked();

    void on_deleteProj_clicked();

    void on_searchProj_clicked();

    void on_ProjSave_clicked();

    void on_ProjCancel_clicked();

    void on_projectsView_clicked(const QModelIndex &index);

    void on_projectsView_doubleClicked(const QModelIndex &index);


private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    class DBManager *DB;
    class Project *project;
    class ProjectModel *projModel;

    int ProjectsTab = 0;
    int newProjTab = 1;
    int dashboardPg = 0;
    int projectsPg = 1;
;
    QWidget *newTab;
    QTableView *newTable;
};

#endif // MAINWINDOW_H
