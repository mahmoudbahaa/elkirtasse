#ifndef DIALOGOPTION_H
#define DIALOGOPTION_H
#include <QDialog>

namespace Ui
{
    class Dialogoption;
}

class Dialogoption : public QDialog
{
    Q_OBJECT

public:
    Dialogoption(QWidget *parent = 0);
    ~Dialogoption();
    QFont  fontName;
 QString fontTitleName;
 QString fontTitleSize;
   QString  fontHachiaName;
    QString colorFont;
    QString colorTitle;
    QString colorPrefer;
    QString colorFind;
    QString colorBack;
    QString themesStyle;
    QString pathCostm;
    QString cadreFolder;
    bool webCadre;
    int recentNbr;
private:
    Ui::Dialogoption *ui;

    QString m_btnStyleDown;
    QString m_btnStyleUp;


private slots:
    void on_comboBoxCadre_currentIndexChanged(QString img );
    void on_toolButton_3_clicked();
    void on_toolButton_2_clicked();
    void on_toolButton_costmPath_clicked();

    void on_buttonBox_accepted();
    void on_toolButton_clicked();
    void on_pushButton_backcolor_clicked();
    void on_pushButton_findcolor_clicked();
    void on_pushButton_prefercolor_clicked();
    void on_pushButton_titlecolor_clicked();
    void on_pushButton_fontcolor_clicked();
public slots:
    void recharge();
};
#endif // DIALOGOPTION_H
