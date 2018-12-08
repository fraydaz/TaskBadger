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
    void setListType(QString l_type);

private:
    class ListDAO* listDAO;
    QString listType = "";
};

#endif // LISTMODEL_H
