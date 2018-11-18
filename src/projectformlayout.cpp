#include "projectformlayout.h"

ProjectFormLayout::ProjectFormLayout()
{
    mainWindow = new MainWindow();
    projModel = new ProjectModel();
    project = new Project();
    setupUi();
}
QVBoxLayout* ProjectFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    // project name fields & layout
    projLayout = new QHBoxLayout();
    projLayout->setSpacing(6);
    projLayout->setObjectName(QStringLiteral("projLayout"));
    oName = new QLabel();
    oName->setObjectName(QStringLiteral("oName"));
    projLayout->addWidget(oName);
    objName = new QLineEdit();
    objName->setObjectName(QStringLiteral("objName"));
    projLayout->addWidget(objName);
    vLayout->addLayout(projLayout);

    // project number fields & layout
    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));
    projIDLayout = new QHBoxLayout();
    projIDLayout->setSpacing(6);
    projIDLayout->setObjectName(QStringLiteral("projIDLayout"));
    oID = new QLabel();
    oID->setObjectName(QStringLiteral("oID"));
    oID->setMinimumSize(QSize(68, 0));
    projIDLayout->addWidget(oID);

    objID = new QLineEdit();
    objID->setObjectName(QStringLiteral("objID"));
    objID->setMaximumSize(QSize(100, 16777215));
    objID->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    objID->setReadOnly(true);
    objID->setClearButtonEnabled(false);
    projIDLayout->addWidget(objID);
    formLayout->setLayout(0, QFormLayout::LabelRole, projIDLayout);

    // priority fields & layout
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    objPriority = new QComboBox();
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->setObjectName(QStringLiteral("objPriority"));
    gridLayout->addWidget(objPriority, 2, 1, 1, 2);

    // due date field & layout
    oDue = new QLabel();
    oDue->setObjectName(QStringLiteral("oDue"));
    gridLayout->addWidget(oDue, 2, 6, 1, 1);
    objDue = new QDateEdit();
    objDue->setObjectName(QStringLiteral("objDue"));
    objDue->setCalendarPopup(true);
    gridLayout->addWidget(objDue, 2, 7, 1, 2);

    // priority field & layout
    oPriority = new QLabel();
    oPriority->setObjectName(QStringLiteral("oPriority"));
    gridLayout->addWidget(oPriority, 2, 0, 1, 1);

    // status field & layout
    oStatus = new QLabel();
    oStatus->setObjectName(QStringLiteral("oStatus"));
    gridLayout->addWidget(oStatus, 0, 3, 1, 1);
    objStatus = new QComboBox();
    objStatus->setObjectName(QStringLiteral("objStatus"));
    gridLayout->addWidget(objStatus, 0, 4, 1, 2);

    // category field & layout
    oCategory = new QLabel();
    oCategory->setObjectName(QStringLiteral("oCategory"));
    gridLayout->addWidget(oCategory, 0, 6, 1, 1);
    objCategory = new QComboBox();
    objCategory->setObjectName(QStringLiteral("objCategory"));
    gridLayout->addWidget(objCategory, 0, 7, 1, 2);

    // cost field & layout
    oCost = new QLabel();
    oCost->setObjectName(QStringLiteral("oCost"));
    gridLayout->addWidget(oCost, 2, 3, 1, 1);
    objCost = new QDoubleSpinBox();
    objCost->setObjectName(QStringLiteral("objCost"));
    objCost->setMaximum(1e+6);
    gridLayout->addWidget(objCost, 2, 4, 1, 2);

    // date created field & layout
    oCreated = new QLabel();
    oCreated->setObjectName(QStringLiteral("oCreated"));
    gridLayout->addWidget(oCreated, 0, 0, 1, 1);
    objCreated = new QDateEdit();
    objCreated->setObjectName(QStringLiteral("objCreated"));
    objCreated->setMaximumSize(QSize(16777215, 16777215));
    objCreated->setStyleSheet(QLatin1String("background-color: rgb(223, 223, 223);\n"
"color: rgb(223, 223, 223);"));
    objCreated->setReadOnly(true);
    objCreated->setCalendarPopup(true);
    gridLayout->addWidget(objCreated, 0, 1, 1, 2);

    formLayout->setLayout(0, QFormLayout::FieldRole, gridLayout);
    vLayout->addLayout(formLayout);

    // description field & layout
    detailsLayout = new QHBoxLayout();
    detailsLayout->setSpacing(6);
    detailsLayout->setObjectName(QStringLiteral("detailsLayout"));
    oDescription = new QLabel();
    oDescription->setObjectName(QStringLiteral("oDescription"));
    detailsLayout->addWidget(oDescription);
    objDescription = new QTextEdit();
    objDescription->setObjectName(QStringLiteral("objDescription"));
    detailsLayout->addWidget(objDescription);

    vLayout->addLayout(detailsLayout);

    // save & cancel buttons & layout
    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(horizontalSpacer);

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
    oCategory->setBuddy(objCategory);
    oCost->setBuddy(objCost);
    oCreated->setBuddy(objCreated);
    oDescription->setBuddy(objDescription);

    retranslateUi();
    return vLayout;
}
void ProjectFormLayout::retranslateUi()
{
    oName->setText("Project Name:");
    oID->setText("Project #:");
    objPriority->setItemText(0, "Normal");
    objPriority->setItemText(1, "High");
    objPriority->setItemText(2, "Highest");
    objPriority->setItemText(3, "Low");
    objPriority->setItemText(4, "Lowest");

    oDue->setText("Due Date:");
    objDue->setDisplayFormat("MM/dd/yyyy");
    oPriority->setText("Priority:");
    oStatus->setText("Status:");
    oCategory->setText("Category:");
    oCost->setText("Total Cost:");
    oCreated->setText("Date Created:");
    objCreated->setDisplayFormat("MM/dd/yyyy");
    oDescription->setText("Description:");
    objSave->setText("Save");
    objCancel->setText("Cancel");

    objCreated->setDate(QDate::currentDate());
    objDue->setDate(QDate::currentDate());

    model = projModel->getComboBox("category", "name");
    objCategory->setModel(model);

    model = projModel->getComboBox("status", "id");
    objStatus->setModel(model);

    QObject::connect(objSave, SIGNAL(clicked()), this, SLOT(saveObject()));
    QObject::connect(objCancel, SIGNAL(clicked()), this, SLOT(cancelObject()));

    /*QWidget::setTabOrder(treeView, tableView);
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
    QWidget::setTabOrder(ProjCancel, projName);*/
   /* QWidget::setTabOrder(projName, id);
    QWidget::setTabOrder(id, objCreated);
    QWidget::setTabOrder(objCreated, objStatus);
    QWidget::setTabOrder(objStatus, objCategory);
    QWidget::setTabOrder(objCategory, objPriority);
    QWidget::setTabOrder(objPriority, objCost);
    QWidget::setTabOrder(objCost, objDue);
    QWidget::setTabOrder(objDue, objDescription);
    QWidget::setTabOrder(objDescription, objSave);
    QWidget::setTabOrder(objSave, objCancel);*/
}
void ProjectFormLayout::saveObject()
{
    project->setName(objName->text());
    project->setDescription(objDescription->toPlainText());
    project->setPriority(objPriority->currentText());
    project->setCost(objCost->text());
    project->setDueDate(objDue->date());
    project->setCatID(objCategory->currentText());
    project->setStatusID(objStatus->currentText());
    project->update_project(objID->text());
}
void ProjectFormLayout::cancelObject()
{
    mainWindow->openWidgetPg(0);
}
