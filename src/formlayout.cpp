#include "formlayout.h"

FormLayout::FormLayout()
{
    font.setPointSize(10);

    // link image files for icons
    saveIcon.addFile(QStringLiteral(":/Images/icons8-save-all-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    cancelIcon.addFile(QStringLiteral(":/Images/icons8-close-window-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    newIcon.addFile(QStringLiteral(":/Images/icons8-plus-48.png"), QSize(), QIcon::Normal, QIcon::Off);
}
void FormLayout::addItem()
{
    // for debugging only
    qDebug() << "In form layout add item function";
}
