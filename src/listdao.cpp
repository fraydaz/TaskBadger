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
bool ListDAO::updateList(QString id, QString n, int proj, int task)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);
    query.prepare("UPDATE list SET name = :lName, project_id = :lProject, "
                  "task_id = :lTask WHERE id = :id");
    query.bindValue(":lName", n);
    query.bindValue(":lProject", proj);
    query.bindValue(":lTask", task);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
