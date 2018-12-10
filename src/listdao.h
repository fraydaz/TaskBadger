#ifndef LISTDAO_H
#define LISTDAO_H

#include "dbmanager.h"
#include "objectdao.h"
#include <QString>

/*
 * This class acts as an interface between
 * lists and the database manager class
*/
class ListDAO : public ObjectDAO
{
public:
    ListDAO();

    bool saveList_Proj(QString n, int id);
    bool saveList_Task(QString n, int id);
    bool updateList(QString id, QString n);

private:
    class DBManager *Database;
};

#endif // LISTDAO_H
