
#include <QtGui>

#include "networkplugin.h"

//! [0]


//! [1]
QString networkplugin::execPlugin()
{
    //QMessageBox::information(0,"","exec");
Dialognet *dlg =new Dialognet();
if ( dlg->exec() == QDialog::Accepted ){
  return dlg->mypath;
}
return "";
}
//! [1]
QString networkplugin::pluginTitle()
{
    return trUtf8("تحميل الكتب");
}

//! [2]
Q_EXPORT_PLUGIN2(kirtassenet, networkplugin);
//! [2]
