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
    // format page in a vertical layout
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    // horizontal layout for project name
    projLayout = new QHBoxLayout();
    projLayout->setSpacing(6);
    projLayout->setObjectName(QStringLiteral("projLayout"));

    // project name label
    oName = new QLabel();
    oName->setObjectName(QStringLiteral("oName"));
    projLayout->addWidget(oName);

    // project name line edit
    objName = new QLineEdit();
    objName->setObjectName(QStringLiteral("objName"));
    projLayout->addWidget(objName);
    vLayout->addLayout(projLayout);

    // horizontal spacer between project name and grid fields
    gridSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    vLayout->addItem(gridSpacer);

    // form layout for all fields besides
    // project name, id and description
    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));

    // horizontal layout for project ID
    projIDLayout = new QHBoxLayout();
    projIDLayout->setSpacing(6);
    projIDLayout->setObjectName(QStringLiteral("projIDLayout"));

    // project ID label
    oID = new QLabel();
    oID->setObjectName(QStringLiteral("oID"));
    oID->setMinimumSize(QSize(68, 0));
    projIDLayout->addWidget(oID);

    // project ID line edit - read only
    objID = new QLineEdit();
    objID->setObjectName(QStringLiteral("objID"));
    objID->setMaximumSize(QSize(100, 16777215));
    objID->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    objID->setReadOnly(true);
    objID->setClearButtonEnabled(false);
    projIDLayout->addWidget(objID);
    formLayout->setLayout(0, QFormLayout::LabelRole, projIDLayout);

    // grid layout for form layout and project ID
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));

    // project priority label
    oPriority = new QLabel();
    oPriority->setObjectName(QStringLiteral("oPriority"));
    gridLayout->addWidget(oPriority, 2, 0, 1, 1);

    // project priority combobox
    objPriority = new QComboBox();
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->addItem(QString());
    objPriority->setObjectName(QStringLiteral("objPriority"));
    gridLayout->addWidget(objPriority, 2, 1, 1, 2);

    // project due date label
    oDue = new QLabel();
    oDue->setObjectName(QStringLiteral("oDue"));
    gridLayout->addWidget(oDue, 2, 6, 1, 1);

    // project due date date picker
    objDue = new QDateEdit();
    objDue->setObjectName(QStringLiteral("objDue"));
    objDue->setCalendarPopup(true);
    gridLayout->addWidget(objDue, 2, 7, 1, 2);

    // project status label
    oStatus = new QLabel();
    oStatus->setObjectName(QStringLiteral("oStatus"));
    gridLayout->addWidget(oStatus, 0, 3, 1, 1);

    // project status combobox
    objStatus = new QComboBox();
    objStatus->setObjectName(QStringLiteral("objStatus"));
    gridLayout->addWidget(objStatus, 0, 4, 1, 2);

    // project category label
    oCategory = new QLabel();
    oCategory->setObjectName(QStringLiteral("oCategory"));
    gridLayout->addWidget(oCategory, 0, 6, 1, 1);

    // project category combobox
    objCategory = new QComboBox();
    objCategory->setObjectName(QStringLiteral("objCategory"));
    gridLayout->addWidget(objCategory, 0, 7, 1, 2);

    // project cost label
    oCost = new QLabel();
    oCost->setObjectName(QStringLiteral("oCost"));
    gridLayout->addWidget(oCost, 2, 3, 1, 1);

    // project cost spinbox
    objCost = new QDoubleSpinBox();
    objCost->setObjectName(QStringLiteral("objCost"));
    objCost->setMaximum(1e+6);
    gridLayout->addWidget(objCost, 2, 4, 1, 2);

    // project date created label
    oCreated = new QLabel();
    oCreated->setObjectName(QStringLiteral("oCreated"));
    gridLayout->addWidget(oCreated, 0, 0, 1, 1);

    // project date created date picker - read only
    objCreated = new QDateEdit();
    objCreated->setObjectName(QStringLiteral("objCreated"));
    objCreated->setMaximumSize(QSize(16777215, 16777215));
    objCreated->setStyleSheet(QLatin1String("background-color: rgb(223, 223, 223);\n"
"color: rgb(223, 223, 223);"));
    objCreated->setReadOnly(true);
    objCreated->setCalendarPopup(true);
    gridLayout->addWidget(objCreated, 0, 1, 1, 2);

    // add grid layout to form layout
    formLayout->setLayout(0, QFormLayout::FieldRole, gridLayout);

    // add form layout to page vertical layout
    vLayout->addLayout(formLayout);

    // horizontal spacer between grid fields and description
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    vLayout->addItem(horizontalSpacer);

    // horizontal layout for project description
    detailsLayout = new QHBoxLayout();
    detailsLayout->setSpacing(6);
    detailsLayout->setObjectName(QStringLiteral("detailsLayout"));

    // project description label
    oDescription = new QLabel();
    oDescription->setObjectName(QStringLiteral("oDescription"));
    detailsLayout->addWidget(oDescription);

    // project description textbox
    objDescription = new QTextEdit();
    objDescription->setObjectName(QStringLiteral("objDescription"));
    detailsLayout->addWidget(objDescription);

    // add description layout to page vertical layout
    vLayout->addLayout(detailsLayout);

    // horizontal layout for project save/cancel buttons
    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(horizontalSpacer);

    // project save button
    objSave = new QPushButton();
    objSave->setObjectName(QStringLiteral("objSave"));
    objSave->setFont(font);
    objSave->setIcon(saveIcon);
    buttonsLayout->addWidget(objSave);

    // project cancel button
    objCancel = new QPushButton();
    objCancel->setObjectName(QStringLiteral("objCancel"));
    objCancel->setFont(font);
    objCancel->setIcon(cancelIcon);
    buttonsLayout->addWidget(objCancel);
    vLayout->addLayout(buttonsLayout);

    // set buddies for labels and their fields
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
    // set text for the form labels
    oName->setText("Project Name:");
    oID->setText("Project #:");
    oDue->setText("Due Date:");
    objDue->setDisplayFormat("MM/dd/yyyy");
    oPriority->setText("Priority:");
    oStatus->setText("Status:");
    oCategory->setText("Category:");
    oCost->setText("Total Cost:");
    oCreated->setText("Date Created:");
    oDescription->setText("Description:");

    // setup priority dropdown menu
    objPriority->setItemText(0, "Normal");
    objPriority->setItemText(1, "High");
    objPriority->setItemText(2, "Highest");
    objPriority->setItemText(3, "Low");
    objPriority->setItemText(4, "Lowest");

    // format date pickers
    objCreated->setDisplayFormat("MM/dd/yyyy");
    objCreated->setDate(QDate::currentDate());
    objDue->setDate(QDate::currentDate());

    // set text for buttons
    objSave->setText("Save");
    objCancel->setText("Cancel");

    // setup category combobox
    model = projModel->getComboBox("category", "name");
    objCategory->setModel(model);

    // setup status combobox
    model = projModel->getComboBox("status", "id");
    objStatus->setModel(model);

    // connect signals when user click buttons to their functions
    QObject::connect(objSave, SIGNAL(clicked()), this, SLOT(saveObject()));
    QObject::connect(objCancel, SIGNAL(clicked()), this, SLOT(cancelObject()));
}
void ProjectFormLayout::saveObject()
{
    // save project in database
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
