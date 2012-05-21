#ifndef DIALOGMDB_H
#define DIALOGMDB_H
#include <QDialog>
#include "messages.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QAbstractButton>

namespace Ui
{
    class Dialogmdb;
}

class Dialogmdb : public QDialog
{
    Q_OBJECT
    messages *Messages;

public:
    Dialogmdb(QWidget *parent = 0);
    ~Dialogmdb();
 QString m_path;
private:
    Ui::Dialogmdb *ui;
    QString Add_Book_Name;
    QString Add_Autor_Name ;
    QString Add_Betaka;
    QString m_addGroupeName;
    QString m_addGroupeId;
    QString m_bookDir;
    QString m_newPath;
     QString msgTitle;
    QSqlDatabase m_db;
QList<QString> listId;
QString tableBook;
QString tableTitle;
private slots:

void on_toolButtonInfo_clicked();
void on_toolButtonDelete_clicked();
void creatBook(QString fn);
bool creatDir();
    void on_buttonBox_clicked(QAbstractButton* button);

    void on_comboBox_currentIndexChanged(int index);
    void on_toolButton_fileNam_clicked();
};

#endif // DIALOGMDB_H
