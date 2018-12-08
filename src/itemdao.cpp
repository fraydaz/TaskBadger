#include "itemdao.h"
#include <QSqlQuery>
#include <QVariant>

ItemDAO::ItemDAO()
{
    Database = new DBManager();
}

bool ItemDAO::saveItem(QString n, int id)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);

    query.prepare("INSERT INTO item(name, list_id) "
                       "VALUES(:lName, :lItem)");
    query.bindValue(":lName", n);
    query.bindValue(":lItem", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
bool ItemDAO::updateItem(QString id, QString n)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("UPDATE item SET name = :iName WHERE id = :id");
    query.bindValue(":iName", n);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
