#ifndef BOOKSINTERFACE_H
#define BOOKSINTERFACE_H
#include <QObject>
#include <QtGui>
//! [0]
class BooksInterface
{
public:
    virtual ~BooksInterface() {}

 virtual  void creatHtmlFile() = 0;
 virtual  void downloadFile(QString urlPath)= 0;
 virtual  void  finishDownload()= 0;
};


QT_BEGIN_NAMESPACE
Q_DECLARE_INTERFACE(BooksInterface,
                    "com.trolltech.Plugin.booksInterface/1.0");
QT_END_NAMESPACE

#endif // BOOKSINTERFACE_H
