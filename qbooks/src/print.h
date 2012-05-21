#ifndef PRINT_H
#define PRINT_H
#include <QDialog>
#include "databook.h"
#include <QTreeWidget>
#include <QDomDocument>

namespace Ui
{
    class Print;
}

class Print : public QDialog
{
    Q_OBJECT

public:
    Print(QWidget *parent = 0);
    ~Print();
   QTreeWidget *treeviw;
   // QString m_bookName;
    QString m_bookTitle;
    QString m_bookAuthor;
    QString m_WebColorBack;                           //لون خلفية النص
    QString m_WebFont;                            //نوع النص
    QString m_WebFontColor;
    QString m_WebFontTitleColor;
    QString m_WebFontPrefertColor;
    QString curentPath;
    QString m_WebFontTitle;
private:
    Ui::Print *ui;
    QDomDocument m_docBooK;
    int rowsCount;
    QString m_fileName;
    QTextEdit* m_textEdit;
    int mCurPart;

private slots:

    void on_toolButton_clicked();
    void on_buttonBox_clicked(QAbstractButton* button);
    bool openBook();

    bool fileSave();
    void creatDocument();
    void convertText(QString txt,QString part,QString page,int id);
    //   bool saveFie();

};

#endif // PRINT_H
