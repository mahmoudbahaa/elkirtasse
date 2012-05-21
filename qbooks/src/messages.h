#ifndef MESSAGES_H
#define MESSAGES_H
#include <QObject>
#include <QDomDocument>
#include <QTreeWidget>
#include <QWidget>
#include <QTimer>
 #include <QLabel>
#include <QIcon>

class QComboBox;
class QProgressBar;
class QPushButton;
class QTextDocument;
class messages : public QObject
{
    Q_OBJECT

public:

    messages();
    ~messages();

   // QDomDocument docfind;
    QComboBox *comboGroup;
    QTreeWidget *treeView;



    enum { MaxRecentFiles = 16 };
    QAction *recentFileActs[MaxRecentFiles];



    QString infoBookTitle;
    QString infoBookAutor;
    QString infoBookBetaka;








 // int d=1;مسار البرنامج

    QString m_pathCostum;




public slots:
    void treeChargeSoura(QTreeWidget *view);
    void treeChargeJozaa(QTreeWidget *view);
    void treeChargeFahrass(QTreeWidget *view,QString Bname);
    void treeChargeGroupe(QTreeWidget *view,int checked,bool asCombobox);
     void treeUpdateGroupe(QTreeWidget *view,bool remove);
    bool treeMenuRemoveBook(QString BKname,bool removall);
    bool treeSaveGroupe(QTreeWidget *view);
    void recentLoad();
    void recentChange(QString Bname,QString Btitle,QString Baut,QString Bid,int nbr,bool isTefsir);
    void recentCharge();
    void recentSave();
    bool fahrasSave(QTreeWidget *view,QString bkname);

    //*************************



    //***************
    void comboCharge(QComboBox *combo);
    bool addNewBook(QString bkpath,QString bktitle,QString bkauth,QString bkbetaka,QString groupid ,bool cheked);
    //*****************************


    //****************favorite***************
    void favorite_charge(QTreeWidget *view,QIcon icong,QIcon iconf);
    void favorite_save(QTreeWidget *view);
    //************************************
    bool treeviewItemRemove(QTreeWidget *view);
     bool treeviewItemUp(QTreeWidget *view);
    bool treeviewItemDown(QTreeWidget *view);
    int genirateId(QTreeWidget *view);
    bool saveBookInfo(QString bookname,QString title,QString author,QString betaka);
    bool loadBookInfo(QString bookname);
    QString geniratNewBookName(QString groupParent);
    //**********************load save result searsh
bool loadTarGz(QString path);
void removeTempDirs(QString dirName);
private slots:

bool removeTempFiles(QString tempDir);



    bool writeInDoc(QString tit,QString data,QString lvl);
//*******************************


private:
    //  enum { NumRows };
    // QTreeWidgetItem *item[NumRows];


 QString m_pathUser;


QList<QString> listId;

    QDomDocument m_doc;
    QDomDocument m_docR;                             //وثيقة الكتب السابقة

};
#endif // MESSAGES_H
