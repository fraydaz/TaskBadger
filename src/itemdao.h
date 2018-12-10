#ifndef ITEMDAO_H
#define ITEMDAO_H

#include "dbmanager.h"
#include "objectdao.h"
#include <QString>

/*
 * This class acts as an interface between
 * list items and the database manager class
*/
class ItemDAO : public ObjectDAO
{
public:
    ItemDAO();

    bool saveItem(QString n, int id);
    bool updateItem(QString id, QString n);

private:
    class DBManager *Database;
};

#endif // ITEMDAO_H
