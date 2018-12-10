#ifndef LISTMODEL_H
#define LISTMODEL_H

#include "objectmodel.h"
#include "listformlayout.h"
#include "listdao.h"

/*
 * This class inherits from ObjectModel
 * and acts as an interface between the list,
 * ListFormLayout and ListDAO classes to set
 * up the layout with data from the database
*/
class ListModel  : public ObjectModel
{
public:
    ListModel();

    // sets up layout to view/edit existing
    // list with the list info from db
    QVBoxLayout* setLayout(QString id);

    // helper function
    void setListType(QString l_type);

private:
    class ListDAO* listDAO;

    // project / task list
    QString listType = "";
};

#endif // LISTMODEL_H
