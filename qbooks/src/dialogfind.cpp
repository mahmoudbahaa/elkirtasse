#include "dialogfind.h"
#include  "ui_dialogfind.h"
#include <QMessageBox>
#include <QtGui>
Dialogfind::Dialogfind(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialogfind)
{
    ui->setupUi(this);
    Messages = new messages();
       Findbook = new findbook();

    findList=false;
    findFirst=false;
    findAnd=true;
    findSawabik=true;

    Messages->treeChargeGroupe( ui->treeWidget,1,true);
    QString myxmlfind="<?xml version='1.0' encoding='UTF-8'?>"
                      "<root>"
                      "</root>";
    if (!m_docFind.setContent(myxmlfind))
    {
        return;
    }

}
Dialogfind::~Dialogfind()
{

}




void Dialogfind::on_lineEdit_2_textChanged(QString searchString)
{
      Findbook->searchInTreeview(ui->treeWidget,searchString,0);
}

void Dialogfind::on_buttonBox_clicked(QAbstractButton* button)
{

    if(ui->buttonBox->standardButton(button)==QDialogButtonBox::Ok){
        if (ui->lineEdit->text().isEmpty()|| ui->lineEdit->text().length()<3){
            QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("ادخل نص البحث في مربع النص"));
            return;
        }

        if (ui->radioButtonJidre->isChecked()){
            if(ui->lineEdit->text().length()!=3){
                QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("أدخل نصا يتكون من ثلاثة أحرف"));

                return;
            }
        }

            findFirst=ui->radioButtonFirst->isChecked();
            findList=ui->radioButtonJidre->isChecked();
            MultiFind=ui->radioButtonMulti->isChecked();
            findSawabik=ui->checkBoxSawabik->isChecked();
            findAnd=ui->checkBoxAnd->isChecked();
          findIsNass=ui->radioButtonbooks->isChecked();



        findString=ui->lineEdit->text();
        QTreeWidgetItem *item=new QTreeWidgetItem;
        QList<QTreeWidgetItem *> found =ui->treeWidget->findItems(
                "",Qt::MatchContains | Qt::MatchRecursive,0);


        QDomElement racine =m_docFind.documentElement(); //تحديد العنصر الجذر
        int i=0;
        foreach (item, found)
        {
            if (item->checkState(0)==Qt::Checked && item->childCount()==0)

            {
                i++;
                QString mytxt=item->text(0);
                QString mydata=item->data(1,1).toString();
                QString myaut=item->text(1);
                QString tfsr=item->data(2,1).toString();
                QString path=item->data(2,2).toString();
                QDomElement myel=m_docFind.createElement("bk");     //انشاء عنصر جديد
                racine.appendChild(myel);                    //اظافته في اخر القائمة
                myel.setAttribute("name",mydata);      //اسم مسار الكتاب
                myel.setAttribute("text",mytxt);     //اسم الكتاب
                myel.setAttribute("aut",myaut);  //اسم المؤلف
                myel.setAttribute("isTefsir",tfsr);
                myel.setAttribute("path",path);
            }
        }

        if (i==0){
            QMessageBox::information(this,trUtf8("تنبيه"),trUtf8("حدد الكتب التي تريد البحث فيها"));
            return;
        }

        QString path=QDir::homePath()+"/.kirtasse/data/";
        QFile file(path+"find.xml");
        file.open(QIODevice::WriteOnly);              //فتح الملف للكتابة عليها
        QTextStream out(&file);                       //الكتابة
        const int IndentSize = 1;
        m_docFind.save(out,IndentSize);                      //حفظ الملف
        file.close();
        m_docFind.clear();
        this->accept();
    }
}



void Dialogfind::on_treeWidget_itemChanged(QTreeWidgetItem* item, int )
{

    if (item->data(1,1).isNull()){
        if (item->checkState(0)==Qt::Checked){
            for(int i=0;i<item->childCount();++i){
                item->child(i)->setCheckState(0,Qt::Checked);
            }
            if(!m_listBookNoMash.isEmpty()){
                QMessageBox msgBox;
                msgBox.setText(trUtf8("\n هناك بعض الكتب التي لا يمكن تحديدها لانها غير موجودة في دليل الكتب ")+bookPath );
                msgBox.setInformativeText(trUtf8("انقر على اظهار التفاصيل لمعرفة قائمة الكتب المستثناة"));
                msgBox.setDetailedText(m_listBookNoMash);
                msgBox.setIcon(QMessageBox::Information);
                msgBox.setLayoutDirection(Qt::RightToLeft);
                msgBox.setWindowTitle(trUtf8("تعليمات"));
                msgBox.setStandardButtons(QMessageBox::Ok);
                msgBox.exec();
                m_listBookNoMash.clear();
            }

        }else{
            for(int i=0;i<item->childCount();++i){
                item->child(i)->setCheckState(0,Qt::Unchecked);
            }
        }

    }else{
        if (item->checkState(0)==Qt::Checked){

            QString mydata=item->data(1,1).toString();
QFile file;
         if (file.exists(bookPath+"/"+mydata+"/book.xml")){
             item->setData(2,2,"user");
         }else if(file.exists(QApplication::applicationDirPath()+"/books/"+mydata+"/book.xml")){
             item->setData(2,2,"apath");
         }else{
             QString mytxt=item->text(0);
             item->setCheckState(0,Qt::Unchecked);
            int len=m_listBookNoMash.length();
             m_listBookNoMash.insert(len,mytxt+"\n");
         }


        }


    }

}



