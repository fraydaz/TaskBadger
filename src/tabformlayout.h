#ifndef TABFORMLAYOUT_H
#define TABFORMLAYOUT_H

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
#include "project.h"
#include "mainwindow.h"

QT_BEGIN_NAMESPACE

class TabFormLayout : public QMainWindow
{
    Q_OBJECT

public:
    TabFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

    QLabel *pName;
    QLineEdit *projName;
    QLabel *pID;
    QLineEdit *id;
    QLabel *pPriority;
    QComboBox *projPriority;
    QLabel *pDue;
    QDateEdit *dueDate;
    QLabel *pStatus;
    QComboBox *projStatus;
    QLabel *pCategory;
    QComboBox *projCategory;
    QLabel *pCost;
    QDoubleSpinBox *projCost;
    QLabel *pCreated;
    QDateEdit *createdDate;
    QLabel *pDescription;
    QTextEdit *projDescription;

    QPushButton *pSave;
    QPushButton *pCancel;

private slots:
    void saveProject();
   // void cancelProject();

private:
    QVBoxLayout *vLayout;

    QHBoxLayout *projLayout;
    QHBoxLayout *projIDLayout;
    QHBoxLayout *detailsLayout;
    QHBoxLayout *buttonsLayout;

    QFormLayout *formLayout;
    QGridLayout *gridLayout;

    QSpacerItem *horizontalSpacer;



    QSqlQueryModel *model;
    class ProjectModel *projModel;
    class MainWindow *mainWindow;
    class Project *project;

};

#endif // TABFORMLAYOUT_H
