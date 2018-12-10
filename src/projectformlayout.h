#ifndef PROJECTFORMLAYOUT_H
#define PROJECTFORMLAYOUT_H

#include "formlayout.h"
#include "mainwindow.h"
#include "projectmodel.h"
#include "project.h"

QT_BEGIN_NAMESPACE

/*
 * This class inherits from FormLayout class
 * and sets up a the layout for a new tab
 * for viewing and editing an existing project
*/

class ProjectFormLayout : public FormLayout
{

public:
    ProjectFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

private slots:
    void saveObject();
    void cancelObject();

private:
    class ProjectModel *projModel;
    class Project *project;
    class MainWindow *mainWindow;
};

#endif // PROJECTFORMLAYOUT_H
