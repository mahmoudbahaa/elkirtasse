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
private slots:


    bool creatInfo(QString bookdir);
    QString creatBooKDir();
    void on_comboBox_currentIndexChanged(int index);
    bool creatXmlFile(QString f,QString table,QString csv);
    bool creatBash(QString fn,bool bok);
    bool creatCsvFile();


    void on_buttonBox_clicked(QAbstractButton* button);
    void on_toolButton_fileNam_clicked();
};


#endif // MDBEXPORT_H
