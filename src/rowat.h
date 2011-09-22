#ifndef ROWAT_H
#define ROWAT_H
#include <QTreeWidget>
#include <QDomDocument>
#include <QXmlStreamReader>
#include <QProgressBar>
#include <QTreeWidget>
#include <QFile>

class rowat : public QObject
{
    Q_OBJECT

public:


 private:

    QDomDocument docRowat;
QString name,TABAQA,WHO,AQUAL,ROTBA,R_ZAHBI,sheok,telmez,birth,death;
public slots:


    void treeChargeRowtName(QTreeWidget *view);
    bool chargeRowat();
    QString moveToPosition(int position);
    QString readxml(int pos);
    void  rawiFind(QString rawi,QTreeWidget *viewS,QTreeWidget *viewD);
    void clearData();
 private slots:
    QString creatHtml();
    QString fullRawi(QString rawi);
     bool  rawiFindAbou(QString rawi,QTreeWidget *viewS,QTreeWidget *viewD);
};
#endif // ROWAT_H
