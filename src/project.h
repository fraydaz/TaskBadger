#ifndef PROJECT_H
#define PROJECT_H

// Project Data Class
#include "dbobject.h"
#include "projectdao.h"
#include <QString>

/*
 * This class inherits from DBObject
 * and handles the projects
*/

class Project : public DBObject
{
public:
    Project();

    void create_project();
    void update_project(QString id);

private:
    class ProjectDAO* projectDAO;
};

#endif // PROJECT_H
