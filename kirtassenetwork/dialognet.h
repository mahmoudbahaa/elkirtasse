/****************************************************************************
//   elkirtasse Copyright (C) 2010 yahia abouzakaria <yahiaui@gmail.com>
//
//      This program comes with ABSOLUTELY NO WARRANTY; for details type `show
w'.
//      This is free software, and you are welcome to redistribute it
//      under certain conditions; type `show c' for details.
//
//  The hypothetical commands `show w' and `show c' should show the appropriate
//  parts of the General Public License.  Of course, your program's commands
//  might be different; for a GUI interface, you would use an "about box".
//
//    You should also get your employer (if you work as a programmer) or school,
//  if any, to sign a "copyright disclaimer" for the program, if necessary.
//  For more information on this, and how to apply and follow the GNU GPL, see
//  <http://www.gnu.org/licenses/>.
//
//    The GNU General Public License does not permit incorporating your program
//  into proprietary programs.  If your program is a subroutine library, you
//  may consider it more useful to permit linking proprietary applications with
//  the library.  If this is what you want to do, use the GNU Lesser General
//  Public License instead of this License.  But first, please read
//  <http://www.gnu.org/philosophy/why-not-lgpl.html>.
// ----------------------------------------------------------
** If you have questions regarding the use of this file, please contact
** abouzakaria (yahiaui@gmail.com)
** $elkirtasse_END_LICENSE$
**
****************************************************************************/
#ifndef DIALOGNET_H
#define DIALOGNET_H

#include <QDialog>
#include <QFile>
#include <QNetworkAccessManager>
#include <QProgressDialog>
#include <QTreeWidget>
#include <QtNetwork>

class QSslError;
class QHttp;
class QHttpResponseHeader;
namespace Ui {
class Dialognet;

}

class Dialognet : public QDialog {
    Q_OBJECT
    // Q_INTERFACES(BooksInterface)

public:
    Dialognet(QWidget* parent = 0);
    ~Dialognet();
    QString mypath;

protected:
    void changeEvent(QEvent* e);
public slots:
    bool downloadFile(QString urlPath, QString distPath);

private:
    Ui::Dialognet* ui;
    void treeChargeGroupe(QTreeWidget* view, int checked);
    QProgressDialog* progressDialog;
    QNetworkReply* reply;
    QFile* fileHttp;
    bool httpRequestAborted;
    QString m_bkUrlPath;
    QString m_urlPath;
    bool isloaded;
private slots:

    void on_lineEdit_2_textChanged(QString);
    void searchInTreeview(QTreeWidget* view, QString searchString, int colum);
    bool searchTreeForString(const QString& searchString, QTreeWidgetItem* parent,
        bool itemtop, int topindex, QTreeWidget* view,
        int colum);
    bool showAllItems(QTreeWidgetItem* parent, QTreeWidget* view);
    void on_treeWidget_itemSelectionChanged();
    // void on_pushButton_clicked();
    void on_buttonBox_accepted();
    void on_toolButton_clicked();
    void cancelDownload();
    void httpRequestFinished(QNetworkReply* reply);
    void updateDataReadProgress(qint64 bytesRead, qint64 totalBytes);
    bool treeSaveGroupe(QTreeWidget* view);

#ifndef QT_NO_OPENSSL
    void sslErrors(QNetworkReply* reply, const QList<QSslError>& errors);
#endif
};

#endif // DIALOGNET_H
