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
#include <QSqlQueryModel>
#include "QMainWindow"

QT_BEGIN_NAMESPACE

class FormLayout :  public QMainWindow
{
    Q_OBJECT

public:
    FormLayout();
    virtual QVBoxLayout* setupUi() = 0;
    virtual void retranslateUi() = 0;
    QLineEdit *objName;
    QLineEdit *objID;
    QComboBox *objPriority;
    QDateEdit *objDue;
    QComboBox *objStatus;
    QComboBox *objCategory;
    QComboBox *objProject;
    QDoubleSpinBox *objCost;
    QDateEdit *objCreated;
    QTextEdit *objDescription;

    QPushButton *objSave;
    QPushButton *objCancel;

protected slots:
    virtual void saveObject() = 0;
    virtual void cancelObject() = 0;

protected:
    QVBoxLayout *vLayout;

    QFormLayout *formLayout;
    QGridLayout *gridLayout;

    QHBoxLayout *projLayout;
    QHBoxLayout *projIDLayout;
    QHBoxLayout *detailsLayout;
    QHBoxLayout *buttonsLayout;

    QSpacerItem *horizontalSpacer;
    QSpacerItem *gridSpacer;
    QSpacerItem *buttonSpacer;

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

    QFont font;
    QIcon saveIcon;
    QIcon cancelIcon;

    QSqlQueryModel *model;

};

#endif // FORMLAYOUT_H
