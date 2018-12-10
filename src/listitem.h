#ifndef LISTITEM_H
#define LISTITEM_H

#include "dbobject.h"
#include "itemdao.h"
#include <QString>

/*
 * This class inherits from DBObject
 * and handles the list items
*/
class ListItem : public DBObject
{
public:
    ListItem();
    void create_item();
    void update_item(QString id);

    // gets name of list when passed list ID
    QString getListName(QString id);

private:
    class ItemDAO* itemDAO;
};

#endif // LISTITEM_H
