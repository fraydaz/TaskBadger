#include "taskformlayout.h"

/*TaskFormLayout::TaskFormLayout()
{
    projModel = new ProjectModel();
    mainWindow = new MainWindow();
    task = new Task();
    setupUi();
}
TaskFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));

    taskName = new QLabel();
    taskName->setObjectName(QStringLiteral("taskName"));

    formLayout->setWidget(0, QFormLayout::LabelRole, taskName);

    t_name = new QLineEdit();
    t_name->setObjectName(QStringLiteral("t_name"));

    formLayout->setWidget(0, QFormLayout::FieldRole, t_name);

    taskProject = new QLabel();
    taskProject->setObjectName(QStringLiteral("taskProject"));

    formLayout->setWidget(1, QFormLayout::LabelRole, taskProject);

    t_project = new QComboBox();
    t_project->setObjectName(QStringLiteral("t_project"));

    formLayout->setWidget(1, QFormLayout::FieldRole, t_project);


    vLayout->addLayout(formLayout);

    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    taskNum = new QLabel();
    taskNum->setObjectName(QStringLiteral("taskNum"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(taskNum->sizePolicy().hasHeightForWidth());
    taskNum->setSizePolicy(sizePolicy);
    taskNum->setMinimumSize(QSize(40, 0));
    taskNum->setMaximumSize(QSize(60, 16777215));

    gridLayout->addWidget(taskNum, 1, 0, 1, 1);

    t_status = new QComboBox();
    t_status->setObjectName(QStringLiteral("t_status"));

    gridLayout->addWidget(t_status, 1, 5, 1, 1);

    taskPriority = new QLabel();
    taskPriority->setObjectName(QStringLiteral("taskPriority"));
    taskPriority->setMaximumSize(QSize(60, 16777215));

    gridLayout->addWidget(taskPriority, 1, 2, 1, 1);

    t_priority = new QComboBox();
    t_priority->addItem(QString());
    t_priority->addItem(QString());
    t_priority->addItem(QString());
    t_priority->addItem(QString());
    t_priority->addItem(QString());
    t_priority->setObjectName(QStringLiteral("t_priority"));

    gridLayout->addWidget(t_priority, 1, 3, 1, 1);

    t_num = new QLineEdit();
    t_num->setObjectName(QStringLiteral("t_num"));
    t_num->setMaximumSize(QSize(100, 16777215));
    t_num->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    t_num->setReadOnly(true);
    t_num->setClearButtonEnabled(false);

    gridLayout->addWidget(t_num, 1, 1, 1, 1);

    taskStatus = new QLabel();
    taskStatus->setObjectName(QStringLiteral("taskStatus"));
    taskStatus->setMaximumSize(QSize(60, 16777215));

    gridLayout->addWidget(taskStatus, 1, 4, 1, 1);

    taskDue = new QLabel();
    taskDue->setObjectName(QStringLiteral("taskDue"));
    taskDue->setMaximumSize(QSize(60, 16777215));

    gridLayout->addWidget(taskDue, 1, 6, 1, 1);

    t_due = new QDateEdit();
    t_due->setObjectName(QStringLiteral("t_due"));
    t_due->setCalendarPopup(true);

    gridLayout->addWidget(t_due, 1, 7, 1, 1);

    horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 2);


    vLayout->addLayout(gridLayout);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    vLayout->addItem(horizontalSpacer);

    horizontalLayout_15 = new QHBoxLayout();
    horizontalLayout_15->setSpacing(6);
    horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
    taskDetails = new QLabel();
    taskDetails->setObjectName(QStringLiteral("taskDetails"));

    horizontalLayout_15->addWidget(taskDetails);

    t_description = new QTextEdit();
    t_description->setObjectName(QStringLiteral("t_description"));

    horizontalLayout_15->addWidget(t_description);


    vLayout->addLayout(horizontalLayout_15);

    horizontalLayout_16 = new QHBoxLayout();
    horizontalLayout_16->setSpacing(6);
    horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
    horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_16->addItem(horizontalSpacer_10);

    task_save = new QPushButton();
    task_save->setObjectName(QStringLiteral("task_save"));
    task_save->setFont(font1);
    task_save->setIcon(icon13);

    horizontalLayout_16->addWidget(task_save);

    task_cancel = new QPushButton();
    task_cancel->setObjectName(QStringLiteral("task_cancel"));
    task_cancel->setFont(font1);
    task_cancel->setIcon(icon11);

    horizontalLayout_16->addWidget(task_cancel);

    vLayout->addLayout(horizontalLayout_16);

    taskName->setBuddy(name);
    taskProject->setBuddy(t_project);
    taskNum->setBuddy(num);
    taskPriority->setBuddy(priority);
    taskStatus->setBuddy(status);
    taskDue->setBuddy(due);
    taskDetails->setBuddy(description);

    retranslateUi();
    //QMetaObject::connectSlotsByName(MainWindow);
    return vLayout;
}

TaskFormLayout::retranslateUi()
{
    taskName->setText("Task Name:");
    taskProject->setText("Parent Project:");
    taskNum->setText("Task #:");
    taskPriority->setText("Priority:");
    t_priority->setItemText(0, "Normal");
    t_priority->setItemText(1, "High");
    t_priority->setItemText(2, "Highest");
    t_priority->setItemText(3, "Low");
    t_priority->setItemText(4, "Lowest");

    taskStatus->setText("Status:");
    taskDue->setText("Due Date:");
    t_due->setDisplayFormat("MM/dd/yyyy");
    taskDetails->setText("Details:");
    task_save->setText("Save");
    task_cancel->setText("Cancel");
}*/
