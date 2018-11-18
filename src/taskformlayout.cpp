#include "taskformlayout.h"

TaskFormLayout::TaskFormLayout()
{
    taskModel = new TaskModel();
    mainWindow = new MainWindow();
    task = new Task();
    setupUi();
}
QVBoxLayout* TaskFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    fLayout = new QFormLayout();
    fLayout->setSpacing(6);
    fLayout->setObjectName(QStringLiteral("fLayout"));

    tName = new QLabel();
    tName->setObjectName(QStringLiteral("tName"));
    fLayout->setWidget(0, QFormLayout::LabelRole, tName);

    name = new QLineEdit();
    name->setObjectName(QStringLiteral("name"));
    fLayout->setWidget(0, QFormLayout::FieldRole, name);

    tProject = new QLabel();
    tProject->setObjectName(QStringLiteral("tProject"));
    fLayout->setWidget(1, QFormLayout::LabelRole, tProject);

    project = new QComboBox();
    project->setObjectName(QStringLiteral("project"));
    fLayout->setWidget(1, QFormLayout::FieldRole, project);
    vLayout->addLayout(fLayout);

    gLayout = new QGridLayout();
    gLayout->setSpacing(6);
    gLayout->setObjectName(QStringLiteral("gLayout"));

    tNum = new QLabel();
    tNum->setObjectName(QStringLiteral("tNum"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(tNum->sizePolicy().hasHeightForWidth());
    tNum->setSizePolicy(sizePolicy);
    tNum->setMinimumSize(QSize(40, 0));
    tNum->setMaximumSize(QSize(60, 16777215));

    gLayout->addWidget(tNum, 1, 0, 1, 1);

    status = new QComboBox();
    status->setObjectName(QStringLiteral("status"));
    gLayout->addWidget(status, 1, 5, 1, 1);

    tPriority = new QLabel();
    tPriority->setObjectName(QStringLiteral("tPriority"));
    tPriority->setMaximumSize(QSize(60, 16777215));
    gLayout->addWidget(tPriority, 1, 2, 1, 1);

    priority = new QComboBox();
    priority->addItem(QString());
    priority->addItem(QString());
    priority->addItem(QString());
    priority->addItem(QString());
    priority->addItem(QString());
    priority->setObjectName(QStringLiteral("priority"));
    gLayout->addWidget(priority, 1, 3, 1, 1);

    number = new QLineEdit();
    number->setObjectName(QStringLiteral("number"));
    number->setMaximumSize(QSize(100, 16777215));
    number->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    number->setReadOnly(true);
    number->setClearButtonEnabled(false);
    gLayout->addWidget(number, 1, 1, 1, 1);

    tStatus = new QLabel();
    tStatus->setObjectName(QStringLiteral("tStatus"));
    tStatus->setMaximumSize(QSize(60, 16777215));
    gLayout->addWidget(tStatus, 1, 4, 1, 1);

    tDue = new QLabel();
    tDue->setObjectName(QStringLiteral("tDue"));
    tDue->setMaximumSize(QSize(60, 16777215));
    gLayout->addWidget(tDue, 1, 6, 1, 1);

    due = new QDateEdit();
    due->setObjectName(QStringLiteral("due"));
    due->setCalendarPopup(true);
    gLayout->addWidget(due, 1, 7, 1, 1);

    gridSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gLayout->addItem(gridSpacer, 0, 0, 1, 2);

    vLayout->addLayout(gLayout);

    hSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    vLayout->addItem(hSpacer);

    detailsLayout = new QHBoxLayout();
    detailsLayout->setSpacing(6);
    detailsLayout->setObjectName(QStringLiteral("detailsLayout"));
    tDetails = new QLabel();
    tDetails->setObjectName(QStringLiteral("tDetails"));
    detailsLayout->addWidget(tDetails);

    description = new QTextEdit();
    description->setObjectName(QStringLiteral("description;"));
    detailsLayout->addWidget(description);

    vLayout->addLayout(detailsLayout);

    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(buttonSpacer);

    taskSave = new QPushButton();
    taskSave->setObjectName(QStringLiteral("taskSave"));

    QFont font1;
    font1.setPointSize(10);
    taskSave->setFont(font1);

    QIcon icon13;
    icon13.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    taskSave->setIcon(icon13);
    buttonsLayout->addWidget(taskSave);

    taskCancel = new QPushButton();
    taskCancel->setObjectName(QStringLiteral("taskCancel"));

    taskCancel->setFont(font1);
    QIcon icon11;
    icon11.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    taskCancel->setIcon(icon11);

    buttonsLayout->addWidget(taskCancel);

    vLayout->addLayout(buttonsLayout);

    tName->setBuddy(name);
    tProject->setBuddy(project);
    tNum->setBuddy(number);
    tPriority->setBuddy(priority);
    tStatus->setBuddy(status);
    tDue->setBuddy(due);
    tDetails->setBuddy(description);

    retranslateUi();
    return vLayout;
}

void TaskFormLayout::retranslateUi()
{
    tName->setText("Task Name:");
    tProject->setText("Parent Project:");
    tNum->setText("Task #:");
    tPriority->setText("Priority:");
    priority->setItemText(0, "Normal");
    priority->setItemText(1, "High");
    priority->setItemText(2, "Highest");
    priority->setItemText(3, "Low");
    priority->setItemText(4, "Lowest");

    tStatus->setText("Status:");
    tDue->setText("Due Date:");
    due->setDisplayFormat("MM/dd/yyyy");
    tDetails->setText("Details:");
    taskSave->setText("Save");
    taskCancel->setText("Cancel");

    due->setDate(QDate::currentDate());

    model = taskModel->getComboBox("status", "id");
    status->setModel(model);

    model = taskModel->getComboBox("project", "id");
    project->setModel(model);
    project->setEnabled(false);

    connect(taskSave, SIGNAL(clicked()), this, SLOT(saveTask()));
    connect(taskCancel, SIGNAL(clicked()), this, SLOT(cancelTask()));
}
void TaskFormLayout::saveTask()
{
    task->setName(name->text());
    task->setDescription(description->toPlainText());
    task->setPriority(priority->currentText());
    task->setDueDate(due->date());
    task->setStatusID(status->currentText());
    task->update_task(number->text());
}
void TaskFormLayout::cancelTask()
{
    mainWindow->openWidgetPg(0);
}
