#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEditPathMain_textChanged(const QString &arg1)
{
    QFile file(arg1);
    if(file.exists()){
        ui->labelPathMain->setPixmap(style()->standardPixmap(QStyle::SP_DialogApplyButton));
         pathMain=arg1;
    } else {
        ui->labelPathMain->setPixmap(style()->standardPixmap(QStyle::SP_DialogCancelButton));
        pathMain="";
    }
}

void Dialog::on_lineEditBooks_textChanged(const QString &arg1)
{
    QFile file(arg1);
    if(file.exists()){
        ui->labelPathBooks->setPixmap(style()->standardPixmap(QStyle::SP_DialogApplyButton));
         pathBooks=arg1;
    } else {
        ui->labelPathBooks->setPixmap(style()->standardPixmap(QStyle::SP_DialogCancelButton));
        pathBooks="";
    }
}

void Dialog::on_lineEditPathBooksNew_textChanged(const QString &arg1)
{
    QFile file(arg1);
    if(file.exists()){
        ui->labelPathBooksNew->setPixmap(style()->standardPixmap(QStyle::SP_DialogApplyButton));
        pathBooksNew=arg1;
    } else {
        ui->labelPathBooksNew->setPixmap(style()->standardPixmap(QStyle::SP_DialogCancelButton));
        pathBooksNew="";
    }
}

void Dialog::on_toolButtonMain_clicked()
{
    QString fn = QFileDialog::getOpenFileName(this, tr("Open File..."),
                                              QString(), tr("main.mdb (*.mdb *.MDB)"));


    if (!fn.isEmpty())

        ui->lineEditPathMain->setText(fn);
}

void Dialog::on_toolButtonBooks_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    QString(),
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);
    if(QFile::exists(dirName)){
     ui->lineEditBooks->setText(dirName);

     }
}

void Dialog::on_toolButtonBooksNew_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    QString(),
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);
    if(QFile::exists(dirName)){
     ui->lineEditPathBooksNew->setText(dirName);

     }
}

void Dialog::on_buttonBox_accepted()
{
    if(pathMain.isEmpty() || pathBooks.isEmpty() || pathBooksNew.isEmpty()){
        acceptedPath=false;
    }else {
        acceptedPath=true;
    }
}
