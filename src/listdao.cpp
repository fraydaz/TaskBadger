#include "listdao.h"
#include <QSqlQuery>
#include <QVariant>

ListDAO::ListDAO()
{
    Database = new DBManager();
}
bool ListDAO::saveList_Proj(QString n, int id)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO list(name, project_id) "
                       "VALUES(:lName, :lProject)");
    query.bindValue(":lName", n);
    query.bindValue(":lProject", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
bool ListDAO::saveList_Task(QString n, int id)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("INSERT INTO list(name, task_id) "
                       "VALUES(:lName, :lTask)");
    query.bindValue(":lName", n);
    query.bindValue(":lTask", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
bool ListDAO::updateList(QString id, QString n)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("UPDATE list SET name = :lName "
                  "WHERE id = :id");
    query.bindValue(":lName", n);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}

/*bool ListDAO::listExists(QString listName)
{
    bool exists;

    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("SELECT COUNT(*) AS total FROM list WHERE "
                  "EXISTS (SELECT * FROM list WHERE"
                  " name = :lName )");
    query.bindValue(":lName", listName);

    QString numRows = Database->sqlCount(query);
    if (numRows == "0")
        exists = false;
    else exists = true;
    return exists;
}*/
