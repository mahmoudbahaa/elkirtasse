#ifndef DIALOGCONFIGBOOKS_H
#define DIALOGCONFIGBOOKS_H
#include "messages.h"
#include <QDialog>

namespace Ui {
    class DialogConfigBooks;
}

class DialogConfigBooks : public QDialog
{
    Q_OBJECT
    messages *Messages;
public:
    explicit DialogConfigBooks(QWidget *parent = 0);
    ~DialogConfigBooks();
QString pathCostm;
public slots:
void setPathCostum(QString path);
private slots:
    void on_comboBoxSection_activated(int index);

    void on_toolButtonBookToGroup_clicked();

    void on_toolButtonGroupTosection_clicked();

    void on_treeWidgetCurGroup_itemSelectionChanged( );

    void on_toolButtonSectionAdd_clicked();

    void on_toolButtonGroupAdd_clicked();

    void on_toolButtonGrouprename_clicked();

    void on_treeWidgetBooks_itemSelectionChanged();

    void on_toolButtonSectionRname_clicked();

    void on_toolButtonSectionRemove_clicked();

    void on_toolButtonGroupRemove_clicked();

    void on_toolButtonRemoveBooks_clicked();

    void on_pushButtonImg_clicked();

    void on_toolButtonUpdatBk_clicked();

    void on_toolButtonOPenGroup_clicked();

    void on_toolButtonGroupUpdat_clicked();

    void on_toolButtonBkPath_clicked();

    void on_toolButtonRenBkPath_clicked();



    void on_buttonBox_accepted();

    void on_toolButtonFindBKOld_clicked();
void addbook(QTreeWidgetItem *itemNew,QTreeWidgetItem *item,QString name);


void on_treeWidgetCurGroup_itemActivated(QTreeWidgetItem *item, int column);

void on_treeWidgetCurGroup_itemClicked(QTreeWidgetItem *item, int column);

void on_toolButtonReloadAll_clicked();

private:
    Ui::DialogConfigBooks *ui;
      int indexGroup;
      bool imgChanged;
      QStringList listRenameBk;
 QString     pathCostmOld;
};

#endif // DIALOGCONFIGBOOKS_H
