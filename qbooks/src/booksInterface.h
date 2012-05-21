#ifndef BOOKSINTERFACE_H
#define BOOKSINTERFACE_H
#include <QObject>
#include <QtGui>

//! [0]
class NetInterface
{
public:

    virtual ~NetInterface() {}

virtual    QString execPlugin() = 0;


};
//! [0]
//! [1]
class RowatInterface
{
public:

   virtual ~RowatInterface() {}
   virtual  void treeChargeRowtName(QTreeWidget *view) = 0;
   virtual  QString readxml(int pos) = 0;
  virtual  void  rawiFind(QString rawi,QTreeWidget *viewS,QTreeWidget *viewD) = 0;

};

//! [1]
//! [2]
class ShamilaInterface
{
public:

   virtual ~ShamilaInterface() {}
virtual    QString execPlugin() = 0;

};

//! [2]

QT_BEGIN_NAMESPACE

Q_DECLARE_INTERFACE(NetInterface,
                    "com.elirtasse.Plugin.NetInterface/1.0");
Q_DECLARE_INTERFACE(RowatInterface,
                    "com.trolltech.Plugin.RowatInterface/1.0");

Q_DECLARE_INTERFACE(ShamilaInterface,
                    "com.trolltech.Plugin.ShamilaInterface/1.0");

QT_END_NAMESPACE
#endif // BOOKSINTERFACE_H
