#ifndef FINDBOOK_H
#define FINDBOOK_H
#include <QObject>
#include <QTreeWidget>
#include <QDomDocument>
#include <QXmlStreamReader>

class QProgressBar;
class QAction;
class QLabel;
class QTextDocument;
class QPushButton;

class findbook : public QObject
{
    Q_OBJECT

public:


    findbook();
    ~findbook();


    QTreeWidget *treeView;
    QLabel *labelProgress;
    QLabel *label_progressImg;
    QProgressBar *progressBar1;
    QAction *buttonStop;
    QString  findText;
    QString  findTitle;
    QString findAuthor;
    QString findName;
bool isTefsir;
    //مسار البرنامج
 bool isNassToFind;
    QString pathCostum;
    int resultCount;
    int getFind;
    bool isFindRuned;
    bool findToList;
    bool findFirst;
    bool stopFind;
    bool findMultiFind;
    bool findAnd;
    bool findSawabik;
private:
    int m_listbkfind;
    QList<QString> m_listStrToFind;

    QString m_pathUser;

    int m_progresseValue;

    QXmlStreamReader xml;

    QDomDocument m_docBKfindlist;                   //وثيقة قائمة الكتب للبحث

    QString str;
    QString id;
    QString page;
    QString part;
public slots:
    void findOneBook(QString bookpath);
    void findInAllBook(bool inbooks);
void findInAllFahariss(QString bookpath);

void findFahariss(QTreeWidget *view,QString bookpath,QRegExp str1,QRegExp str2,int rowcount);
//*****************************
    bool searchInDoc(QTextDocument *document,QString searchString,QColor color);
    void searchInTreeview(QTreeWidget *view,QString searchString,int colum);

    //**********************load save result searsh
    void loadResultFind(QTreeWidget *view,QString fn);
    bool saveResultFind(QTreeWidget *view,QString fn);

private slots:
void readStrFirst();
    void readXml();
    void readStrMultiFind();
    void readStr();
    bool chargelistStrToFind(QString search);
    bool chargelistStrMultiFind(QString search);
    bool showAllItems( QTreeWidgetItem* parent ,QTreeWidget *view) ;
    bool searchTreeForString( const QString &searchString, QTreeWidgetItem* parent ,bool  itemtop,int  topindex,QTreeWidget *view,int colum) ;


};
#endif // FINDBOOK_H
