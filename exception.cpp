#include "exception.h"

Exception::Exception()
{

}
void Exception::showError(QString msg)
{
    errorMsg.setText(msg);
    errorMsg.show();
}
void Exception::showSuccess(QString msg)
{
    errorMsg.setText(msg);
    errorMsg.show();
}
