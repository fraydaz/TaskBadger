#ifndef LISTFORMLAYOUT_H
#define LISTFORMLAYOUT_H

#include "formlayout.h"
#include "mainwindow.h"
#include "listmodel.h"
#include "list.h"
#include "listitem.h"

QT_BEGIN_NAMESPACE

/*
 * This class inherits from FormLayout class
 * and sets up a the layout for a new tab
 * for viewing and editing an existing list
*/
class ListFormLayout  : public FormLayout
{

public:
    ListFormLayout();

    QVBoxLayout* setupUi();
    void retranslateUi();

    QListView *itemsView;

private slots:
    void saveObject();
    void cancelObject();
    void addItem();

private:
    class ListModel *listModel;
    class List *list;
    class ListItem *item;
    class MainWindow *mainWindow;

    QPushButton *saveItem;

    QString listID = "";
};

#endif // LISTFORMLAYOUT_H
