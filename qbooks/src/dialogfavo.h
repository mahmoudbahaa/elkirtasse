#ifndef DIALOGFAVO_H
#define DIALOGFAVO_H
#include <QDialog>
#include <QTreeWidget>
#include <QIcon>
namespace Ui
{
    class dialogfavo;
}

class dialogfavo : public QDialog
{
    Q_OBJECT

public:
    dialogfavo(QWidget *parent = 0);
    ~dialogfavo();
    QIcon iconFolder;
    QIcon iconFile;
    QTreeWidget *view;
    QString bookTitle;
    QString bookName;
    QString bookAut;
    QString bookId;
private:
    Ui::dialogfavo *ui;

    int reowcount;
public slots:
    void charge_combo();


private slots:

    void on_buttonBox_accepted();
    void on_pushButton_clicked();
};
#endif // DIALOGFAVO_H
