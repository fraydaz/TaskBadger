#ifndef LIST_H
#define LIST_H

#include "dbobject.h"
#include "listdao.h"
#include <QString>

class List : public DBObject
{
public:
    List();
    void create_list(QString l_type);
    void update_list(QString id);
    QString getProjectName(QString id);
    QString getTaskName(QString id);

private:
    class ListDAO* listDAO;
};

#endif // LIST_H
