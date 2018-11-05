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
    QVBoxLayout *verticalLayout;
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
    QTabWidget *tabWidget;
    QWidget *projects_2;
    QVBoxLayout *verticalLayout_5;
    QTableView *projectsView;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *editProj;
    QPushButton *newProj;
    QPushButton *deleteProj;
    QPushButton *searchProj;
    QWidget *newTab_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *ProjName;
    QLineEdit *name;
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
    QHBoxLayout *horizontalLayout_11;
    QLabel *ProjDescription;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ProjSave;
    QPushButton *ProjCancel;
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
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
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
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 791, 481));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        tabWidget->setFont(font2);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        projects_2 = new QWidget();
        projects_2->setObjectName(QStringLiteral("projects_2"));
        verticalLayout_5 = new QVBoxLayout(projects_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        projectsView = new QTableView(projects_2);
        projectsView->setObjectName(QStringLiteral("projectsView"));

        verticalLayout_5->addWidget(projectsView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        editProj = new QPushButton(projects_2);
        editProj->setObjectName(QStringLiteral("editProj"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Images/icons8-edit-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        editProj->setIcon(icon8);

        horizontalLayout_5->addWidget(editProj);

        newProj = new QPushButton(projects_2);
        newProj->setObjectName(QStringLiteral("newProj"));
        newProj->setIcon(icon5);

        horizontalLayout_5->addWidget(newProj);

        deleteProj = new QPushButton(projects_2);
        deleteProj->setObjectName(QStringLiteral("deleteProj"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteProj->setIcon(icon9);

        horizontalLayout_5->addWidget(deleteProj);

        searchProj = new QPushButton(projects_2);
        searchProj->setObjectName(QStringLiteral("searchProj"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Images/icons8-search-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchProj->setIcon(icon10);

        horizontalLayout_5->addWidget(searchProj);


        verticalLayout_5->addLayout(horizontalLayout_5);

        tabWidget->addTab(projects_2, QString());
        newTab_2 = new QWidget();
        newTab_2->setObjectName(QStringLiteral("newTab_2"));
        verticalLayout_6 = new QVBoxLayout(newTab_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        ProjName = new QLabel(newTab_2);
        ProjName->setObjectName(QStringLiteral("ProjName"));

        horizontalLayout_9->addWidget(ProjName);

        name = new QLineEdit(newTab_2);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_9->addWidget(name);


        verticalLayout_6->addLayout(horizontalLayout_9);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        ProjNum = new QLabel(newTab_2);
        ProjNum->setObjectName(QStringLiteral("ProjNum"));
        ProjNum->setMinimumSize(QSize(68, 0));

        horizontalLayout_10->addWidget(ProjNum);

        num = new QLineEdit(newTab_2);
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
        priority = new QComboBox(newTab_2);
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->addItem(QString());
        priority->setObjectName(QStringLiteral("priority"));

        gridLayout_2->addWidget(priority, 2, 1, 1, 2);

        ProjDue = new QLabel(newTab_2);
        ProjDue->setObjectName(QStringLiteral("ProjDue"));

        gridLayout_2->addWidget(ProjDue, 2, 6, 1, 1);

        due = new QDateEdit(newTab_2);
        due->setObjectName(QStringLiteral("due"));
        due->setCalendarPopup(true);

        gridLayout_2->addWidget(due, 2, 7, 1, 2);

        ProjPriority = new QLabel(newTab_2);
        ProjPriority->setObjectName(QStringLiteral("ProjPriority"));

        gridLayout_2->addWidget(ProjPriority, 2, 0, 1, 1);

        ProjStatus = new QLabel(newTab_2);
        ProjStatus->setObjectName(QStringLiteral("ProjStatus"));

        gridLayout_2->addWidget(ProjStatus, 0, 3, 1, 1);

        status = new QComboBox(newTab_2);
        status->setObjectName(QStringLiteral("status"));

        gridLayout_2->addWidget(status, 0, 4, 1, 2);

        ProjCat = new QLabel(newTab_2);
        ProjCat->setObjectName(QStringLiteral("ProjCat"));

        gridLayout_2->addWidget(ProjCat, 0, 6, 1, 1);

        category = new QComboBox(newTab_2);
        category->setObjectName(QStringLiteral("category"));

        gridLayout_2->addWidget(category, 0, 7, 1, 2);

        ProjCost = new QLabel(newTab_2);
        ProjCost->setObjectName(QStringLiteral("ProjCost"));

        gridLayout_2->addWidget(ProjCost, 2, 3, 1, 1);

        cost = new QDoubleSpinBox(newTab_2);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setMaximum(1e+6);

        gridLayout_2->addWidget(cost, 2, 4, 1, 2);

        ProjDateCreate = new QLabel(newTab_2);
        ProjDateCreate->setObjectName(QStringLiteral("ProjDateCreate"));

        gridLayout_2->addWidget(ProjDateCreate, 0, 0, 1, 1);

        created = new QDateEdit(newTab_2);
        created->setObjectName(QStringLiteral("created"));
        created->setMaximumSize(QSize(16777215, 16777215));
        created->setStyleSheet(QLatin1String("background-color: rgb(223, 223, 223);\n"
"color: rgb(223, 223, 223);"));
        created->setReadOnly(true);
        created->setCalendarPopup(true);

        gridLayout_2->addWidget(created, 0, 1, 1, 2);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, gridLayout_2);


        verticalLayout_6->addLayout(formLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ProjDescription = new QLabel(newTab_2);
        ProjDescription->setObjectName(QStringLiteral("ProjDescription"));

        horizontalLayout_11->addWidget(ProjDescription);

        description = new QTextEdit(newTab_2);
        description->setObjectName(QStringLiteral("description"));

        horizontalLayout_11->addWidget(description);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        ProjSave = new QPushButton(newTab_2);
        ProjSave->setObjectName(QStringLiteral("ProjSave"));
        ProjSave->setFont(font1);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProjSave->setIcon(icon11);

        horizontalLayout_12->addWidget(ProjSave);

        ProjCancel = new QPushButton(newTab_2);
        ProjCancel->setObjectName(QStringLiteral("ProjCancel"));
        ProjCancel->setFont(font1);
        ProjCancel->setIcon(icon9);

        horizontalLayout_12->addWidget(ProjCancel);


        verticalLayout_6->addLayout(horizontalLayout_12);

        tabWidget->addTab(newTab_2, QString());
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

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
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(treeView, tableView);
        QWidget::setTabOrder(tableView, createProject);
        QWidget::setTabOrder(createProject, upcomingDeadlines);
        QWidget::setTabOrder(upcomingDeadlines, urgentProjects);
        QWidget::setTabOrder(urgentProjects, tabWidget);
        QWidget::setTabOrder(tabWidget, projectsView);
        QWidget::setTabOrder(projectsView, editProj);
        QWidget::setTabOrder(editProj, newProj);
        QWidget::setTabOrder(newProj, deleteProj);
        QWidget::setTabOrder(deleteProj, searchProj);
        QWidget::setTabOrder(searchProj, name);
        QWidget::setTabOrder(name, num);
        QWidget::setTabOrder(num, created);
        QWidget::setTabOrder(created, status);
        QWidget::setTabOrder(status, category);
        QWidget::setTabOrder(category, priority);
        QWidget::setTabOrder(priority, cost);
        QWidget::setTabOrder(cost, due);
        QWidget::setTabOrder(due, description);
        QWidget::setTabOrder(description, ProjSave);
        QWidget::setTabOrder(ProjSave, ProjCancel);

        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionNext);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionHome);
        menuBar->addAction(menuTaskBadger->menuAction());
        menuTaskBadger->addAction(actionNew);
        menuTaskBadger->addAction(actionOpen);
        menuTaskBadger->addAction(actionSave);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


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
        editProj->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        newProj->setText(QApplication::translate("MainWindow", "New", nullptr));
        deleteProj->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        searchProj->setText(QApplication::translate("MainWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(projects_2), QApplication::translate("MainWindow", "Projects", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(newTab_2), QApplication::translate("MainWindow", "New Project", nullptr));
        menuTaskBadger->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
