#include "listmodel.h"
#include <QDebug>
ListModel::ListModel()
{
    listDAO = new ListDAO();
}
QVBoxLayout* ListModel::setLayout(QString id)
{
    QVBoxLayout *listLayout = new QVBoxLayout;
    class ListFormLayout *newLayout;
    newLayout = new ListFormLayout();

    // get layout for new tab
    listLayout = newLayout->setupUi();

    // put list ID in form
    newLayout->objID->setText(id);
    newLayout->objID->setStyleSheet("");

    // put list name in form
    newLayout->objName->setText(listDAO->getObjectInfo(id, "name", "list"));
    if (listType == "project")
    {
        // put parent project in form and make parent task empty
        QString projectID = listDAO->getObjectInfo(id, "project_id", "list");
        newLayout->objProject->setCurrentText(listDAO->getFkValue("project", projectID));
        newLayout->objTask->setCurrentIndex(-1);
    }
    else if (listType == "task")
    {
        // put parent task in form and make parent project empty
        QString taskID = listDAO->getObjectInfo(id, "task_id", "list");
        newLayout->objTask->setCurrentText(listDAO->getFkValue("task", taskID));
        newLayout->objProject->setCurrentIndex(-1);
    }
    // set up listview with all items for list list
    model = getTableModel("list_items", id);
    newLayout->itemsView->setModel(model);
    return listLayout;
}
void ListModel::setListType(QString l_type)
{
    listType = l_type;
}
