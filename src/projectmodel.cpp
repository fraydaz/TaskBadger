#include "projectmodel.h"

ProjectModel::ProjectModel()
{
    projectDAO = new ProjectDAO();
}
QVBoxLayout* ProjectModel::setLayout(QString id)
{
    QVBoxLayout *projLayout = new QVBoxLayout;
    class ProjectFormLayout *newLayout;
    newLayout = new ProjectFormLayout();
    projLayout = newLayout->setupUi();
    newLayout->objID->setText(id);
    newLayout->objID->setStyleSheet("");
    newLayout->objName->setText(projectDAO->getObjectInfo(id, "name", "project"));
    newLayout->objPriority->setCurrentText(projectDAO->getObjectInfo(id, "priority", "project"));
    newLayout->objDescription->setText(projectDAO->getObjectInfo(id, "description", "project"));
    QString cost = projectDAO->getObjectInfo(id, "total_cost", "project");
    newLayout->objCost->setValue(cost.toDouble());
    QString statusID = projectDAO->getObjectInfo(id, "statusID", "project");
    newLayout->objStatus->setCurrentText(projectDAO->getFkValue("status", statusID));
    QString catID = projectDAO->getObjectInfo(id, "categoryID", "project");
    newLayout->objCategory->setCurrentText(projectDAO->getFkValue("category", catID));
    newLayout->objDue->setDate(projectDAO->getObjectDate(id, "due_date", "project"));
    newLayout->objCreated->setDate(projectDAO->getObjectDate(id, "date_created", "project"));
    newLayout->objCreated->setStyleSheet("");
    return projLayout;
}
