#ifndef OBJECTDAO_H
#define OBJECTDAO_H
#include "dbmanager.h"
#include <QString>
#include <QDateTime>

class ObjectDAO
{
public:
    ObjectDAO();
    virtual int getFkID(QString table, QString value);
    virtual QString getFkValue(QString table, QString id);

    virtual void deleteObject(QString table,QString id);

    virtual QSqlQuery getList(QString table, QString value);
    virtual QSqlQuery getView(QString view);
    virtual QString getObjectInfo(QString id, QString data, QString table);
    virtual QDate getObjectDate(QString id, QString data, QString table);
    virtual QSqlQuery getRoutine(QString procedure, QString id);

protected:
    class DBManager *Database;
};

#endif // OBJECTDAO_H
