#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    QString pathMain;
    QString pathBooks;
    QString pathBooksNew;
    bool acceptedPath;
private slots:



     void on_lineEditPathMain_textChanged(const QString &arg1);

     void on_lineEditBooks_textChanged(const QString &arg1);

     void on_lineEditPathBooksNew_textChanged(const QString &arg1);

     void on_toolButtonMain_clicked();

     void on_toolButtonBooks_clicked();

     void on_toolButtonBooksNew_clicked();

     void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
