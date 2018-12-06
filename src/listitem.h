#ifndef LISTITEM_H
#define LISTITEM_H

#include "dbobject.h"
#include "itemdao.h"
#include <QString>

class ListItem : public DBObject
{
public:
    ListItem();
    void create_item();
    void update_item(QString id);
    QString getListName(QString id);

private:
    class ItemDAO* itemDAO;
};

#endif // LISTITEM_H
