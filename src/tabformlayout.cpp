#include "tabformlayout.h"

TabFormLayout::TabFormLayout()
{
    projModel = new ProjectModel();
    mainWindow = new MainWindow();
    project = new Project();
    setupUi();
}
QVBoxLayout* TabFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    // project name fields & layout
    projLayout = new QHBoxLayout();
    projLayout->setSpacing(6);
    projLayout->setObjectName(QStringLiteral("projLayout"));
    pName = new QLabel();
    pName->setObjectName(QStringLiteral("pName"));
    projLayout->addWidget(pName);
    projName = new QLineEdit();
    projName->setObjectName(QStringLiteral("projName"));
    projLayout->addWidget(projName);
    vLayout->addLayout(projLayout);

    // project number fields & layout
    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));
    projIDLayout = new QHBoxLayout();
    projIDLayout->setSpacing(6);
    projIDLayout->setObjectName(QStringLiteral("projIDLayout"));
    pID = new QLabel();
    pID->setObjectName(QStringLiteral("pID"));
    pID->setMinimumSize(QSize(68, 0));
    projIDLayout->addWidget(pID);
    id = new QLineEdit();
    id->setObjectName(QStringLiteral("id"));
    id->setMaximumSize(QSize(100, 16777215));
    id->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    id->setReadOnly(true);
    id->setClearButtonEnabled(false);
    projIDLayout->addWidget(id);
    formLayout->setLayout(0, QFormLayout::LabelRole, projIDLayout);

    // priority fields & layout
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    projPriority = new QComboBox();
    projPriority->addItem(QString());
    projPriority->addItem(QString());
    projPriority->addItem(QString());
    projPriority->addItem(QString());
    projPriority->addItem(QString());
    projPriority->setObjectName(QStringLiteral("projPriority"));
    gridLayout->addWidget(projPriority, 2, 1, 1, 2);

    // due date field & layout
    pDue = new QLabel();
    pDue->setObjectName(QStringLiteral("pDue"));
    gridLayout->addWidget(pDue, 2, 6, 1, 1);
    dueDate = new QDateEdit();
    dueDate->setObjectName(QStringLiteral("dueDate"));
    dueDate->setCalendarPopup(true);
    gridLayout->addWidget(dueDate, 2, 7, 1, 2);

    // priority field & layout
    pPriority = new QLabel();
    pPriority->setObjectName(QStringLiteral("pPriority"));
    gridLayout->addWidget(pPriority, 2, 0, 1, 1);

    // status field & layout
    pStatus = new QLabel();
    pStatus->setObjectName(QStringLiteral("pStatus"));
    gridLayout->addWidget(pStatus, 0, 3, 1, 1);
    projStatus = new QComboBox();
    projStatus->setObjectName(QStringLiteral("projStatus"));
    gridLayout->addWidget(projStatus, 0, 4, 1, 2);

    // category field & layout
    pCategory = new QLabel();
    pCategory->setObjectName(QStringLiteral("pCategory"));
    gridLayout->addWidget(pCategory, 0, 6, 1, 1);
    projCategory = new QComboBox();
    projCategory->setObjectName(QStringLiteral("projCategory"));
    gridLayout->addWidget(projCategory, 0, 7, 1, 2);

    // cost field & layout
    pCost = new QLabel();
    pCost->setObjectName(QStringLiteral("pCost"));
    gridLayout->addWidget(pCost, 2, 3, 1, 1);
    projCost = new QDoubleSpinBox();
    projCost->setObjectName(QStringLiteral("projCost"));
    projCost->setMaximum(1e+6);
    gridLayout->addWidget(projCost, 2, 4, 1, 2);

    // date created field & layout
    pCreated = new QLabel();
    pCreated->setObjectName(QStringLiteral("pCreated"));
    gridLayout->addWidget(pCreated, 0, 0, 1, 1);
    createdDate = new QDateEdit();
    createdDate->setObjectName(QStringLiteral("createdDate"));
    createdDate->setMaximumSize(QSize(16777215, 16777215));
    createdDate->setStyleSheet(QLatin1String("background-color: rgb(223, 223, 223);\n"
"color: rgb(223, 223, 223);"));
    createdDate->setReadOnly(true);
    createdDate->setCalendarPopup(true);
    gridLayout->addWidget(createdDate, 0, 1, 1, 2);

    formLayout->setLayout(0, QFormLayout::FieldRole, gridLayout);
    vLayout->addLayout(formLayout);

    // description field & layout
    detailsLayout = new QHBoxLayout();
    detailsLayout->setSpacing(6);
    detailsLayout->setObjectName(QStringLiteral("detailsLayout"));
    pDescription = new QLabel();
    pDescription->setObjectName(QStringLiteral("pDescription"));
    detailsLayout->addWidget(pDescription);
    projDescription = new QTextEdit();
    projDescription->setObjectName(QStringLiteral("projDescription"));
    detailsLayout->addWidget(projDescription);

    vLayout->addLayout(detailsLayout);

    // save & cancel buttons & layout
    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(horizontalSpacer);

    QFont font;
    font.setPointSize(10);

    pSave = new QPushButton();
    pSave->setObjectName(QStringLiteral("pSave"));
    pSave->setFont(font);
    QIcon saveIcon;
    saveIcon.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    pSave->setIcon(saveIcon);
    buttonsLayout->addWidget(pSave);

    pCancel = new QPushButton();
    pCancel->setObjectName(QStringLiteral("pCancel"));
    pCancel->setFont(font);
    QIcon cancelIcon;
    cancelIcon.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    pCancel->setIcon(cancelIcon);
    buttonsLayout->addWidget(pCancel);
    vLayout->addLayout(buttonsLayout);


    pName->setBuddy(projName);
    pID->setBuddy(id);
    pDue->setBuddy(dueDate);
    pPriority->setBuddy(projPriority);
    pStatus->setBuddy(projStatus);
    pCategory->setBuddy(projCategory);
    pCost->setBuddy(projCost);
    pCreated->setBuddy(createdDate);
    pDescription->setBuddy(projDescription);

    retranslateUi();
    //QMetaObject::connectSlotsByName(MainWindow);
    return vLayout;
}
void TabFormLayout::retranslateUi()
{
    pName->setText("Project Name:");
    pID->setText("Project #:");
    projPriority->setItemText(0, "Normal");
    projPriority->setItemText(1, "High");
    projPriority->setItemText(2, "Highest");
    projPriority->setItemText(3, "Low");
    projPriority->setItemText(4, "Lowest");

    pDue->setText("Due Date:");
    dueDate->setDisplayFormat("MM/dd/yyyy");
    pPriority->setText("Priority:");
    pStatus->setText("Status:");
    pCategory->setText("Category:");
    pCost->setText("Total Cost:");
    pCreated->setText("Date Created:");
    createdDate->setDisplayFormat("MM/dd/yyyy");
    pDescription->setText("Description:");
    pSave->setText("Save");
    pCancel->setText("Cancel");

    createdDate->setDate(QDate::currentDate());
    dueDate->setDate(QDate::currentDate());

    model = projModel->setComboBox("category", "name");
    projCategory->setModel(model);

    model = projModel->setComboBox("status", "id");
    projStatus->setModel(model);

    connect(pSave, SIGNAL(clicked()), this, SLOT(saveProject()));
    connect(pCancel, SIGNAL(clicked()), this, SLOT(cancelProject()));

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
    QWidget::setTabOrder(id, createdDate);
    QWidget::setTabOrder(createdDate, projStatus);
    QWidget::setTabOrder(projStatus, projCategory);
    QWidget::setTabOrder(projCategory, projPriority);
    QWidget::setTabOrder(projPriority, projCost);
    QWidget::setTabOrder(projCost, dueDate);
    QWidget::setTabOrder(dueDate, projDescription);
    QWidget::setTabOrder(projDescription, pSave);
    QWidget::setTabOrder(pSave, pCancel);*/
}
void TabFormLayout::saveProject()
{
    project->setName(projName->text());
    project->setDescription(projDescription->toPlainText());
    project->setPriority(projPriority->currentText());
    project->setCost(projCost->text());
    //project->setDateCreated(createdDate->date());
    project->setDueDate(dueDate->date());
    project->setCatID(projCategory->currentText());
    project->setStatusID(projStatus->currentText());
    project->update_project(id->text());
}
/*void TabFormLayout::cancelProject()
{
    // reset all other fields to default values
    projName->clear();
    id->clear();
    projStatus->setCurrentText("New");
    projCategory->setCurrentText("Personal");
    projPriority->setCurrentText("Normal");
    projDescription->clear();
    projCost->setValue(0.00);
    dueDate->setDate(QDate::currentDate());
    createdDate->setDate(QDate::currentDate());
}*/
