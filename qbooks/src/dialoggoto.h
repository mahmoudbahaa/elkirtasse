#ifndef DIALOGGOTO_H
#define DIALOGGOTO_H
#include <QDialog>
#include <QXmlStreamReader>
#include <QAbstractButton>
namespace Ui
{
    class dialoggoto;
}

class dialoggoto : public QDialog
{
    Q_OBJECT

public:
    dialoggoto(QWidget *parent = 0);
    ~dialoggoto();
QString pathBook; //مسار الكتاب
int counter;
int rowCount;
private:
    Ui::dialoggoto *ui;

QXmlStreamReader xml;
private slots:
bool readXmlBook(QString spinPart,QString spinPage);


    void on_buttonBox_clicked(QAbstractButton* button);
public slots:
    void updateValue();
};
#endif // DIALOGGOTO_H
