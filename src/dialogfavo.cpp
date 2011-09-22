#include "dialogfavo.h"

#include  "ui_dialogfavo.h"

#include <QtGui>
dialogfavo::dialogfavo(QWidget *parent)
    : QDialog(parent), ui(new Ui::dialogfavo)
{
    ui->setupUi(this);

}
dialogfavo::~dialogfavo()
{

}
void dialogfavo::charge_combo()
{
 QTreeWidgetItem *item;
  for(int i=0;i<view->topLevelItemCount();++i)
    {
        item= view->topLevelItem(i);
     QString   grouptext=item->text(0);
        ui->comboBox->addItem(iconFolder,grouptext);
    }
  reowcount=ui->comboBox->count();
}

void dialogfavo::on_pushButton_clicked()
{
    QInputDialog *dff=new QInputDialog(this);
    dff->setOkButtonText(trUtf8("موافق"));
    dff->setLayoutDirection(Qt::RightToLeft);
    dff->setCancelButtonText(trUtf8("الغاء"));
    dff->setLabelText(trUtf8("ادخل اسما للمجلد الجديد"));
    dff->setWindowTitle(trUtf8("انشاء مجلد جديد"));

    //استرجاع نص البحث
    if (dff->exec()==QInputDialog::Accepted ){
        QString  newtext = dff->textValue();
        if (newtext.isEmpty()){
            return;
        }
         ui->comboBox->addItem(iconFolder,newtext);
         int itmcount=ui->comboBox->count();
         ui->comboBox->setCurrentIndex(itmcount-1);

    }

}

void dialogfavo::on_buttonBox_accepted()
{

    if (ui->lineEdit->text().isEmpty()){
        return;
    }
    int index=ui->comboBox->currentIndex();
    QTreeWidgetItem *itemtop;
    QTreeWidgetItem *item;
    if (index>reowcount-1) {
        itemtop=new QTreeWidgetItem(view);
        itemtop->setText(0,ui->comboBox->currentText());
        itemtop->setIcon(0,iconFolder);
    }

    item=new QTreeWidgetItem(view->topLevelItem(index));
    item->setText(0,ui->lineEdit->text());
    item->setText(1,bookTitle);
    item->setText(2,bookAut);
    item->setData(2,1,bookId);
    item->setData(1,1,bookName);
    item->setIcon(0,iconFile);
}


