#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "project.h"
#include "task.h"
#include "list.h"
#include "listitem.h"
#include "projectmodel.h"
#include "taskmodel.h"
#include "listmodel.h"
#include "objectmodel.h"

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

/*
 * This class manages the user interface
 * for all pages in the project
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
    void setUILayout();

    // opens specified tab
    void openTab(QTabWidget* widget, int index);

    // opens a different page
    void openWidgetPg(int index);

    // populate comboboxes with info from database
    void setComboBox(QComboBox* menu, QString table, QString column);

    void setDefaultDate();
    void refreshPg();

    void saveProject();
    void saveTask();
    void saveList();
    void saveItem();

    // on home page
    void setTreeView();

    // list items view
    void setListView();

    // all tables that show db views
    void setTableView(QTableView *table, QString view);

    // all tables that show db stored procedures
    void setTableView(QTableView *table, QString view, QString id);

    void clearProjForm();
    void clearTaskForm();
    void clearListForm();

    void editProject(QString id);
    void editTask(QString id);
    void editList(QString id);

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

    void on_treeView_clicked(const QModelIndex &index);


    /*  PROJECT BUTTON SLOTS   */

    void on_projTasks_clicked();

    void on_projLists_clicked();

    void on_editProj_clicked();

    void on_newProj_clicked();

    void on_deleteProj_clicked();

    void on_ProjSave_clicked();

    void on_ProjCancel_clicked();

    void on_projectsView_clicked(const QModelIndex &index);

    void on_projectsView_doubleClicked(const QModelIndex &index);

    void on_project_tabWidget_tabCloseRequested(int index);


    /*      TASK BUTTON SLOTS       */

    void on_back_to_project_clicked();

    void on_task_list_clicked();

    void on_new_task_clicked();

    void on_edit_task_clicked();

    void on_delete_task_clicked();

    void on_task_save_clicked();

    void on_task_cancel_clicked();

    void on_tasksView_clicked(const QModelIndex &index);

    void on_tasksView_doubleClicked(const QModelIndex &index);

    void on_task_tabWidget_tabCloseRequested(int index);


    /*      LIST BUTTON SLOTS       */

    void on_list_save_clicked();

    void on_list_cancel_clicked();

    void on_back_button_clicked();

    void on_new_list_clicked();

    void on_delete_list_clicked();

    void on_listsView_clicked(const QModelIndex &index);

    void on_listsView_doubleClicked(const QModelIndex &index);

    void on_edit_list_clicked();

    void on_list_tabWidget_tabCloseRequested(int index);

    void on_saveItem_clicked();

private:
    // interface pointer
    Ui::MainWindow *ui;

    // for all model-based views
    QSqlQueryModel *model;

    class DBManager *DB;
    class Project *project;
    class ProjectModel *projectModel;
    class Task* task;
    class TaskModel *taskModel;
    class List* list;
    class ListModel *listModel;
    class ListItem *item;

    // first tab on every page
    int viewAllTab = 0;

    // second tab on every page
    int createNewTab = 1;

    int dashboardPg = 0;
    int projectsPg = 1;
    int tasksPg = 2;
    int listsPg = 3;
    int upcomingPg = 4;
    int urgentPg = 5;

    QString projectID = "0";
    QString projectName = "";
    QString taskID = "0";
    QString taskName = "";
    QString listID = "0";
    QString listName = "";
    QString listType = "";

    QWidget *newTab;
    QTableView *newTable;
};

#endif // MAINWINDOW_H
