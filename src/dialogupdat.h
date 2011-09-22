#ifndef DIALOGUPDAT_H
#define DIALOGUPDAT_H
#include <QDialog>
#include "messages.h"
namespace Ui
{
    class dialogupdat;
}

class dialogupdat : public QDialog
{
    Q_OBJECT
    messages *Messages;

public:
    dialogupdat(QWidget *parent = 0);
    ~dialogupdat();
    void recharge();
    QString BookName;
    QString addGroupId;
    QString bookTitle;
    QString bookAutor;
    QString bookBetaka;
    QString m_pathCostum;
private:
    Ui::dialogupdat *ui;

bool imgChanged;
private slots:
    void on_pushButtonImg_clicked();
    void on_comboBox_group_currentIndexChanged(int index);
    void on_buttonBox_accepted();
    void okEnabled();
};
#endif // DIALOGUPDAT_H
