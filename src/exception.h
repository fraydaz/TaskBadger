#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QString>
#include <QMessageBox>

/*
 * This class shows dialog boxes
 * when query is successful or fails
*/
class Exception
{
public:
    Exception();
    ~Exception();

    void showDialog(QString msg);

private:
    QMessageBox dialog;
};

#endif // EXCEPTION_H
