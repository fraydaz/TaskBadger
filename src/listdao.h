#ifndef LISTDAO_H
#define LISTDAO_H

#include "dbmanager.h"
#include "objectdao.h"
#include <QString>

class ListDAO : public ObjectDAO
{
public:
    ListDAO();
    bool saveList_Proj(QString n, int id);
    bool saveList_Task(QString n, int id);
    bool updateList(QString id, QString n);
    bool listExists(QString listName);

private:
    class DBManager *Database;
};

#endif // LISTDAO_H
