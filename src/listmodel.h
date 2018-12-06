#ifndef LISTMODEL_H
#define LISTMODEL_H

#include "objectmodel.h"
#include "listformlayout.h"
#include "listdao.h"

class ListModel  : public ObjectModel
{
public:
    ListModel();
    QVBoxLayout* setLayout(QString id);

private:
    class ListDAO* listDAO;
};

#endif // LISTMODEL_H
