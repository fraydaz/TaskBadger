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
#include "taskmodel.h"
#include "task.h"
#include "mainwindow.h"

class TaskFormLayout : public QMainWindow
{
    Q_OBJECT

public:
    TaskFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

    QLabel *tName;
    QLabel *tProject;
    QLabel *tNum;
    QLabel *tPriority;
    QLabel *tStatus;
    QLabel *tDue;
    QLabel *tDetails;

    QLineEdit *name;
    QLineEdit *number;
    QComboBox *project;

    QComboBox *priority;
    QComboBox *status;

    QDateEdit *due;

    QTextEdit *description;

    QPushButton *taskSave;
    QPushButton *taskCancel;

private slots:
    void saveTask();
    void cancelTask();

private:

    QVBoxLayout *vLayout;

    QHBoxLayout *detailsLayout;
    QHBoxLayout *buttonsLayout;

    QFormLayout *fLayout;
    QGridLayout *gLayout;

    QSpacerItem *gridSpacer;
    QSpacerItem *hSpacer;
    QSpacerItem *buttonSpacer;

    QSqlQueryModel *model;
    class TaskModel *taskModel;
    class MainWindow *mainWindow;
    class Task *task;
};

#endif // TASKFORMLAYOUT_H
