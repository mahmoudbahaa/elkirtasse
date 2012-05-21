#ifndef NETWORKPLUGIN_H
#define NETWORKPLUGIN_H
#include <QObject>
#include "src/booksInterface.h"
#include "dialognet.h"

//! [0]
class networkplugin : public QObject, NetInterface
{
    Q_OBJECT
    Q_INTERFACES(NetInterface)
public:

private:

public slots:

  QString execPlugin();
  QString pluginTitle();


private slots:


};
#endif // NETWORKPLUGIN_H
