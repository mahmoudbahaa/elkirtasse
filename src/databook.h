#ifndef DATABOOK_H
#define DATABOOK_H
#include <QObject>
#include <QDomDocument>
#include <QtGui>
class databook : public QObject
{
    Q_OBJECT

public:
   // enum  { NumRows = 10};
      static const int NumRows=10 ;
    databook();
    ~databook();
    bool isTefsir;
     int newPosition[NumRows];
   // int prevPosition[NumRows];
    int currentPosition[NumRows];
    int rowsCount[NumRows];
    int boocNumIndex;
bool removeTechkile;
    QString bookNass[NumRows];
    QString bookPart[NumRows];
    QString bookPage[NumRows];
    QString bookCurentId[NumRows];

    QString m_currentBookPath[NumRows];
public slots:
    bool getIfTefsir();
    bool openBook(QString bookName,int position,QString bkpath);
    void moveToPosition(int position);
    bool findAya(QString soura,QString aya);
    void updatPage(QString oldText,QString newText,bool fullText);
    bool saveBook();
    void claerBook(int num);


  void treeOrganizFahrass(QTreeWidget *view,QString Bname);
private slots:
     QString noTechkile(QString text) const;
  bool chargeList();
   int getPositionID(QString id);
private:
  QString m_currentBookName[NumRows];
    QDomDocument m_docBooK[NumRows];

QList<QString> listId;

};
#endif // DATABOOK_H
