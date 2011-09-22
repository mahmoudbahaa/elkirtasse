
#include "dialoggoto.h"

#include  "ui_dialoggoto.h"
#include <QMessageBox>
#include <QtGui>

dialoggoto::dialoggoto(QWidget *parent)
    : QDialog(parent), ui(new Ui::dialoggoto)
{
    ui->setupUi(this);



}
dialoggoto::~dialoggoto()
{

}
void dialoggoto::updateValue()
{
    ui->spinBoxValue->setMaximum(rowCount+1);
    ui->horizontalSlider->setMaximum(rowCount+1);
    ui->spinBoxValue->setValue(counter);
    ui->horizontalSlider->setValue(counter+1);
}

void dialoggoto::on_buttonBox_clicked(QAbstractButton* button)
{
    if(ui->buttonBox->standardButton(button)==QDialogButtonBox::Ok){


        if (ui->checkBoxValue->isChecked()){

            counter=ui->spinBoxValue->value();
             this->accept();
             return ;
        }

        counter=0;
        QVariant spinPart=ui->spinBoxPart->value();
        QVariant spinPage=ui->spinBoxPage->value();
        QFile filx(pathBook);//فتح الكتاب
        if (!filx.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("خطأ في قراءة الملف"));
            return ;
        }
        xml.setDevice(&filx);
        if (xml.readNextStartElement()) {
            if (xml.name() == "dataroot" ){
                if(  readXmlBook(spinPart.toString(),spinPage.toString())==true){
                    xml.clear();
                    filx.close();
                    this->accept();
                }else{
                    QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("الجزء أو الصفحة غير موجودين"));
                    filx.close();
                }

            }else{
                QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("خطأ غير محدد"));
            }

        }
  xml.clear();
        filx.close();

    }

}

bool dialoggoto::readXmlBook(QString spinPart,QString spinPage)
{

    Q_ASSERT(xml.isStartElement() && xml.name() == "dataroot");
    QString part="0";
    QString page="0";

    while (xml.readNextStartElement()) {
        if (xml.name() == "book"){
            counter++;
           // Q_ASSERT(xml.isStartElement() && xml.name() == "book");
            while (xml.readNextStartElement()) {
                if (xml.name() == "page"){
                 //   Q_ASSERT(xml.isStartElement() && xml.name() == "page");
                    page=xml.readElementText();
                }else if (xml.name() == "part"){
                 //   Q_ASSERT(xml.isStartElement() && xml.name() == "part");
                    part= xml.readElementText();

                }else{

                    xml.skipCurrentElement();
                }
            }

        } else{

            xml.skipCurrentElement();
        }
        if (part+"_"+page==spinPart+"_"+spinPage){
             xml.skipCurrentElement();
            xml.clear();
             return true;
        }

    }

    return false;
}



