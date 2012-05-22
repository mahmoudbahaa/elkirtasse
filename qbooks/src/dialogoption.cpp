#include "dialogoption.h"
#include "ui_dialogoption.h"
#include<QtGui>
Dialogoption::Dialogoption(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialogoption)
{
    ui->setupUi(this);
    m_btnStyleUp= "QPushButton {background-color:";
    m_btnStyleDown=" ;\n    border: 2px solid rgb(0, 170, 127);\n"
             "     border-radius: 4px;\n"
             "min-width: 64px;"
             " ;}\n"
             "QPushButton:hover {\n"
             "      border: 3px solid rgba(85, 170, 255, 200);\n"
             "     border-radius: 4px;\n"
             " }\n"
             " QPushButton:pressed {\n"
             "    border: 3px solid rgba(147, 147, 147, 247)\n"
             "     border-radius: 4px;\n"
             " }";
}
Dialogoption::~Dialogoption()
{

}
  void Dialogoption::recharge()
  {
      ui->pushButton_fontcolor->setStyleSheet(m_btnStyleUp+colorFont+m_btnStyleDown);

      ui->pushButton_titlecolor->setStyleSheet(m_btnStyleUp+colorTitle+m_btnStyleDown);

      ui->pushButton_prefercolor->setStyleSheet(m_btnStyleUp+colorPrefer+m_btnStyleDown);

      ui->pushButton_findcolor->setStyleSheet(m_btnStyleUp+colorFind+m_btnStyleDown);

      ui->pushButton_backcolor->setStyleSheet(m_btnStyleUp+colorBack+m_btnStyleDown);
      QStringList styles;
      styles << trUtf8("النظام") <<QStyleFactory::keys() ;
      int df=   styles.indexOf(themesStyle);
      ui->comboBox->addItems(styles);
      ui->comboBox->setCurrentIndex(df);
      QVariant fs=fontName.pointSize();
      ui->label_font->setText(  fontName.family()+" "+ fs.toString());
      ui->label_fontTitle->setText(  fontTitleName+fontTitleSize);
      ui->label_fontHachia->setText(fontHachiaName);
       ui->label_fontKhasse->setText(fontKhasse);
      ui->spinBox_3->setValue(recentNbr);
      ui->lineEdit_costmPath->setText(pathCostm);
      ui->checkBoxCadre->setChecked(webCadre);
      ui->checkBoxThemes->setChecked(iconsThemes);
      ui->comboBoxCadre->addItem(trUtf8("الافتراضي"));

      QDir dirImage(QApplication::applicationDirPath()+"/data/images");
     QString subdir;
      foreach ( subdir, dirImage.entryList(QDir::AllDirs | QDir::NoDotAndDotDot |
                                      QDir::Hidden )){
          ui->comboBoxCadre->addItem(subdir);
         // QVariant id=cadreFolder;
        //  ui->comboBox_group->setCurrentIndex(id.toInt()-1);
   int fg=  ui->comboBoxCadre->findText(cadreFolder,Qt::MatchExactly);
    ui->comboBoxCadre->setCurrentIndex(fg);

      }

  }


void Dialogoption::on_pushButton_fontcolor_clicked()
{
     QColor couleur = QColorDialog::getColor(colorFont, this,trUtf8("اختيار لون خط النص"),QColorDialog::DontUseNativeDialog);
     if( couleur.isValid()){
         colorFont= couleur.name();
         ui->pushButton_fontcolor->setStyleSheet(m_btnStyleUp+ couleur.name()+m_btnStyleDown);
     }
}

void Dialogoption::on_pushButton_titlecolor_clicked()
{
    QColor couleur = QColorDialog::getColor(colorTitle, this,trUtf8("اختيار لون العناوين"),QColorDialog::DontUseNativeDialog);
    if( couleur.isValid()){
        colorTitle= couleur.name();
        ui->pushButton_titlecolor->setStyleSheet(m_btnStyleUp+ couleur.name()+m_btnStyleDown);
    }
}

