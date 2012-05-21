#ifndef MDBEXPORT_H
#define MDBEXPORT_H
#include <QDialog>
#include "messages.h"
#include <QAbstractButton>
#include <QXmlStreamWriter>
namespace Ui
{
    class mdbexport;
}

class mdbexport : public QDialog
{
    Q_OBJECT
    messages *Messages;
public:
    mdbexport(QWidget *parent = 0);
    ~mdbexport();
    QString m_path;

private:
    Ui::mdbexport *ui;
    QList<QString> listId;
    QString tableBook;
    QString tableTitle;

    QString m_bookTitle;
    QString m_bookBitaka;
    QString m_bookAuthor;
 QString m_addGroupeName;
    QString m_tempDir;
    QString msgTitle;
private slots:

void on_toolButton_delet_clicked();
void on_toolButtonInfo_clicked();
void criatBooks();
bool readMain(QString mdbSource);
bool creatmdbTempFiles(QString mdbSource);

    bool creatXmlFile(QString f,QString table,QString csv);
    bool creatInfo(QString bookdir);
    bool creatBash(QString fn,QString asbok);
   QString creatBooKDir();

 void on_comboBox_currentIndexChanged(int index);
    void on_buttonBox_clicked(QAbstractButton* button);
    void on_toolButton_fileNam_clicked();
};


#endif // MDBEXPORT_H
