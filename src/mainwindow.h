#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "project.h"
#include "projectmodel.h"
#include "task.h"
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
    void openTab(QTabWidget* widget, int index);
    void openWidgetPg(int index);

    void setComboBox(QComboBox* menu, QString table, QString column);
    void setDefaultDate();

    void saveProject();
    void saveTask();
    void setTreeView();
    void setTableViews();
    void setTableView(QTableView *table, QString view);
    void setTaskView(QString view, QString id);

    void clearProjForm();
    void clearTaskForm();
    void editProject(QString id);
    void editTask(QString id);
    QVBoxLayout* setProjLayout();
    QVBoxLayout* setTaskLayout();

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


    /*  PROJECT BUTTON SLOTS   */

    void on_editProj_clicked();

    void on_newProj_clicked();

    void on_deleteProj_clicked();

    void on_searchProj_clicked();

    void on_ProjSave_clicked();

    void on_ProjCancel_clicked();

    void on_projectsView_clicked(const QModelIndex &index);

    void on_projectsView_doubleClicked(const QModelIndex &index);


    void on_project_tabWidget_tabCloseRequested(int index);

    void on_task_tabWidget_tabCloseRequested(int index);

    void on_projTasks_clicked();

    void on_projLists_clicked();

    void on_back_to_project_clicked();

    void on_task_list_clicked();

    void on_new_task_clicked();

    void on_edit_task_clicked();

    void on_delete_task_clicked();

    void on_search_task_clicked();

    void on_task_save_clicked();

    void on_task_cancel_clicked();

    void on_tasksView_clicked(const QModelIndex &index);

    void on_tasksView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    class DBManager *DB;
    class Project *project;
    class ProjectModel *projectModel;
    class Task* task;

    int viewAllTab = 0;
    int createNewTab = 1;
    int projectTab = 0;
    int dashboardPg = 0;
    int projectsPg = 1;
    int tasksPg = 2;
    int listsPg = 3;
    QString projectID = "0";
    QString projectName = "";
    QString taskID = "0";

    QWidget *newTab;
    QTableView *newTable;
};

#endif // MAINWINDOW_H
