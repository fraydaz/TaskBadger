#ifndef LIST_H
#define LIST_H

#include "dbobject.h"
#include "listdao.h"
#include <QString>

/*
 * This class inherits from DBObject and
 * handles the lists for projects and tasks
*/
class List : public DBObject
{
public:
    List();

    void create_list(QString l_type);
    void update_list(QString id);

    // gets name of project when passed project ID
    QString getProjectName(QString id);

    // gets name of task when passed task ID
    QString getTaskName(QString id);

private:
    class ListDAO* listDAO;
};

#endif // LIST_H
