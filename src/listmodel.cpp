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
    listLayout = newLayout->setupUi();
    newLayout->objName->setText(listDAO->getObjectInfo(id, "name", "list"));
    QString projectID = listDAO->getObjectInfo(id, "project_id", "list");
    newLayout->objProject->setCurrentText(listDAO->getFkValue("project", projectID));
    //QString taskID = listDAO->getObjectInfo(id, "task_id", "list");
    //newLayout->objTask->setCurrentText(listDAO->getFkValue("task", taskID));
    qDebug() << "In List Model Class set layout function";
    return listLayout;
}
