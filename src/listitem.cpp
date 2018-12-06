#include "listitem.h"

ListItem::ListItem()
{
    itemDAO = new ItemDAO();
}

void ListItem::create_item()
{
    itemDAO->saveItem(oName, oListID);
}
void ListItem::update_item(QString id)
{
    itemDAO->updateItem(id, oName);
}
QString ListItem::getListName(QString id)
{
    return itemDAO->getFkValue("list", id);
}
