#include "listformlayout.h"

ListFormLayout::ListFormLayout()
{
    mainWindow = new MainWindow();
    listModel = new ListModel();
    list = new List();
    item = new ListItem();
    setupUi();
}
QVBoxLayout* ListFormLayout::setupUi()
{
    // format page in a vertical layout
    vLayout = new QVBoxLayout();
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QStringLiteral("vLayout"));

    // grid layout for resizing window
    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));

    // form layout for all fields except list view
    formLayout = new QFormLayout();
    formLayout->setSpacing(6);
    formLayout->setObjectName(QStringLiteral("formLayout"));

    // list ID label
    oID = new QLabel();
    oID->setObjectName(QStringLiteral("oID"));
    oID->setFont(font);
    formLayout->setWidget(0, QFormLayout::LabelRole, oID);

    // list ID line edit - read only
    objID = new QLineEdit();
    objID->setObjectName(QStringLiteral("objID"));
    objID->setFont(font);
    objID->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
    objID->setReadOnly(true);
    objID->setClearButtonEnabled(false);
    formLayout->setWidget(0, QFormLayout::FieldRole, objID);

    // list name label
    oName = new QLabel();
    oName->setObjectName(QStringLiteral("oName"));
    oName->setFont(font);
    formLayout->setWidget(1, QFormLayout::LabelRole, oName);

    // list name line edit
    objName = new QLineEdit();
    objName->setObjectName(QStringLiteral("objName"));
    formLayout->setWidget(1, QFormLayout::FieldRole, objName);

    // parent project label
    oProject = new QLabel();
    oProject->setObjectName(QStringLiteral("oProject"));
    formLayout->setWidget(2, QFormLayout::LabelRole, oProject);

    // parent project combobox - read only
    objProject = new QComboBox();
    objProject->setObjectName(QStringLiteral("objProject"));
    formLayout->setWidget(2, QFormLayout::FieldRole, objProject);

    // parent task label
    oTask = new QLabel();
    oTask->setObjectName(QStringLiteral("oTask"));
    formLayout->setWidget(3, QFormLayout::LabelRole, oTask);

    // parent task combobox - read only
    objTask = new QComboBox();
    objTask->setObjectName(QStringLiteral("objTask"));
    formLayout->setWidget(3, QFormLayout::FieldRole, objTask);

    // horizontal spacers between list info and 'add item' field
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    formLayout->setItem(4, QFormLayout::FieldRole, horizontalSpacer);
    gridSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    formLayout->setItem(5, QFormLayout::FieldRole, gridSpacer);

    // list item label
    oDescription = new QLabel();
    oDescription->setObjectName(QStringLiteral("oDescription"));
    formLayout->setWidget(6, QFormLayout::LabelRole, oDescription);

    // list item line edit
    objItem = new QLineEdit();
    objItem->setObjectName(QStringLiteral("objItem"));
    formLayout->setWidget(6, QFormLayout::FieldRole, objItem);

    // save item button
    saveItem = new QPushButton();
    saveItem->setObjectName(QStringLiteral("saveItem"));
    saveItem->setIcon(newIcon);
    formLayout->setWidget(7, QFormLayout::FieldRole, saveItem);
    gridLayout->addLayout(formLayout, 0, 0, 1, 1);

    // vertical layout for right side of page
    // containing list items and save / cancel buttons
    itemsLayout = new QVBoxLayout();
    itemsLayout->setSpacing(6);
    itemsLayout->setObjectName(QStringLiteral("itemsLayout"));

    // list view to show list items
    itemsView = new QListView();
    itemsView->setObjectName(QStringLiteral("itemsView"));
    itemsView->setFont(font);
    itemsView->setDragEnabled(true);
    itemsView->setDragDropOverwriteMode(true);
    itemsView->setDragDropMode(QAbstractItemView::DragDrop);
    itemsView->setAlternatingRowColors(true);
    itemsView->setModelColumn(0);
    itemsLayout->addWidget(itemsView);

    // horizontal layout for save / cancel buttons
    buttonsLayout = new QHBoxLayout();
    buttonsLayout->setSpacing(6);
    buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
    buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    buttonsLayout->addItem(buttonSpacer);

    // save list button
    objSave = new QPushButton();
    objSave->setObjectName(QStringLiteral("objSave"));
    objSave->setFont(font);
    objSave->setIcon(saveIcon);
    buttonsLayout->addWidget(objSave);

    // cancel button
    objCancel = new QPushButton();
    objCancel->setObjectName(QStringLiteral("objCancel"));
    objCancel->setFont(font);
    objCancel->setIcon(cancelIcon);
    buttonsLayout->addWidget(objCancel);

    // add buttons and list view to grid layout
    itemsLayout->addLayout(buttonsLayout);
    gridLayout->addLayout(itemsLayout, 0, 3, 2, 1);

    // vertical spacers to separate form on left
    // side from listview on right side of page
    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);
    verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);
    vLayout->addItem(gridLayout);

    // set buddies for labels and their fields
    oID->setBuddy(objID);
    oName->setBuddy(objName);
    oProject->setBuddy(objProject);
    oTask->setBuddy(objTask);
    oDescription->setBuddy(objItem);

    retranslateUi();
    return vLayout;
}
void ListFormLayout::retranslateUi()
{
    // set text for the form labels
    oID->setText("List ID:");
    oName->setText("List Name:");
    oProject->setText("Parent Project:");
    oTask->setText("Parent Task:");
    oDescription->setText("List Item:");

    // set text for buttons
    objSave->setText("Save");
    objCancel->setText("Cancel");
    saveItem->setText("Add To List");

    // setup parent project combobox
    model = listModel->getComboBox("project", "id");
    objProject->setModel(model);
    objProject->setEnabled(false);

    // setup parent task combobox
    model = listModel->getComboBox("task", "id");
    objTask->setModel(model);
    objTask->setEnabled(false);

    // connect signals when user click buttons to their functions
    QObject::connect(objSave, SIGNAL(clicked()), this, SLOT(saveObject()));
    QObject::connect(objCancel, SIGNAL(clicked()), this, SLOT(cancelObject()));
    QObject::connect(saveItem, SIGNAL(clicked()), this, SLOT(addItem()));
}
void ListFormLayout::saveObject()
{
    list->setName(objName->text());
    list->update_list(objID->text());
}
void ListFormLayout::cancelObject()
{
    mainWindow->openWidgetPg(0);
}
void ListFormLayout::addItem()
{
    // save item in database
    item->setName(objItem->text());
    item->setListID(objName->text());
    item->create_item();

    // clear field to add another item
    objItem->clear();

    // refresh list view with udpated items
    model = listModel->getTableModel("list_items", objName->text());
    itemsView->setModel(model);
}
