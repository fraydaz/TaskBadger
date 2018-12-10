#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include "objectmodel.h"
#include "projectdao.h"
#include "projectformlayout.h"

/*
 * This class inherits from ObjectModel
 * and acts as an interface between the project,
 * ProjectFormLayout and ProjectDAO classes to set
 * up the layout with data from the database
*/

class ProjectModel : public ObjectModel
{
public:
    ProjectModel();

    // sets up layout to view/edit existing
    // project with the project info from db
    QVBoxLayout* setLayout(QString id);

private:
    class ProjectDAO* projectDAO;
};

#endif // PROJECTMODEL_H
