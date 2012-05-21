#ifndef DIALOGNET_H
#define DIALOGNET_H

#include <QDialog>
#include <QTreeWidget>
#include <QProgressDialog>
#include <QHttp>
#include <QFile>
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
    Dialognet(QWidget *parent = 0);
    ~Dialognet();
QString mypath;
protected:
    void changeEvent(QEvent *e);

private:

    Ui::Dialognet *ui;
    void treeChargeGroupe(QTreeWidget *view,int checked);
    QProgressDialog *progressDialog;
    QHttp *http;
    QFile *fileHttp;
    int httpGetId;
    bool httpRequestAborted;
QString m_bkUrlPath;
    QString m_urlPath;
    bool isloaded;
private slots:

    void on_lineEdit_2_textChanged(QString );
    void searchInTreeview(QTreeWidget *view,QString searchString,int colum);
    bool searchTreeForString( const QString &searchString, QTreeWidgetItem* parent,bool itemtop,int  topindex,QTreeWidget *view,int colum);
    bool showAllItems( QTreeWidgetItem* parent,QTreeWidget *view );
    void on_treeWidget_itemSelectionChanged();
   // void on_pushButton_clicked();
    void on_buttonBox_accepted();
    void on_toolButton_clicked();
    void cancelDownload();
    bool downloadFile(QString urlPath,QString distPath);
    void httpRequestFinished(int requestId, bool error);
    void updateDataReadProgress(int bytesRead, int totalBytes);
    void readResponseHeader(const QHttpResponseHeader &responseHeader);
bool treeSaveGroupe(QTreeWidget *view);

#ifndef QT_NO_OPENSSL
    void sslErrors(const QList<QSslError> &errors);
#endif

};

#endif // DIALOGNET_H
