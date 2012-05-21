#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <QAbstractButton>
#include "messages.h"
namespace Ui
{
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    messages *Messages;

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
  QString m_path;

private:
    Ui::Dialog *ui;
    QString m_addGroupeName;
    QString m_addGroupeId;

    QString m_bookDir;
    QString m_newPathDir;

    QString Add_Book_Name;
    QString Add_Autor_Name;
    QString Add_Betaka;
  QString msgTitle;
 // QString archiveDir;
private slots:
    void on_toolButtonInfo_clicked();
    void on_toolButton_delete_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);

    void on_toolButton_zipFileNam_clicked();
    void on_toolButton_fileNam_clicked();

    void on_comboBox_group_currentIndexChanged(int index);
    bool  creat_dir();
    bool copyDir(QString filname,int items);

//void removeTempDirs(QString dirName);
//bool removeTempFiles(QString tempDir);
 void loadBookInfo(QString path);
public slots:

   //  bool loadTarGz(QString path);
};
#endif // DIALOG_H
