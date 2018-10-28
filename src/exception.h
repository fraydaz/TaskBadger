#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QString>
#include <QMessageBox>

class Exception
{
public:
    Exception();
    ~Exception();

    void showError(QString msg);
    void showSuccess(QString msg);

private:
    QMessageBox errorMsg;
};

#endif // EXCEPTION_H
