#include "projectdao.h"
#include <QSqlQuery>
#include <QVariant>

ProjectDAO::ProjectDAO()
{
    Database = new DBManager();
}
bool ProjectDAO::saveProject(QString n, QString d, QString p, QString c,
                             QDateTime dt, QDate due, int s, int cat)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);

    // prepare INSERT query and then bind
    // values to prevent MySQL injection
    query.prepare("INSERT INTO project(name, description, priority, "
                      "total_cost, date_created, due_date, statusID, categoryID) "
                       "VALUES(:pName, :pDetails, :pPriority, :pCost, :pDate, "
                      ":pDue, :pStatus, :pCat)");
    query.bindValue(":pName", n);
    query.bindValue(":pDetails", d);
    query.bindValue(":pPriority", p);
    query.bindValue(":pCost", c);
    query.bindValue(":pDate", dt);
    query.bindValue(":pDue", due);
    query.bindValue(":pStatus", s);
    query.bindValue(":pCat", cat);

    bool saved = Database->sqlInsert(query);
    return saved;
}
bool ProjectDAO::updateProject(QString id, QString n, QString d, QString p,
                               QString c, QDate due, int s, int cat)
{
    QSqlDatabase localdb = QSqlDatabase::database("MyDB");
    QSqlQuery query = QSqlQuery(localdb);

    // prepare UPDATE query and then bind
    // values to prevent MySQL injection
    query.prepare("UPDATE project SET name = :pName, description = :pDetails, "
                  "priority = :pPriority, total_cost = :pCost, due_date = :pDue, "
                  "statusID = :pStatus, categoryID = :pCat WHERE id = :id");
    query.bindValue(":pName", n);
    query.bindValue(":pDetails", d);
    query.bindValue(":pPriority", p);
    query.bindValue(":pCost", c);
    query.bindValue(":pDue", due);
    query.bindValue(":pStatus", s);
    query.bindValue(":pCat", cat);
    query.bindValue(":id", id);

    bool saved = Database->sqlInsert(query);
    return saved;
}
