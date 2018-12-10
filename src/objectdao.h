#ifndef OBJECTDAO_H
#define OBJECTDAO_H
#include "dbmanager.h"
#include <QString>
#include <QDateTime>

/*
 * This is a base class that acts as an interface
 * between objects and the database manager class to
 * keep MySQL queries separate from application logic
*/

class ObjectDAO
{
public:
    ObjectDAO();

    // get the ID of a foreign key given the value
    virtual int getFkID(QString table, QString value);

    // get the value of a foreign key given the ID
    virtual QString getFkValue(QString table, QString id);

    virtual void deleteObject(QString table,QString id);

    virtual QSqlQuery getList(QString table, QString value);

    // returns database view
    virtual QSqlQuery getView(QString view);

    // returns a value from database to fill forms
    virtual QString getObjectInfo(QString id, QString data, QString table);

    // gets date saved for a record
    virtual QDate getObjectDate(QString id, QString data, QString table);

    // returns results from database stored procedure
    virtual QSqlQuery getRoutine(QString procedure, QString id);

protected:
    class DBManager *Database;
};

#endif // OBJECTDAO_H
