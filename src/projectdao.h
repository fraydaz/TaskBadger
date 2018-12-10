#ifndef PROJECTDAO_H
#define PROJECTDAO_H

#include "objectdao.h"
#include "dbmanager.h"
#include <QString>
#include <QDateTime>

/*
 * This class acts as an interface between
 * projects and the database manager class
*/

class ProjectDAO : public ObjectDAO
{
public:
    ProjectDAO();

    bool saveProject(QString n, QString d, QString p, QString c,
                     QDateTime dt, QDate due, int s, int cat);
    bool updateProject(QString id, QString n, QString d, QString p,
                       QString c, QDate due, int s, int cat);

private:
    class DBManager *Database;
};

#endif // PROJECTDAO_H
