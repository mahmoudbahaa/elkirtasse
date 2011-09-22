/****************************************************************************
**
** Copyright AbouZakaria.
** All rights reserved.
** Contact: AbouZakaria (yahia67@live.com)
**
** $elkirtasse_BEGIN_LICENSE:GPL$
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** AbouZakaria (yahia67@live.com)
** $elkirtasse_END_LICENSE$
**
****************************************************************************/
#include <QtGui/QApplication>
#include "mainwindow.h"
#include "booksInterface.h"
// #include <QSplashScreen>
 #include <QTranslator>
 #include <QLocale>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon;
    QPixmap pixmap(":/images/image/titlekirtasse.png");
    QSplashScreen splash(pixmap);
    splash.setMask(QBitmap(pixmap.mask()));
     splash.show();
    a.processEvents();
    QDir dir;
    QString h=dir.homePath();

    if (!dir.exists(h+"/.kirtasse")) //التاكد من وجود مجلد المكتبة
    {
        dir.mkdir( h+"/.kirtasse");
    }
    if (!dir.exists(h+"/.kirtasse/data")) //التاكد من وجود مجلد البياات
    {
        dir.mkdir( h+"/.kirtasse/data");
    }
    if (!dir.exists(h+"/.kirtasse/books")) //التاكد من وجود مجلد الكتاب
    {
        dir.mkdir( h+"/.kirtasse/books");
    }
    QFile file;

    if (!file.exists(h+"/.kirtasse/data/group.xml")){
        file.copy(QCoreApplication::applicationDirPath() +"/data/group.xml",h +"/.kirtasse/data/group.xml");
    }


QLocale::setDefault(QLocale(QLocale::Arabic, QLocale::Egypt));
    QString translatorFileName = QLatin1String("qt_");
    translatorFileName += QLocale::system().name();
    QTranslator *translator = new QTranslator(&a);
    if (translator->load(translatorFileName, QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
        a.installTranslator(translator);

    icon.addPixmap(QPixmap(QString::fromUtf8(":/images/image/groupbook.png")), QIcon::Normal, QIcon::Off);
    a.setWindowIcon(icon);
    MainWindow w;
    w.show();
    splash.finish(&w);
    return a.exec();
}
