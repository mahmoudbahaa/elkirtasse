#include "dialog.h"
#include  "ui_dialog.h"
#include <QtXml>
#include <QDomDocument>
#include <QMessageBox>
#include<QtGui>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
     Messages = new messages();
// m_path=QCoreApplication::applicationDirPath ();
#ifdef   Q_WS_WIN
ui->toolButton_zipFileNam->setVisible(false);
#endif
 Messages->comboCharge(ui->comboBox_group);
removeTempDirs(QDir::homePath()+"/.kirtasse/download/");
}

Dialog::~Dialog()
{
removeTempDirs(QDir::homePath()+"/.kirtasse/download/");
}


void Dialog::on_comboBox_group_currentIndexChanged(int index)
{
    QVariant idx;
    idx=ui->comboBox_group->itemData(index);
    m_addGroupeId=idx.toString();
    m_addGroupeName= ui->comboBox_group->itemText(index);


    if (idx.toString()=="28")
    {
        ui->checkBox_curan->setVisible(true);
    }
    else{
        ui->checkBox_curan->setVisible(false);
        ui->checkBox_curan->setChecked(false);
    }
}

void Dialog::on_buttonBox_accepted()
{
    QDir dir;
    if (!dir.exists(ui->lineEdit_fileNam->text())) //التاكد من وجود مجلد الكتاب
    {
        QMessageBox::information(this,trUtf8("خطأ"), trUtf8("غير موجود")+ui->lineEdit_fileNam->text());
        return;
    }

    if ( creat_dir()==false){
            QMessageBox::information(this,trUtf8("خطأ"), trUtf8("خطأ لم استطع انشاء المجلد"));

        return;
    }

    QFile file;      //نسخ الملفات الى وجهة المكتبة
    if(file.copy(ui->lineEdit_fileNam->text()+"/title.xml",m_newPathDir+"/title.xml")==false){
        QMessageBox::information(this,trUtf8("خطأ"), trUtf8("خطأ لم استطع انشاء الملف title.xml"));
    return;
    }
    if(file.copy(ui->lineEdit_fileNam->text()+"/book.xml",m_newPathDir+"/book.xml")==false){
        QMessageBox::information(this,trUtf8("خطأ"), trUtf8("خطأ لم استطع انشاء الملف book.xml"));
    return;
    }

    // QString Add_Path_Name=ui->lineEdit_fileNam->text();
    QString Add_Book_Name=ui->lineEdit_booknam->text();
    QString Add_Autor_Name =ui->lineEdit_autor->text()  ;
    QString Add_Betaka=ui->textEdit_betaka->textCursor().document()->toPlainText();

    bool checked=false;
     Messages->m_pathCostum=m_path;
    if (ui->checkBox_curan->checkState()==Qt::Checked) {
        checked=true;
    }
    if (Messages->addNewBook(m_bookDir,Add_Book_Name,Add_Autor_Name,Add_Betaka,m_addGroupeId,checked)==false)
    {
        QMessageBox::information(this,trUtf8("خطأ"), trUtf8("ربما نسيت ملأ احد اخانات الضرورية أو ان بيانات الكتاب خاطئة"));

    }
    else
    {
        Messages->saveBookInfo(m_bookDir,Add_Book_Name,Add_Autor_Name,Add_Betaka);
        QMessageBox::information(this,trUtf8("معلومات"), trUtf8("تمت عملية اظافة الكتاب بنجاح"));

    }

}
bool  Dialog::creat_dir()
 {
    QString newBooName=  Messages->geniratNewBookName(m_addGroupeId);
       QDir newdir= m_path+"/"+ newBooName;
       if (!newdir.exists()){
           QDir dir(m_path );
           dir.mkdir( newBooName);
         m_bookDir  =newBooName;
            m_newPathDir=m_path+"/"+ newBooName;
           return true;
          }

     bool exit=false;
     int i=0;
    while(exit==false)
     {
         i=i+1;
         QVariant m=i;
         QString path=m_path;
          QDir newdir =path+"/"+ newBooName+"_"+m.toString();
         if (newdir.exists())
         {
             exit=false;
         }
         else{
             QDir dir(path );
             if(dir.mkdir( newBooName+"_"+ m.toString())==false) {
                 return false;
             }
            m_bookDir  =newBooName+"_"+ m.toString();
             m_newPathDir=path+"/"+ newBooName+"_"+ m.toString();
             exit=true;
         }
     }
    return true;
 }
