#ifndef DIALOGCONVERT_H
#define DIALOGCONVERT_H
#include <QDialog>
#include "messages.h"
 #include <QTextEdit>

namespace Ui
{
    class dialogconvert;
}

class dialogconvert : public QDialog
{
    Q_OBJECT
    messages *Messages;
public:
    dialogconvert(QWidget *parent = 0);
    ~dialogconvert();
    QString m_pathCostum;
private:
    Ui::dialogconvert *ui;
    bool creat_xmlfile(QString path);
    bool load(const QString &f);
    bool creat_dir();
    bool ecrirexml(int jozaa);
    QTextEdit m_textEdit;
    QDomDocument m_docBook;
    QString m_newPath;
    QString m_newPathDir;
    QString m_addGroupeId;
int creatId;
public slots:


private slots:

    void on_toolButton_down_clicked();
    void on_toolButton_up_clicked();
    void on_toolButton_delete_clicked();
    void on_comboBox_group_currentIndexChanged(int index);
    void on_toolButton_fileNam_clicked();
    void on_pushButton_clicked();


};
#endif // DIALOGCONVERT_H
