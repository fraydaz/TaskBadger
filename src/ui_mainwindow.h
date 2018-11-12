/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionBack;
    QAction *actionNext;
    QAction *actionRefresh;
    QAction *actionHome;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSplitter *splitter;
    QTreeView *treeView;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *createProject;
    QPushButton *upcomingDeadlines;
    QPushButton *urgentProjects;
    QWidget *page_2;
    QTabWidget *project_tabWidget;
    QWidget *projects;
    QVBoxLayout *verticalLayout_5;
    QTableView *projectsView;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *projTasks;
    QPushButton *projLists;
    QPushButton *newProj;
    QPushButton *editProj;
    QPushButton *deleteProj;
    QPushButton *searchProj;
    QWidget *newProject;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *ProjName;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_6;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *ProjNum;
    QLineEdit *num;
    QGridLayout *gridLayout_2;
    QComboBox *priority;
    QLabel *ProjDue;
    QDateEdit *due;
    QLabel *ProjPriority;
    QLabel *ProjStatus;
    QComboBox *status;
    QLabel *ProjCat;
    QComboBox *category;
    QLabel *ProjCost;
    QDoubleSpinBox *cost;
    QLabel *ProjDateCreate;
    QDateEdit *created;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ProjDescription;
    QTextEdit *description;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ProjSave;
    QPushButton *ProjCancel;
    QWidget *page_3;
    QTabWidget *task_tabWidget;
    QWidget *tasks;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *projectInfo;
    QSpacerItem *horizontalSpacer_13;
    QTableView *tasksView;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *back_to_project;
    QPushButton *task_list;
    QPushButton *new_task;
    QPushButton *edit_task;
    QPushButton *delete_task;
    QPushButton *search_task;
    QWidget *new_taskTab;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *taskName;
    QLineEdit *t_name;
    QLabel *taskProject;
    QComboBox *t_project;
    QGridLayout *gridLayout;
    QLabel *taskNum;
    QComboBox *t_status;
    QLabel *taskPriority;
    QComboBox *t_priority;
    QLineEdit *t_num;
    QLabel *taskStatus;
    QLabel *taskDue;
    QDateEdit *t_due;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_15;
    QLabel *taskDetails;
    QTextEdit *t_description;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *task_save;
    QPushButton *task_cancel;
    QWidget *page_4;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuTaskBadger;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(830, 574);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/TaskBadgerLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QStringLiteral("actionBack"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/icons8-left-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon1);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/icons8-right-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/Images/icons8-right-48.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNext->setIcon(icon2);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/icons8-available-updates-24.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRefresh->setIcon(icon3);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/icons8-home-24.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHome->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 812, 481));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(86, 86));
        frame->setMaximumSize(QSize(108, 108));
        frame->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter = new QSplitter(page);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setMinimumSize(QSize(0, 270));
        treeView->setMaximumSize(QSize(190, 16777215));
        splitter->addWidget(treeView);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(550, 300));
        splitter->addWidget(tableView);

        verticalLayout_2->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        createProject = new QPushButton(page);
        createProject->setObjectName(QStringLiteral("createProject"));
        QFont font1;
        font1.setPointSize(10);
        createProject->setFont(font1);
        createProject->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/icons8-plus-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        createProject->setIcon(icon5);

        horizontalLayout_2->addWidget(createProject);

        upcomingDeadlines = new QPushButton(page);
        upcomingDeadlines->setObjectName(QStringLiteral("upcomingDeadlines"));
        upcomingDeadlines->setFont(font1);
        upcomingDeadlines->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/icons8-calendar-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        upcomingDeadlines->setIcon(icon6);

        horizontalLayout_2->addWidget(upcomingDeadlines);

        urgentProjects = new QPushButton(page);
        urgentProjects->setObjectName(QStringLiteral("urgentProjects"));
        urgentProjects->setFont(font1);
        urgentProjects->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/icons8-high-priority-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        urgentProjects->setIcon(icon7);

        horizontalLayout_2->addWidget(urgentProjects);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        project_tabWidget = new QTabWidget(page_2);
        project_tabWidget->setObjectName(QStringLiteral("project_tabWidget"));
        project_tabWidget->setGeometry(QRect(10, 0, 791, 481));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        project_tabWidget->setFont(font2);
        project_tabWidget->setTabsClosable(true);
        project_tabWidget->setMovable(true);
        projects = new QWidget();
        projects->setObjectName(QStringLiteral("projects"));
        verticalLayout_5 = new QVBoxLayout(projects);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        projectsView = new QTableView(projects);
        projectsView->setObjectName(QStringLiteral("projectsView"));

        verticalLayout_5->addWidget(projectsView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        projTasks = new QPushButton(projects);
        projTasks->setObjectName(QStringLiteral("projTasks"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/icons8-task-planning-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        projTasks->setIcon(icon8);

        horizontalLayout_5->addWidget(projTasks);

        projLists = new QPushButton(projects);
        projLists->setObjectName(QStringLiteral("projLists"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Images/icons8-to-do-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        projLists->setIcon(icon9);

        horizontalLayout_5->addWidget(projLists);

        newProj = new QPushButton(projects);
        newProj->setObjectName(QStringLiteral("newProj"));
        newProj->setIcon(icon5);

        horizontalLayout_5->addWidget(newProj);

        editProj = new QPushButton(projects);
        editProj->setObjectName(QStringLiteral("editProj"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/icons8-edit-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        editProj->setIcon(icon10);

        horizontalLayout_5->addWidget(editProj);

        deleteProj = new QPushButton(projects);
        deleteProj->setObjectName(QStringLiteral("deleteProj"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteProj->setIcon(icon11);

        horizontalLayout_5->addWidget(deleteProj);

        searchProj = new QPushButton(projects);
        searchProj->setObjectName(QStringLiteral("searchProj"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Images/icons8-search-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchProj->setIcon(icon12);

        horizontalLayout_5->addWidget(searchProj);


        verticalLayout_5->addLayout(horizontalLayout_5);

        project_tabWidget->addTab(projects, QString());
        newProject = new QWidget();
        newProject->setObjectName(QStringLiteral("newProject"));
        verticalLayout_6 = new QVBoxLayout(newProject);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        ProjName = new QLabel(newProject);
        ProjName->setObjectName(QStringLiteral("ProjName"));

        horizontalLayout_9->addWidget(ProjName);

        name = new QLineEdit(newProject);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_9->addWidget(name);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_6);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        ProjNum = new QLabel(newProject);
        ProjNum->setObjectName(QStringLiteral("ProjNum"));
        ProjNum->setMinimumSize(QSize(68, 0));

        horizontalLayout_10->addWidget(ProjNum);

        num = new QLineEdit(newProject);
        num->setObjectName(QStringLiteral("num"));
        num->setMaximumSize(QSize(100, 16777215));
        num->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
        num->setReadOnly(true);
        num->setClearButtonEnabled(false);

        horizontalLayout_10->addWidget(num);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout_10);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        priority = new QComboBox(newProject);
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->setObjectName(QStringLiteral("priority"));

        gridLayout_2->addWidget(priority, 2, 1, 1, 2);

        ProjDue = new QLabel(newProject);
        ProjDue->setObjectName(QStringLiteral("ProjDue"));

        gridLayout_2->addWidget(ProjDue, 2, 6, 1, 1);

        due = new QDateEdit(newProject);
        due->setObjectName(QStringLiteral("due"));
        due->setCalendarPopup(true);

        gridLayout_2->addWidget(due, 2, 7, 1, 2);

        ProjPriority = new QLabel(newProject);
        ProjPriority->setObjectName(QStringLiteral("ProjPriority"));

        gridLayout_2->addWidget(ProjPriority, 2, 0, 1, 1);

        ProjStatus = new QLabel(newProject);
        ProjStatus->setObjectName(QStringLiteral("ProjStatus"));

        gridLayout_2->addWidget(ProjStatus, 0, 3, 1, 1);

        status = new QComboBox(newProject);
        status->setObjectName(QStringLiteral("status"));

        gridLayout_2->addWidget(status, 0, 4, 1, 2);

        ProjCat = new QLabel(newProject);
        ProjCat->setObjectName(QStringLiteral("ProjCat"));

        gridLayout_2->addWidget(ProjCat, 0, 6, 1, 1);

        category = new QComboBox(newProject);
        category->setObjectName(QStringLiteral("category"));

        gridLayout_2->addWidget(category, 0, 7, 1, 2);

        ProjCost = new QLabel(newProject);
        ProjCost->setObjectName(QStringLiteral("ProjCost"));

        gridLayout_2->addWidget(ProjCost, 2, 3, 1, 1);

        cost = new QDoubleSpinBox(newProject);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setMaximum(1e+6);

        gridLayout_2->addWidget(cost, 2, 4, 1, 2);

        ProjDateCreate = new QLabel(newProject);
        ProjDateCreate->setObjectName(QStringLiteral("ProjDateCreate"));

        gridLayout_2->addWidget(ProjDateCreate, 0, 0, 1, 1);

        created = new QDateEdit(newProject);
        created->setObjectName(QStringLiteral("created"));
        created->setMaximumSize(QSize(16777215, 16777215));
        created->setStyleSheet(QLatin1String("background-color: rgb(223, 223, 223);\n"
"color: rgb(223, 223, 223);"));
        created->setReadOnly(true);
        created->setCalendarPopup(true);

        gridLayout_2->addWidget(created, 0, 1, 1, 2);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, gridLayout_2);


        verticalLayout_6->addLayout(formLayout_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ProjDescription = new QLabel(newProject);
        ProjDescription->setObjectName(QStringLiteral("ProjDescription"));

        horizontalLayout_11->addWidget(ProjDescription);

        description = new QTextEdit(newProject);
        description->setObjectName(QStringLiteral("description"));

        horizontalLayout_11->addWidget(description);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_12);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        ProjSave = new QPushButton(newProject);
        ProjSave->setObjectName(QStringLiteral("ProjSave"));
        ProjSave->setFont(font1);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProjSave->setIcon(icon13);

        horizontalLayout_12->addWidget(ProjSave);

        ProjCancel = new QPushButton(newProject);
        ProjCancel->setObjectName(QStringLiteral("ProjCancel"));
        ProjCancel->setFont(font1);
        ProjCancel->setIcon(icon11);

        horizontalLayout_12->addWidget(ProjCancel);


        verticalLayout_6->addLayout(horizontalLayout_12);

        project_tabWidget->addTab(newProject, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        task_tabWidget = new QTabWidget(page_3);
        task_tabWidget->setObjectName(QStringLiteral("task_tabWidget"));
        task_tabWidget->setGeometry(QRect(0, 0, 821, 481));
        task_tabWidget->setFont(font2);
        task_tabWidget->setTabsClosable(true);
        task_tabWidget->setMovable(true);
        tasks = new QWidget();
        tasks->setObjectName(QStringLiteral("tasks"));
        verticalLayout_7 = new QVBoxLayout(tasks);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_14);

        projectInfo = new QLineEdit(tasks);
        projectInfo->setObjectName(QStringLiteral("projectInfo"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        projectInfo->setFont(font3);
        projectInfo->setStyleSheet(QLatin1String("color: rgb(0, 85, 127);\n"
"background-color: rgb(240, 240, 240);"));
        projectInfo->setAlignment(Qt::AlignCenter);
        projectInfo->setReadOnly(true);

        verticalLayout_7->addWidget(projectInfo);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_13);

        tasksView = new QTableView(tasks);
        tasksView->setObjectName(QStringLiteral("tasksView"));

        verticalLayout_7->addWidget(tasksView);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        back_to_project = new QPushButton(tasks);
        back_to_project->setObjectName(QStringLiteral("back_to_project"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Images/icons8-left-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_to_project->setIcon(icon14);

        horizontalLayout_6->addWidget(back_to_project);

        task_list = new QPushButton(tasks);
        task_list->setObjectName(QStringLiteral("task_list"));
        task_list->setIcon(icon9);

        horizontalLayout_6->addWidget(task_list);

        new_task = new QPushButton(tasks);
        new_task->setObjectName(QStringLiteral("new_task"));
        new_task->setIcon(icon5);

        horizontalLayout_6->addWidget(new_task);

        edit_task = new QPushButton(tasks);
        edit_task->setObjectName(QStringLiteral("edit_task"));
        edit_task->setIcon(icon10);

        horizontalLayout_6->addWidget(edit_task);

        delete_task = new QPushButton(tasks);
        delete_task->setObjectName(QStringLiteral("delete_task"));
        delete_task->setIcon(icon11);

        horizontalLayout_6->addWidget(delete_task);

        search_task = new QPushButton(tasks);
        search_task->setObjectName(QStringLiteral("search_task"));
        search_task->setIcon(icon12);

        horizontalLayout_6->addWidget(search_task);


        verticalLayout_7->addLayout(horizontalLayout_6);

        task_tabWidget->addTab(tasks, QString());
        new_taskTab = new QWidget();
        new_taskTab->setObjectName(QStringLiteral("new_taskTab"));
        verticalLayout_3 = new QVBoxLayout(new_taskTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        taskName = new QLabel(new_taskTab);
        taskName->setObjectName(QStringLiteral("taskName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, taskName);

        t_name = new QLineEdit(new_taskTab);
        t_name->setObjectName(QStringLiteral("t_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, t_name);

        taskProject = new QLabel(new_taskTab);
        taskProject->setObjectName(QStringLiteral("taskProject"));

        formLayout->setWidget(1, QFormLayout::LabelRole, taskProject);

        t_project = new QComboBox(new_taskTab);
        t_project->setObjectName(QStringLiteral("t_project"));

        formLayout->setWidget(1, QFormLayout::FieldRole, t_project);


        verticalLayout_3->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        taskNum = new QLabel(new_taskTab);
        taskNum->setObjectName(QStringLiteral("taskNum"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskNum->sizePolicy().hasHeightForWidth());
        taskNum->setSizePolicy(sizePolicy);
        taskNum->setMinimumSize(QSize(40, 0));
        taskNum->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(taskNum, 1, 0, 1, 1);

        t_status = new QComboBox(new_taskTab);
        t_status->setObjectName(QStringLiteral("t_status"));

        gridLayout->addWidget(t_status, 1, 5, 1, 1);

        taskPriority = new QLabel(new_taskTab);
        taskPriority->setObjectName(QStringLiteral("taskPriority"));
        taskPriority->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(taskPriority, 1, 2, 1, 1);

        t_priority = new QComboBox(new_taskTab);
        t_priority->addItem(QString());
        t_priority->addItem(QString());
        t_priority->addItem(QString());
        t_priority->addItem(QString());
        t_priority->addItem(QString());
        t_priority->setObjectName(QStringLiteral("t_priority"));

        gridLayout->addWidget(t_priority, 1, 3, 1, 1);

        t_num = new QLineEdit(new_taskTab);
        t_num->setObjectName(QStringLiteral("t_num"));
        t_num->setMaximumSize(QSize(100, 16777215));
        t_num->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
        t_num->setReadOnly(true);
        t_num->setClearButtonEnabled(false);

        gridLayout->addWidget(t_num, 1, 1, 1, 1);

        taskStatus = new QLabel(new_taskTab);
        taskStatus->setObjectName(QStringLiteral("taskStatus"));
        taskStatus->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(taskStatus, 1, 4, 1, 1);

        taskDue = new QLabel(new_taskTab);
        taskDue->setObjectName(QStringLiteral("taskDue"));
        taskDue->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(taskDue, 1, 6, 1, 1);

        t_due = new QDateEdit(new_taskTab);
        t_due->setObjectName(QStringLiteral("t_due"));
        t_due->setCalendarPopup(true);

        gridLayout->addWidget(t_due, 1, 7, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        taskDetails = new QLabel(new_taskTab);
        taskDetails->setObjectName(QStringLiteral("taskDetails"));

        horizontalLayout_15->addWidget(taskDetails);

        t_description = new QTextEdit(new_taskTab);
        t_description->setObjectName(QStringLiteral("t_description"));

        horizontalLayout_15->addWidget(t_description);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);

        task_save = new QPushButton(new_taskTab);
        task_save->setObjectName(QStringLiteral("task_save"));
        task_save->setFont(font1);
        task_save->setIcon(icon13);

        horizontalLayout_16->addWidget(task_save);

        task_cancel = new QPushButton(new_taskTab);
        task_cancel->setObjectName(QStringLiteral("task_cancel"));
        task_cancel->setFont(font1);
        task_cancel->setIcon(icon11);

        horizontalLayout_16->addWidget(task_cancel);


        verticalLayout_3->addLayout(horizontalLayout_16);

        task_tabWidget->addTab(new_taskTab, QString());
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 830, 21));
        menuTaskBadger = new QMenu(menuBar);
        menuTaskBadger->setObjectName(QStringLiteral("menuTaskBadger"));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        ProjName->setBuddy(name);
        ProjNum->setBuddy(num);
        ProjDue->setBuddy(due);
        ProjPriority->setBuddy(priority);
        ProjStatus->setBuddy(status);
        ProjCat->setBuddy(category);
        ProjCost->setBuddy(cost);
        ProjDateCreate->setBuddy(created);
        ProjDescription->setBuddy(description);
        taskName->setBuddy(name);
        taskProject->setBuddy(t_project);
        taskNum->setBuddy(num);
        taskPriority->setBuddy(priority);
        taskStatus->setBuddy(status);
        taskDue->setBuddy(due);
        taskDetails->setBuddy(description);
#endif // QT_NO_SHORTCUT

        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionNext);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionHome);
        menuBar->addAction(menuTaskBadger->menuAction());
        menuTaskBadger->addAction(actionNew);
        menuTaskBadger->addAction(actionOpen);
        menuTaskBadger->addAction(actionSave);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        project_tabWidget->setCurrentIndex(1);
        task_tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Task Badger", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionBack->setText(QApplication::translate("MainWindow", "Back", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "Next", nullptr));
        actionRefresh->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        actionHome->setText(QApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QApplication::translate("MainWindow", "My Dashboard", nullptr));
        createProject->setText(QApplication::translate("MainWindow", "Create New Project", nullptr));
        upcomingDeadlines->setText(QApplication::translate("MainWindow", "Upcoming Deadlines", nullptr));
        urgentProjects->setText(QApplication::translate("MainWindow", "Urgent Projects", nullptr));
        projTasks->setText(QApplication::translate("MainWindow", "Tasks", nullptr));
        projLists->setText(QApplication::translate("MainWindow", "Lists", nullptr));
        newProj->setText(QApplication::translate("MainWindow", "New", nullptr));
        editProj->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        deleteProj->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        searchProj->setText(QApplication::translate("MainWindow", "Search", nullptr));
        project_tabWidget->setTabText(project_tabWidget->indexOf(projects), QApplication::translate("MainWindow", "Projects", nullptr));
        ProjName->setText(QApplication::translate("MainWindow", "Project Name:", nullptr));
        ProjNum->setText(QApplication::translate("MainWindow", "Project #:", nullptr));
        priority->setItemText(0, QApplication::translate("MainWindow", "Normal", nullptr));
        priority->setItemText(1, QApplication::translate("MainWindow", "High", nullptr));
        priority->setItemText(2, QApplication::translate("MainWindow", "Highest", nullptr));
        priority->setItemText(3, QApplication::translate("MainWindow", "Low", nullptr));
        priority->setItemText(4, QApplication::translate("MainWindow", "Lowest", nullptr));

        ProjDue->setText(QApplication::translate("MainWindow", "Due Date:", nullptr));
        due->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        ProjPriority->setText(QApplication::translate("MainWindow", "Priority:", nullptr));
        ProjStatus->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        ProjCat->setText(QApplication::translate("MainWindow", "Category:", nullptr));
        ProjCost->setText(QApplication::translate("MainWindow", "Total Cost:", nullptr));
        ProjDateCreate->setText(QApplication::translate("MainWindow", "Date Created:", nullptr));
        created->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        ProjDescription->setText(QApplication::translate("MainWindow", "Description:", nullptr));
        ProjSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        ProjCancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        project_tabWidget->setTabText(project_tabWidget->indexOf(newProject), QApplication::translate("MainWindow", "New Project", nullptr));
        back_to_project->setText(QApplication::translate("MainWindow", "Back To Project", nullptr));
        task_list->setText(QApplication::translate("MainWindow", "Lists", nullptr));
        new_task->setText(QApplication::translate("MainWindow", "New", nullptr));
        edit_task->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        delete_task->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        search_task->setText(QApplication::translate("MainWindow", "Search", nullptr));
        task_tabWidget->setTabText(task_tabWidget->indexOf(tasks), QApplication::translate("MainWindow", "Tasks", nullptr));
        taskName->setText(QApplication::translate("MainWindow", "Task Name:", nullptr));
        taskProject->setText(QApplication::translate("MainWindow", "Parent Project:", nullptr));
        taskNum->setText(QApplication::translate("MainWindow", "Task #:", nullptr));
        taskPriority->setText(QApplication::translate("MainWindow", "Priority:", nullptr));
        t_priority->setItemText(0, QApplication::translate("MainWindow", "Normal", nullptr));
        t_priority->setItemText(1, QApplication::translate("MainWindow", "High", nullptr));
        t_priority->setItemText(2, QApplication::translate("MainWindow", "Highest", nullptr));
        t_priority->setItemText(3, QApplication::translate("MainWindow", "Low", nullptr));
        t_priority->setItemText(4, QApplication::translate("MainWindow", "Lowest", nullptr));

        taskStatus->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        taskDue->setText(QApplication::translate("MainWindow", "Due Date:", nullptr));
        t_due->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        taskDetails->setText(QApplication::translate("MainWindow", "Details:", nullptr));
        task_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        task_cancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        task_tabWidget->setTabText(task_tabWidget->indexOf(new_taskTab), QApplication::translate("MainWindow", "New Task", nullptr));
        menuTaskBadger->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
