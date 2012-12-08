#ifndef DIALOGIMPORTDVD_H
#define DIALOGIMPORTDVD_H

#include <QDialog>
#include <QTreeWidgetItem>
#include <QAbstractButton>
#include <QProcess>

namespace Ui {
    class DialogImportDvd;
}

class DialogImportDvd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogImportDvd(QWidget *parent = 0);
    ~DialogImportDvd();
    void setBooksPath(QString path);
    QString getBooksPath();


private slots:
    void on_buttonBox_accepted();

    void on_toolButton_clicked();
void treeChargeGroupe( );
void on_treeWidget_itemChanged(QTreeWidgetItem *item, int );
bool unzipFile(QString fileGz,QString file);
void readstdout();
void readsteror();
void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::DialogImportDvd *ui;
  QString  m_booksPath;
  QString m_groupPath;
      QProcess *process;
};

#endif // DIALOGIMPORTDVD_H