void Dialog::on_toolButton_fileNam_clicked()
{
    QString homeDir=QDir::homePath () ;
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    homeDir,
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);
loadBookInfo(dir);
//    ui->lineEdit_fileNam->setText(dir);
//    Messages->loadBookInfo(dir);
//    ui->lineEdit_booknam->setText(Messages->infoBookTitle);
//    ui->lineEdit_autor->setText(Messages->infoBookAutor);
//    ui->textEdit_betaka->setText(Messages->infoBookBetaka);
}
void Dialog::loadBookInfo(QString path)
{
    ui->lineEdit_fileNam->setText(path);
    if (  Messages->loadBookInfo(path)==false) {
        removeTempDirs(QDir::homePath()+"/.kirtasse/download/");
         QMessageBox::information(this,"info","no valid");
        return;
    }
    ui->lineEdit_booknam->setText(Messages->infoBookTitle);
    ui->lineEdit_autor->setText(Messages->infoBookAutor);
    ui->textEdit_betaka->setText(Messages->infoBookBetaka);
}

void Dialog::on_toolButton_zipFileNam_clicked()
{
  removeTempDirs(QDir::homePath()+"/.kirtasse/download/");
    QString fn = QFileDialog::getOpenFileName(this, tr("Open File..."),
                                              QString(), trUtf8("ملفات ارشفة (*tar.gz *.krts);;krts (*.krts);;tar.gz (*.tar.gz);;كل الملفات (*)"));
    if (!fn.isEmpty())
    {

        loadTarGz(fn);


    }
}

void Dialog::loadTarGz(QString path)
{
    QFile file;
    if(uzipBook(path)==true){
        QString tempDir;
        QString dirName=QDir::homePath()+"/.kirtasse/download/";
        QDir dir(dirName);
        foreach ( tempDir, dir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot |
                                         QDir::Hidden )){

            if (file.exists(dirName+tempDir+"/bookinfo.info")){
                loadBookInfo(dirName+tempDir);
                return;
            }
QMessageBox::critical(this,trUtf8("خطأ"),trUtf8("الارشيف لا يحتوي على كتاب"));
        }

    }
}

bool Dialog::uzipBook(QString path)
{

    QDir dir;
    QString h=dir.homePath();

    if (!dir.exists(h+"/.kirtasse/download")) //التاكد من وجود مجلد المكتبة
    {
        dir.mkdir( h+"/.kirtasse/download");
    }
    QString pathToExtract=QDir::homePath()+"/.kirtasse/download";
#ifdef   Q_WS_X11
      QProcess prosses;
        prosses.execute("tar -xvf  \""+path+"\" -C  "+pathToExtract);
    // prosses.execute("tar -xvf "+path+" -C  "+pathToExtract);
     return true;
#endif

}

void Dialog::removeTempDirs(QString dirName)
{
    removeTempFiles(dirName);
    QString subdir;
    
    QDir dir(dirName);
    foreach ( subdir, dir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot |
                                    QDir::Hidden )){
        
        if ( removeTempFiles(dirName+subdir)==true){
            // QMessageBox::information(0,trUtf8("خطأ"),dirName+"/"+subdir);
            removeTempDirs(dirName+"/"+subdir);
            dir.rmdir(subdir);
            
        }
        
    }
}

bool  Dialog::removeTempFiles(QString tempDir)
{

        QDir dirS(tempDir);
        QString subfile;
        QFile filetemp;
        foreach ( subfile, dirS.entryList(QDir::AllEntries)){

            filetemp.remove(tempDir+"/"+subfile);
        }

return true;


}
