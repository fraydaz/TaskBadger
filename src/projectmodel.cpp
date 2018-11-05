#include "projectmodel.h"
#include <QSqlQuery>

ProjectModel::ProjectModel()
{
    projectDAO = new ProjectDAO();
    project = new Project();
}

QSqlQueryModel* ProjectModel::setComboBox(QString menu, QString order)
{
    QSqlQuery query = projectDAO->getList(menu, order);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}

QSqlQueryModel* ProjectModel::setTableView(QString view)
{
    QSqlQuery query = projectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}

QSqlQueryModel* ProjectModel::setTreeView(QString view)
{
    QSqlQuery query = projectDAO->getView(view);
    this->model = new QSqlQueryModel();
    model->setQuery(query);
    return model;
}
QVBoxLayout* ProjectModel::setProjLayout(QString id)
{
    QVBoxLayout *projLayout = new QVBoxLayout;
    class TabFormLayout *newLayout;
    newLayout = new TabFormLayout();
    projLayout = newLayout->setupUi();
    //setProjData(newLayout, id);
    newLayout->id->setText(id);
    newLayout->id->setStyleSheet("");
    newLayout->projName->setText(projectDAO->getProjInfo(id, "name"));
    newLayout->projPriority->setCurrentText(projectDAO->getProjInfo(id, "priority"));
    newLayout->projDescription->setText(projectDAO->getProjInfo(id, "description"));
    QString cost = projectDAO->getProjInfo(id, "total_cost");
    newLayout->projCost->setValue(cost.toDouble());
    QString statusID = projectDAO->getProjInfo(id, "statusID");
    newLayout->projStatus->setCurrentText(projectDAO->getFkValue("status", statusID));
    QString catID = projectDAO->getProjInfo(id, "categoryID");
    newLayout->projCategory->setCurrentText(projectDAO->getFkValue("category", catID));
    newLayout->dueDate->setDate(projectDAO->getProjDate(id, "due_date"));
    newLayout->createdDate->setDate(projectDAO->getProjDate(id, "date_created"));
    newLayout->createdDate->setStyleSheet("");
    return projLayout;
}
/*void ProjectModel::setProjData(TabFormLayout* layout, QString id)
{
    layout->id->setText(id);
    layout->id->setStyleSheet("");
    layout->projName->setText(projectDAO->getProjInfo(id, "name"));
    layout->projPriority->setCurrentText(projectDAO->getProjInfo(id, "priority"));
    layout->projDescription->setText(projectDAO->getProjInfo(id, "description"));
    QString cost = projectDAO->getProjInfo(id, "total_cost");
    layout->projCost->setValue(cost.toDouble());
    QString statusID = projectDAO->getProjInfo(id, "statusID");
    layout->projStatus->setCurrentText(projectDAO->getFkValue("status", statusID));
    QString catID = projectDAO->getProjInfo(id, "categoryID");
    layout->projCategory->setCurrentText(projectDAO->getFkValue("category", catID));
    layout->dueDate->setDate(projectDAO->getProjDate(id, "due_date"));
    layout->createdDate->setDate(projectDAO->getProjDate(id, "date_created"));
    layout->createdDate->setStyleSheet("");
}*/
