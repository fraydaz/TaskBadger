#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include "objectmodel.h"
#include "projectdao.h"
#include "projectformlayout.h"

class ProjectModel : public ObjectModel
{
public:
    ProjectModel();
    QVBoxLayout* setLayout(QString id);

private:
    class ProjectDAO* projectDAO;
};

#endif // PROJECTMODEL_H
