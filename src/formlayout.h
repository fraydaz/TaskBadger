#ifndef FORMLAYOUT_H
#define FORMLAYOUT_H

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
#include <QtWidgets/QListView>
#include <QSqlQueryModel>
#include "QMainWindow"

QT_BEGIN_NAMESPACE

/*
 * This is an abstract class for all
 * classes that set up the UI dynamically
*/
class FormLayout :  public QMainWindow
{
    Q_OBJECT

public:
    FormLayout();

    // pure virtual function to setup the layout
    virtual QVBoxLayout* setupUi() = 0;

    // pure virutal function to
    // make the layout functional
    virtual void retranslateUi() = 0;

    // fields that have values
    // needed by other classes
    QLineEdit *objName;
    QLineEdit *objID;
    QLineEdit *objItem;
    QComboBox *objPriority;
    QDateEdit *objDue;
    QComboBox *objStatus;
    QComboBox *objCategory;
    QComboBox *objProject;
    QComboBox *objTask;
    QDoubleSpinBox *objCost;
    QDateEdit *objCreated;
    QTextEdit *objDescription;

    // object save and cancel buttons
    QPushButton *objSave;
    QPushButton *objCancel;

protected slots:
    // pure virtual functions that
    // get called when buttons are clicked
    virtual void saveObject() = 0;
    virtual void cancelObject() = 0;
    virtual void addItem();

protected:
    QVBoxLayout *vLayout;
    QVBoxLayout *itemsLayout;

    QFormLayout *formLayout;
    QGridLayout *gridLayout;

    QHBoxLayout *projLayout;
    QHBoxLayout *projIDLayout;
    QHBoxLayout *detailsLayout;
    QHBoxLayout *buttonsLayout;

    QSpacerItem *horizontalSpacer;
    QSpacerItem *gridSpacer;
    QSpacerItem *buttonSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    QLabel *oName;
    QLabel *oID;
    QLabel *oPriority;
    QLabel *oDue;
    QLabel *oStatus;
    QLabel *oCategory;
    QLabel *oCost;
    QLabel *oCreated;
    QLabel *oDescription;
    QLabel *oProject;
    QLabel *oTask;
    QLabel *oItem;

    QFont font;
    QIcon saveIcon;
    QIcon cancelIcon;
    QIcon newIcon;

    QSqlQueryModel *model;

};

#endif // FORMLAYOUT_H
