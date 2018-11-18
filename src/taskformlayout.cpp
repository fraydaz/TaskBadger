#include "taskformlayout.h"

TaskFormLayout::TaskFormLayout()
{
    mainWindow = new MainWindow();
    taskModel = new TaskModel();
    task = new Task();
    setupUi();
}
QVBoxLayout* TaskFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));

    oName = new QLabel();
    oName->setObjectName(QStringLiteral("oName"));
    formLayout->setWidget(0, QFormLayout::LabelRole, oName);

    objName = new QLineEdit();
    objName->setObjectName(QStringLiteral("objName"));
    formLayout->setWidget(0, QFormLayout::FieldRole, objName);

    oProject = new QLabel();
    oProject->setObjectName(QStringLiteral("oProject"));
    formLayout->setWidget(1, QFormLayout::LabelRole, oProject);

    objProject = new QComboBox();
    objProject->setObjectName(QStringLiteral("objProject"));
    formLayout->setWidget(1, QFormLayout::FieldRole, objProject);
    vLayout->addLayout(formLayout);

    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));

    oID = new QLabel();
    oID->setObjectName(QStringLiteral("oID"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(oID->sizePolicy().hasHeightForWidth());
    oID->setSizePolicy(sizePolicy);
    oID->setMinimumSize(QSize(40, 0));
    oID->setMaximumSize(QSize(60, 16777215));

    gridLayout->addWidget(oID, 1, 0, 1, 1);

    objStatus = new QComboBox();
    objStatus->setObjectName(QStringLiteral("objStatus"));
    gridLayout->addWidget(objStatus, 1, 5, 1, 1);

    oPriority = new QLabel();
    oPriority->setObjectName(QStringLiteral("oPriority"));
    oPriority->setMaximumSize(QSize(60, 16777215));
    gridLayout->addWidget(oPriority, 1, 2, 1, 1);

    objPriority = new QComboBox();
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->setObjectName(QStringLiteral("objPriority"));
    gridLayout->addWidget(objPriority, 1, 3, 1, 1);

    objID = new QLineEdit();
    objID->setObjectName(QStringLiteral("objID"));
    objID->setMaximumSize(QSize(100, 16777215));
    objID->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    objID->setReadOnly(true);
    objID->setClearButtonEnabled(false);
    gridLayout->addWidget(objID, 1, 1, 1, 1);

    oStatus = new QLabel();
    oStatus->setObjectName(QStringLiteral("oStatus"));
    oStatus->setMaximumSize(QSize(60, 16777215));
    gridLayout->addWidget(oStatus, 1, 4, 1, 1);

    oDue = new QLabel();
    oDue->setObjectName(QStringLiteral("oDue"));
    oDue->setMaximumSize(QSize(60, 16777215));
    gridLayout->addWidget(oDue, 1, 6, 1, 1);

    objDue = new QDateEdit();
    objDue->setObjectName(QStringLiteral("objDue"));
    objDue->setCalendarPopup(true);
    gridLayout->addWidget(objDue, 1, 7, 1, 1);

    gridSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(gridSpacer, 0, 0, 1, 2);

    vLayout->addLayout(gridLayout);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    vLayout->addItem(horizontalSpacer);

    detailsLayout = new QHBoxLayout();
    detailsLayout->setSpacing(6);
    detailsLayout->setObjectName(QStringLiteral("detailsLayout"));
    oDescription = new QLabel();
    oDescription->setObjectName(QStringLiteral("oDescription"));
    detailsLayout->addWidget(oDescription);

    objDescription = new QTextEdit();
    objDescription->setObjectName(QStringLiteral("objDescription;"));
    detailsLayout->addWidget(objDescription);

    vLayout->addLayout(detailsLayout);

    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(buttonSpacer);

    objSave = new QPushButton();
    objSave->setObjectName(QStringLiteral("objSave"));
    objSave->setFont(font);
    objSave->setIcon(saveIcon);
    buttonsLayout->addWidget(objSave);

    objCancel = new QPushButton();
    objCancel->setObjectName(QStringLiteral("objCancel"));
    objCancel->setFont(font);
    objCancel->setIcon(cancelIcon);

    buttonsLayout->addWidget(objCancel);

    vLayout->addLayout(buttonsLayout);

    oName->setBuddy(objName);
    oID->setBuddy(objID);
    oDue->setBuddy(objDue);
    oPriority->setBuddy(objPriority);
    oStatus->setBuddy(objStatus);
    oDescription->setBuddy(objDescription);
    oProject->setBuddy(objProject);

    retranslateUi();
    return vLayout;
}

void TaskFormLayout::retranslateUi()
{
    oName->setText("Task Name:");
    oProject->setText("Parent Project:");
    oID->setText("Task #:");
    objPriority->setItemText(0, "Normal");
    objPriority->setItemText(1, "High");
    objPriority->setItemText(2, "Highest");
    objPriority->setItemText(3, "Low");
    objPriority->setItemText(4, "Lowest");

    oStatus->setText("Status:");
    oDue->setText("Due Date:");
    objDue->setDisplayFormat("MM/dd/yyyy");
    oDescription->setText("Details:");
    objSave->setText("Save");
    objCancel->setText("Cancel");

    objDue->setDate(QDate::currentDate());

    model = taskModel->getComboBox("status", "id");
    objStatus->setModel(model);

    model = taskModel->getComboBox("project", "id");
    objProject->setModel(model);
    objProject->setEnabled(false);

    QObject::connect(objSave, SIGNAL(clicked()), this, SLOT(saveObject()));
    QObject::connect(objCancel, SIGNAL(clicked()), this, SLOT(cancelObject()));
}
void TaskFormLayout::saveObject()
{
    task->setName(objName->text());
    task->setDescription(objDescription->toPlainText());
    task->setPriority(objPriority->currentText());
    task->setDueDate(objDue->date());
    task->setStatusID(objStatus->currentText());
    task->update_task(objID->text());
}
void TaskFormLayout::cancelObject()
{
    mainWindow->openWidgetPg(0);
}
