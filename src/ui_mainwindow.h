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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_20;
    QFrame *frame_10;
    QSpacerItem *horizontalSpacer_31;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_17;
    QTreeView *treeView;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *createProject;
    QPushButton *upcomingDeadlines;
    QPushButton *urgentProjects;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_4;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_20;
    QTabWidget *project_tabWidget;
    QWidget *projects;
    QGridLayout *gridLayout_4;
    QTableView *projectsView;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *projTasks;
    QPushButton *projLists;
    QPushButton *newProj;
    QPushButton *editProj;
    QPushButton *deleteProj;
    QWidget *newProject;
    QGridLayout *gridLayout_5;
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
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_14;
    QFrame *frame_7;
    QLineEdit *projectInfo;
    QTabWidget *task_tabWidget;
    QWidget *tasks;
    QVBoxLayout *verticalLayout_7;
    QTableView *tasksView;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *back_to_project;
    QPushButton *task_list;
    QPushButton *new_task;
    QPushButton *edit_task;
    QPushButton *delete_task;
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
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_8;
    QLineEdit *listInfo;
    QTabWidget *list_tabWidget;
    QWidget *lists;
    QVBoxLayout *verticalLayout_8;
    QTableView *listsView;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *back_button;
    QPushButton *new_list;
    QPushButton *edit_list;
    QPushButton *delete_list;
    QWidget *new_ListTab;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *listName;
    QLineEdit *l_name;
    QLabel *listProject;
    QComboBox *l_project;
    QLabel *listTask;
    QComboBox *l_task;
    QLabel *listItem;
    QLineEdit *l_item;
    QPushButton *addItem;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QListView *itemsView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *list_save;
    QPushButton *list_cancel;
    QWidget *page_5;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_19;
    QFrame *frame_9;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_30;
    QTableView *upcomingDue;
    QWidget *page_6;
    QGridLayout *gridLayout_25;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_21;
    QFrame *frame_11;
    QSpacerItem *horizontalSpacer_33;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_34;
    QTableView *urgentProj;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuTaskBadger;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(879, 637);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/taskbadgericon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockNestingEnabled(true);
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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QFont font;
        font.setPointSize(10);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_10 = new QGridLayout(page);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        frame_10 = new QFrame(page);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setMinimumSize(QSize(60, 60));
        frame_10->setMaximumSize(QSize(108, 108));
        frame_10->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        horizontalLayout_20->addWidget(frame_10);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_31);

        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setFamily(QStringLiteral("MV Boli"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setWeight(50);
        label_10->setFont(font1);

        horizontalLayout_20->addWidget(label_10);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_32);


        gridLayout_8->addLayout(horizontalLayout_20, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        treeView = new QTreeView(page);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setMinimumSize(QSize(0, 270));
        treeView->setMaximumSize(QSize(190, 16777215));

        horizontalLayout_17->addWidget(treeView);

        tableView = new QTableView(page);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(550, 300));

        horizontalLayout_17->addWidget(tableView);


        gridLayout_8->addLayout(horizontalLayout_17, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        createProject = new QPushButton(page);
        createProject->setObjectName(QStringLiteral("createProject"));
        createProject->setFont(font);
        createProject->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/icons8-plus-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        createProject->setIcon(icon5);

        horizontalLayout_2->addWidget(createProject);

        upcomingDeadlines = new QPushButton(page);
        upcomingDeadlines->setObjectName(QStringLiteral("upcomingDeadlines"));
        upcomingDeadlines->setFont(font);
        upcomingDeadlines->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/icons8-calendar-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        upcomingDeadlines->setIcon(icon6);

        horizontalLayout_2->addWidget(upcomingDeadlines);

        urgentProjects = new QPushButton(page);
        urgentProjects->setObjectName(QStringLiteral("urgentProjects"));
        urgentProjects->setFont(font);
        urgentProjects->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/icons8-high-priority-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        urgentProjects->setIcon(icon7);

        horizontalLayout_2->addWidget(urgentProjects);


        gridLayout_8->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(60, 60));
        frame_4->setMaximumSize(QSize(108, 108));
        frame_4->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_7->addWidget(frame_4);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_19);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_20);


        gridLayout_9->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        project_tabWidget = new QTabWidget(page_2);
        project_tabWidget->setObjectName(QStringLiteral("project_tabWidget"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        project_tabWidget->setFont(font2);
        project_tabWidget->setTabsClosable(true);
        project_tabWidget->setMovable(true);
        projects = new QWidget();
        projects->setObjectName(QStringLiteral("projects"));
        gridLayout_4 = new QGridLayout(projects);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        projectsView = new QTableView(projects);
        projectsView->setObjectName(QStringLiteral("projectsView"));

        gridLayout_4->addWidget(projectsView, 0, 0, 1, 1);

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
        editProj->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/icons8-edit-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        editProj->setIcon(icon10);

        horizontalLayout_5->addWidget(editProj);

        deleteProj = new QPushButton(projects);
        deleteProj->setObjectName(QStringLiteral("deleteProj"));
        deleteProj->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteProj->setIcon(icon11);

        horizontalLayout_5->addWidget(deleteProj);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        project_tabWidget->addTab(projects, QString());
        newProject = new QWidget();
        newProject->setObjectName(QStringLiteral("newProject"));
        gridLayout_5 = new QGridLayout(newProject);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        ProjName = new QLabel(newProject);
        ProjName->setObjectName(QStringLiteral("ProjName"));

        horizontalLayout_9->addWidget(ProjName);

        name = new QLineEdit(newProject);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_9->addWidget(name);


        gridLayout_5->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 1, 0, 1, 1);

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


        gridLayout_5->addLayout(formLayout_2, 2, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_11, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ProjDescription = new QLabel(newProject);
        ProjDescription->setObjectName(QStringLiteral("ProjDescription"));

        horizontalLayout_11->addWidget(ProjDescription);

        description = new QTextEdit(newProject);
        description->setObjectName(QStringLiteral("description"));

        horizontalLayout_11->addWidget(description);


        gridLayout_5->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 5, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        ProjSave = new QPushButton(newProject);
        ProjSave->setObjectName(QStringLiteral("ProjSave"));
        ProjSave->setFont(font);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProjSave->setIcon(icon12);

        horizontalLayout_12->addWidget(ProjSave);

        ProjCancel = new QPushButton(newProject);
        ProjCancel->setObjectName(QStringLiteral("ProjCancel"));
        ProjCancel->setFont(font);
        ProjCancel->setIcon(icon11);

        horizontalLayout_12->addWidget(ProjCancel);


        gridLayout_5->addLayout(horizontalLayout_12, 6, 0, 1, 1);

        project_tabWidget->addTab(newProject, QString());

        gridLayout_9->addWidget(project_tabWidget, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        frame_7 = new QFrame(page_3);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setMinimumSize(QSize(60, 60));
        frame_7->setMaximumSize(QSize(108, 108));
        frame_7->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_14->addWidget(frame_7);

        projectInfo = new QLineEdit(page_3);
        projectInfo->setObjectName(QStringLiteral("projectInfo"));
        QFont font3;
        font3.setFamily(QStringLiteral("MV Boli"));
        font3.setPointSize(18);
        projectInfo->setFont(font3);
        projectInfo->setCursor(QCursor(Qt::ArrowCursor));
        projectInfo->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        projectInfo->setFrame(false);
        projectInfo->setAlignment(Qt::AlignCenter);
        projectInfo->setReadOnly(true);

        horizontalLayout_14->addWidget(projectInfo);


        verticalLayout->addLayout(horizontalLayout_14);

        task_tabWidget = new QTabWidget(page_3);
        task_tabWidget->setObjectName(QStringLiteral("task_tabWidget"));
        task_tabWidget->setFont(font2);
        task_tabWidget->setTabsClosable(true);
        task_tabWidget->setMovable(true);
        tasks = new QWidget();
        tasks->setObjectName(QStringLiteral("tasks"));
        verticalLayout_7 = new QVBoxLayout(tasks);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
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
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Images/icons8-left-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_to_project->setIcon(icon13);

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
        edit_task->setEnabled(false);
        edit_task->setIcon(icon10);

        horizontalLayout_6->addWidget(edit_task);

        delete_task = new QPushButton(tasks);
        delete_task->setObjectName(QStringLiteral("delete_task"));
        delete_task->setEnabled(false);
        delete_task->setIcon(icon11);

        horizontalLayout_6->addWidget(delete_task);


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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(taskNum->sizePolicy().hasHeightForWidth());
        taskNum->setSizePolicy(sizePolicy1);
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
        task_save->setFont(font);
        task_save->setIcon(icon12);

        horizontalLayout_16->addWidget(task_save);

        task_cancel = new QPushButton(new_taskTab);
        task_cancel->setObjectName(QStringLiteral("task_cancel"));
        task_cancel->setFont(font);
        task_cancel->setIcon(icon11);

        horizontalLayout_16->addWidget(task_cancel);


        verticalLayout_3->addLayout(horizontalLayout_16);

        task_tabWidget->addTab(new_taskTab, QString());

        verticalLayout->addWidget(task_tabWidget);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_3 = new QGridLayout(page_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_8 = new QFrame(page_4);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setMinimumSize(QSize(60, 60));
        frame_8->setMaximumSize(QSize(108, 108));
        frame_8->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_8);

        listInfo = new QLineEdit(page_4);
        listInfo->setObjectName(QStringLiteral("listInfo"));
        listInfo->setFont(font3);
        listInfo->setCursor(QCursor(Qt::ArrowCursor));
        listInfo->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        listInfo->setFrame(false);
        listInfo->setAlignment(Qt::AlignCenter);
        listInfo->setReadOnly(true);

        horizontalLayout->addWidget(listInfo);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        list_tabWidget = new QTabWidget(page_4);
        list_tabWidget->setObjectName(QStringLiteral("list_tabWidget"));
        list_tabWidget->setFont(font2);
        list_tabWidget->setTabsClosable(true);
        list_tabWidget->setMovable(true);
        lists = new QWidget();
        lists->setObjectName(QStringLiteral("lists"));
        verticalLayout_8 = new QVBoxLayout(lists);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        listsView = new QTableView(lists);
        listsView->setObjectName(QStringLiteral("listsView"));

        verticalLayout_8->addWidget(listsView);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        back_button = new QPushButton(lists);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setIcon(icon13);

        horizontalLayout_13->addWidget(back_button);

        new_list = new QPushButton(lists);
        new_list->setObjectName(QStringLiteral("new_list"));
        new_list->setIcon(icon5);

        horizontalLayout_13->addWidget(new_list);

        edit_list = new QPushButton(lists);
        edit_list->setObjectName(QStringLiteral("edit_list"));
        edit_list->setEnabled(false);
        edit_list->setIcon(icon10);

        horizontalLayout_13->addWidget(edit_list);

        delete_list = new QPushButton(lists);
        delete_list->setObjectName(QStringLiteral("delete_list"));
        delete_list->setEnabled(false);
        delete_list->setIcon(icon11);

        horizontalLayout_13->addWidget(delete_list);


        verticalLayout_8->addLayout(horizontalLayout_13);

        list_tabWidget->addTab(lists, QString());
        new_ListTab = new QWidget();
        new_ListTab->setObjectName(QStringLiteral("new_ListTab"));
        gridLayout_13 = new QGridLayout(new_ListTab);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        listName = new QLabel(new_ListTab);
        listName->setObjectName(QStringLiteral("listName"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, listName);

        l_name = new QLineEdit(new_ListTab);
        l_name->setObjectName(QStringLiteral("l_name"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, l_name);

        listProject = new QLabel(new_ListTab);
        listProject->setObjectName(QStringLiteral("listProject"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, listProject);

        l_project = new QComboBox(new_ListTab);
        l_project->setObjectName(QStringLiteral("l_project"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, l_project);

        listTask = new QLabel(new_ListTab);
        listTask->setObjectName(QStringLiteral("listTask"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, listTask);

        l_task = new QComboBox(new_ListTab);
        l_task->setObjectName(QStringLiteral("l_task"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, l_task);

        listItem = new QLabel(new_ListTab);
        listItem->setObjectName(QStringLiteral("listItem"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, listItem);

        l_item = new QLineEdit(new_ListTab);
        l_item->setObjectName(QStringLiteral("l_item"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, l_item);

        addItem = new QPushButton(new_ListTab);
        addItem->setObjectName(QStringLiteral("addItem"));
        addItem->setIcon(icon5);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, addItem);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_4->setItem(4, QFormLayout::FieldRole, horizontalSpacer_4);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_4->setItem(3, QFormLayout::FieldRole, horizontalSpacer_16);


        horizontalLayout_4->addLayout(formLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        itemsView = new QListView(new_ListTab);
        itemsView->setObjectName(QStringLiteral("itemsView"));
        itemsView->setDragEnabled(true);
        itemsView->setDragDropOverwriteMode(true);
        itemsView->setDragDropMode(QAbstractItemView::DragDrop);
        itemsView->setAlternatingRowColors(true);
        itemsView->setModelColumn(0);

        verticalLayout_4->addWidget(itemsView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_17);

        list_save = new QPushButton(new_ListTab);
        list_save->setObjectName(QStringLiteral("list_save"));
        list_save->setFont(font);
        list_save->setIcon(icon12);

        horizontalLayout_3->addWidget(list_save);

        list_cancel = new QPushButton(new_ListTab);
        list_cancel->setObjectName(QStringLiteral("list_cancel"));
        list_cancel->setFont(font);
        list_cancel->setIcon(icon11);

        horizontalLayout_3->addWidget(list_cancel);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout_13->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        list_tabWidget->addTab(new_ListTab, QString());

        gridLayout_3->addWidget(list_tabWidget, 1, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_11 = new QGridLayout(page_5);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        frame_9 = new QFrame(page_5);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setMinimumSize(QSize(60, 60));
        frame_9->setMaximumSize(QSize(108, 108));
        frame_9->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        horizontalLayout_19->addWidget(frame_9);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_29);

        label_9 = new QLabel(page_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font4;
        font4.setFamily(QStringLiteral("MV Boli"));
        font4.setPointSize(24);
        label_9->setFont(font4);

        horizontalLayout_19->addWidget(label_9);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_30);


        gridLayout_6->addLayout(horizontalLayout_19, 0, 0, 1, 1);

        upcomingDue = new QTableView(page_5);
        upcomingDue->setObjectName(QStringLiteral("upcomingDue"));

        gridLayout_6->addWidget(upcomingDue, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        gridLayout_25 = new QGridLayout(page_6);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        frame_11 = new QFrame(page_6);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setMinimumSize(QSize(60, 60));
        frame_11->setMaximumSize(QSize(108, 108));
        frame_11->setStyleSheet(QStringLiteral("image: url(:/Images/TaskBadgerLogo.png);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        horizontalLayout_21->addWidget(frame_11);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_33);

        label_11 = new QLabel(page_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);

        horizontalLayout_21->addWidget(label_11);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_34);


        gridLayout_12->addLayout(horizontalLayout_21, 0, 0, 1, 1);

        urgentProj = new QTableView(page_6);
        urgentProj->setObjectName(QStringLiteral("urgentProj"));

        gridLayout_12->addWidget(urgentProj, 1, 0, 1, 1);


        gridLayout_25->addLayout(gridLayout_12, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 879, 21));
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
        listName->setBuddy(name);
        listProject->setBuddy(t_project);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(treeView, tableView);
        QWidget::setTabOrder(tableView, createProject);
        QWidget::setTabOrder(createProject, upcomingDeadlines);
        QWidget::setTabOrder(upcomingDeadlines, urgentProjects);
        QWidget::setTabOrder(urgentProjects, project_tabWidget);
        QWidget::setTabOrder(project_tabWidget, projectsView);
        QWidget::setTabOrder(projectsView, projTasks);
        QWidget::setTabOrder(projTasks, projLists);
        QWidget::setTabOrder(projLists, newProj);
        QWidget::setTabOrder(newProj, editProj);
        QWidget::setTabOrder(editProj, deleteProj);
        QWidget::setTabOrder(deleteProj, projectInfo);
        QWidget::setTabOrder(projectInfo, task_tabWidget);
        QWidget::setTabOrder(task_tabWidget, tasksView);
        QWidget::setTabOrder(tasksView, back_to_project);
        QWidget::setTabOrder(back_to_project, task_list);
        QWidget::setTabOrder(task_list, new_task);
        QWidget::setTabOrder(new_task, edit_task);
        QWidget::setTabOrder(edit_task, delete_task);
        QWidget::setTabOrder(delete_task, t_name);
        QWidget::setTabOrder(t_name, t_project);
        QWidget::setTabOrder(t_project, t_num);
        QWidget::setTabOrder(t_num, t_priority);
        QWidget::setTabOrder(t_priority, t_status);
        QWidget::setTabOrder(t_status, t_due);
        QWidget::setTabOrder(t_due, t_description);
        QWidget::setTabOrder(t_description, task_save);
        QWidget::setTabOrder(task_save, task_cancel);
        QWidget::setTabOrder(task_cancel, upcomingDue);
        QWidget::setTabOrder(upcomingDue, urgentProj);
        QWidget::setTabOrder(urgentProj, ProjSave);
        QWidget::setTabOrder(ProjSave, ProjCancel);
        QWidget::setTabOrder(ProjCancel, status);
        QWidget::setTabOrder(status, created);
        QWidget::setTabOrder(created, num);
        QWidget::setTabOrder(num, category);
        QWidget::setTabOrder(category, priority);
        QWidget::setTabOrder(priority, cost);
        QWidget::setTabOrder(cost, name);
        QWidget::setTabOrder(name, due);
        QWidget::setTabOrder(due, description);

        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionNext);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionHome);
        menuBar->addAction(menuTaskBadger->menuAction());
        menuTaskBadger->addAction(actionNew);
        menuTaskBadger->addAction(actionOpen);
        menuTaskBadger->addAction(actionSave);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        project_tabWidget->setCurrentIndex(0);
        task_tabWidget->setCurrentIndex(0);
        list_tabWidget->setCurrentIndex(1);


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
        label_10->setText(QApplication::translate("MainWindow", "My Dashboard", nullptr));
        createProject->setText(QApplication::translate("MainWindow", "Create New Project", nullptr));
        upcomingDeadlines->setText(QApplication::translate("MainWindow", "Upcoming Deadlines", nullptr));
        urgentProjects->setText(QApplication::translate("MainWindow", "Urgent Projects", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Projects", nullptr));
        projTasks->setText(QApplication::translate("MainWindow", "Tasks", nullptr));
        projLists->setText(QApplication::translate("MainWindow", "Lists", nullptr));
        newProj->setText(QApplication::translate("MainWindow", "New", nullptr));
        editProj->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        deleteProj->setText(QApplication::translate("MainWindow", "Delete", nullptr));
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
        projectInfo->setPlaceholderText(QApplication::translate("MainWindow", "Tasks", nullptr));
        back_to_project->setText(QApplication::translate("MainWindow", "Back To Project", nullptr));
        task_list->setText(QApplication::translate("MainWindow", "Lists", nullptr));
        new_task->setText(QApplication::translate("MainWindow", "New", nullptr));
        edit_task->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        delete_task->setText(QApplication::translate("MainWindow", "Delete", nullptr));
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
        listInfo->setPlaceholderText(QApplication::translate("MainWindow", "Lists", nullptr));
        back_button->setText(QApplication::translate("MainWindow", "Back", nullptr));
        new_list->setText(QApplication::translate("MainWindow", "New", nullptr));
        edit_list->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        delete_list->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        list_tabWidget->setTabText(list_tabWidget->indexOf(lists), QApplication::translate("MainWindow", "Lists", nullptr));
        listName->setText(QApplication::translate("MainWindow", "List Name:", nullptr));
        listProject->setText(QApplication::translate("MainWindow", "Parent Project:", nullptr));
        listTask->setText(QApplication::translate("MainWindow", "Parent Task:", nullptr));
        listItem->setText(QApplication::translate("MainWindow", "List Item:", nullptr));
        addItem->setText(QApplication::translate("MainWindow", "Add To List", nullptr));
        list_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        list_cancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        list_tabWidget->setTabText(list_tabWidget->indexOf(new_ListTab), QApplication::translate("MainWindow", "New List", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Upcoming Deadlines", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Urgent Projects", nullptr));
        menuTaskBadger->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
