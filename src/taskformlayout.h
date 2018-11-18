#ifndef TASKFORMLAYOUT_H
#define TASKFORMLAYOUT_H

#include "formlayout.h"
#include "mainwindow.h"
#include "taskmodel.h"
#include "task.h"

QT_BEGIN_NAMESPACE

class TaskFormLayout : public FormLayout {

public:
    TaskFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

private slots:
    void saveObject();
    void cancelObject();

private:
    class TaskModel *taskModel;
    class Task *task;
    class MainWindow *mainWindow;
};

#endif // TASKFORMLAYOUT_H
