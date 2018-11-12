#ifndef TASKFORMLAYOUT_H
#define TASKFORMLAYOUT_H
#include <QtGui>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QSqlQueryModel>
#include "projectmodel.h"
#include "task.h"
#include "mainwindow.h"

class TaskFormLayout : public QMainWindow
{
    Q_OBJECT

public:
    TaskFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

private:

    QVBoxLayout *vLayout;

    QFormLayout *formLayout;
    QLabel *taskName;
    QLineEdit *t_name;
    QLabel *taskProject;
    QComboBox *t_project;
    QGridLayout *gridLayout;
    QLabel *taskNum;
    QComboBox *t_status;
    QLabel *taskPriority;
    QComboBox *t_priority;
    QLineEdit *t_num;
    QLabel *taskStatus;
    QLabel *taskDue;
    QDateEdit *t_due;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_15;
    QLabel *taskDetails;
    QTextEdit *t_description;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *task_save;
    QPushButton *task_cancel;

    QSqlQueryModel *model;
    class ProjectModel *projModel;
    class MainWindow *mainWindow;
    class Task *task;
};

#endif // TASKFORMLAYOUT_H
