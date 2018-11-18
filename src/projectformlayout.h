#ifndef PROJECTFORMLAYOUT_H
#define PROJECTFORMLAYOUT_H

#include "formlayout.h"
#include "mainwindow.h"
#include "projectmodel.h"
#include "project.h"

QT_BEGIN_NAMESPACE

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
