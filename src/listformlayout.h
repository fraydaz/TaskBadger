#ifndef LISTFORMLAYOUT_H
#define LISTFORMLAYOUT_H

#include "formlayout.h"
#include "mainwindow.h"
#include "listmodel.h"
#include "list.h"

QT_BEGIN_NAMESPACE

class ListFormLayout  : public FormLayout
{
public:
    ListFormLayout();
    QVBoxLayout* setupUi();
    void retranslateUi();

private slots:
    void saveObject();
    void cancelObject();
    void addObject();

private:
    class ListModel *listModel;
    class List *list;
    class MainWindow *mainWindow;
};

#endif // LISTFORMLAYOUT_H
