#ifndef DIALOGFIND_H
#define DIALOGFIND_H
#include <QDialog>
#include "messages.h"
#include "findbook.h"
#include <QAbstractButton>
class QComboBox;
namespace Ui
{
    class Dialogfind;
}

class Dialogfind : public QDialog
{
    Q_OBJECT
    messages *Messages;
    findbook *Findbook;
public:
    Dialogfind(QWidget *parent = 0);
    ~Dialogfind();
    QString   findString;
  bool findIsNass;
    bool findFirst;
    bool findList;
    bool MultiFind;
    bool findAnd;
    bool findSawabik;
    QString bookPath;
private:
    Ui::Dialogfind *ui;
  // QComboBox *m_comboBoxGroup;
    QDomDocument m_docFind;
    QString m_listBookNoMash;
private slots:



    void on_treeWidget_itemChanged(QTreeWidgetItem* item, int );

    void on_buttonBox_clicked(QAbstractButton* button);
    void on_lineEdit_2_textChanged(QString );

};
#endif // DIALOGFIND_H
