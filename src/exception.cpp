#include "exception.h"

Exception::Exception() {}

void Exception::showDialog(QString msg)
{
    dialog.setText(msg);
    dialog.show();
}
