#include "listformlayout.h"

ListFormLayout::ListFormLayout()
{
    mainWindow = new MainWindow();
    listModel = new ListModel();
    list = new List();
    setupUi();
}
QVBoxLayout* ListFormLayout::setupUi()
{
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));

    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));

    oName = new QLabel();
    oName->setObjectName(QStringLiteral("oName"));
    oName->setFont(font);
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

    oTask = new QLabel();
    oTask->setObjectName(QStringLiteral("oTask"));
    formLayout->setWidget(2, QFormLayout::LabelRole, oTask);

    objTask = new QComboBox();
    objTask->setObjectName(QStringLiteral("objTask"));
    formLayout->setWidget(2, QFormLayout::FieldRole, objTask);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    formLayout->setItem(3, QFormLayout::FieldRole, horizontalSpacer);

    gridSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    formLayout->setItem(4, QFormLayout::FieldRole, gridSpacer);

    oDescription = new QLabel();
    oDescription->setObjectName(QStringLiteral("oDescription"));
    formLayout->setWidget(5, QFormLayout::LabelRole, oDescription);

    objItem = new QLineEdit();
    objItem->setObjectName(QStringLiteral("objItem"));
    formLayout->setWidget(5, QFormLayout::FieldRole, objItem);

    objNew = new QPushButton();
    objNew->setObjectName(QStringLiteral("objNew"));
    objNew->setIcon(newIcon);
    formLayout->setWidget(6, QFormLayout::FieldRole, objNew);
    gridLayout->addLayout(formLayout, 0, 0, 1, 1);

    itemsLayout = new QVBoxLayout();
    itemsLayout->setSpacing(6);
    itemsLayout->setObjectName(QStringLiteral("itemsLayout"));
    itemsView = new QListView();
    itemsView->setObjectName(QStringLiteral("itemsView"));
    itemsView->setDragEnabled(true);
    itemsView->setDragDropOverwriteMode(true);
    itemsView->setDragDropMode(QAbstractItemView::DragDrop);
    itemsView->setAlternatingRowColors(true);
    itemsView->setModelColumn(0);
    itemsLayout->addWidget(itemsView);

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

    itemsLayout->addLayout(buttonsLayout);
    gridLayout->addLayout(itemsLayout, 0, 3, 2, 1);

    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);
    verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    vLayout->addItem(verticalSpacer_2);
    vLayout->addItem(gridLayout);

    oName->setBuddy(objName);
    oProject->setBuddy(objProject);
    oTask->setBuddy(objTask);
    oDescription->setBuddy(objItem);

    retranslateUi();
    return vLayout;
}
void ListFormLayout::retranslateUi()
{
    oName->setText("List Name:");
    oProject->setText("Parent Project:");
    oTask->setText("Parent Task:");
    oDescription->setText("List Item:");

    objSave->setText("Save");
    objCancel->setText("Cancel");
    objNew->setText("Add To List");

    model = listModel->getComboBox("project", "id");
    objProject->setModel(model);
    objProject->setEnabled(false);

    model = listModel->getComboBox("task", "id");
    objTask->setModel(model);
    objTask->setEnabled(false);

    QObject::connect(objSave, SIGNAL(clicked()), this, SLOT(saveObject()));
    QObject::connect(objCancel, SIGNAL(clicked()), this, SLOT(cancelObject()));
    //QObject::connect(objNew, SIGNAL(clicked()), this, SLOT(addObject()));
}
void ListFormLayout::saveObject()
{
    list->setName(objName->text());
    //list->setProjectID(objProjID->currentText());
    list->update_list(objID->text());
}
void ListFormLayout::cancelObject()
{
    mainWindow->openWidgetPg(0);
}
/*void ListFormLayout::addObject()
{

}*/
