#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
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

private slots:
    void on_toolButton_zipFileNam_clicked();
    void on_toolButton_fileNam_clicked();
    void on_buttonBox_accepted();
    void on_comboBox_group_currentIndexChanged(int index);
    bool  creat_dir();
bool uzipBook(QString path);
void removeTempDirs(QString dirName);
bool removeTempFiles(QString tempDir);
 void loadBookInfo(QString path);
public slots:

     void loadTarGz(QString path);
};
#endif // DIALOG_H