void Dialogoption::on_pushButton_prefercolor_clicked()
{
 QColor couleur = QColorDialog::getColor(colorPrefer, this,trUtf8("اختيار لون الترميز"),QColorDialog::DontUseNativeDialog);
    if( couleur.isValid()){
        colorPrefer= couleur.name();
        ui->pushButton_prefercolor->setStyleSheet(m_btnStyleUp+ couleur.name()+m_btnStyleDown);
    }
}

void Dialogoption::on_pushButton_findcolor_clicked()
{
     QColor couleur = QColorDialog::getColor(colorFind, this,trUtf8("اختيار لون ترميز البحث"),QColorDialog::DontUseNativeDialog);
    if( couleur.isValid()){
        colorFind= couleur.name();
        ui->pushButton_findcolor->setStyleSheet(m_btnStyleUp+ couleur.name()+m_btnStyleDown);
    }
}

void Dialogoption::on_pushButton_backcolor_clicked()
{
      QColor couleur = QColorDialog::getColor(colorBack, this,trUtf8("اختيار لون خلفية النص"),QColorDialog::DontUseNativeDialog);
    if( couleur.isValid()){
        colorBack= couleur.name();
        ui->pushButton_backcolor->setStyleSheet(m_btnStyleUp+ couleur.name()+m_btnStyleDown);
    }
}

void Dialogoption::on_toolButton_clicked()
{
      bool ok = false;
    QFont police =QFontDialog::getFont(&ok, fontName, this,trUtf8("اختيار خط الصفحة"));
    if (ok)
    {
      fontName=(police);
       QVariant fs=police.pointSize();
       ui->label_font->setText(police.family()+" "+fs.toString());
    }
}

void Dialogoption::on_buttonBox_accepted()
{

    themesStyle=ui->comboBox->currentText();
    recentNbr=ui->spinBox_3->value();
    pathCostm= ui->lineEdit_costmPath->text();
    webCadre=ui->checkBoxCadre->checkState();
    cadreFolder=ui->comboBoxCadre->currentText();
    iconsThemes=ui->checkBoxThemes->checkState();
}

void Dialogoption::on_toolButton_costmPath_clicked()
{
    QString homeDir=QDir::homePath () ;
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    homeDir,
                                                    QFileDialog::ShowDirsOnly
                                                    |QFileDialog::DontResolveSymlinks);
      ui->lineEdit_costmPath->setText(dir);

}

void Dialogoption::on_toolButton_2_clicked()
{
    bool ok = false;
    QVariant fs=fontTitleSize;
  QFont police =QFontDialog::getFont(&ok, QFont(fontTitleName, fs.toInt()), this,trUtf8("اختيار خط عنوان الصفحة"));
  if (ok)
  {

      fs=police.pointSize();

      fontTitleSize=fs.toString();
      fontTitleName=(police.family());
      ui->label_fontTitle->setText(police.family()+" "+fs.toString());
  }
}

void Dialogoption::on_toolButton_3_clicked()
{
    bool ok = false;
  QFont police =QFontDialog::getFont(&ok, fontHachiaName, this,trUtf8("اختيار خط حاشية الصفحة"));
  if (ok)
  {
    fontHachiaName=(police.family());
    ui->label_fontHachia->setText(police.family());
  }
}

void Dialogoption::on_comboBoxCadre_currentIndexChanged(QString img )
{
    QString image=QApplication::applicationDirPath()+"/data/images/"+img+"/preview.png";
    QFile file(image);
    if (file.exists()){
        ui->labelCadre->setPixmap(image);
    }else{
         ui->labelCadre->setText(trUtf8("المعاينة غير متوفرة"));
    }

}

void Dialogoption::on_toolButton_10_clicked()
{
    bool ok = false;
  QFont police =QFontDialog::getFont(&ok, fontHachiaName, this,trUtf8("اختيار خط حاشية الصفحة"));
  if (ok)
  {
    fontKhasse=(police.family());
    ui->label_fontKhasse->setText(police.family());
  }
}
