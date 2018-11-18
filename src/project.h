#ifndef PROJECT_H
#define PROJECT_H

// Project Data Class
#include "dbobject.h"
#include "projectdao.h"
#include <QString>

class Project : public DBObject
{
public:
    Project();

    void create_project();
    void update_project(QString id);

    // Pages To Be Added
    void add_task();
    void add_list();
    void view_tasks();
    void view_lists();


private:
    class ProjectDAO* projectDAO;
};

#endif // PROJECT_H
