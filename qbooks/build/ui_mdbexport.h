/********************************************************************************
** Form generated from reading UI file 'mdbexport.ui'
**
** Created: Wed Nov 16 20:34:55 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDBEXPORT_H
#define UI_MDBEXPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mdbexport
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_fileNam;
    QToolButton *toolButton_delet;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButtonInfo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_curan;
    QVBoxLayout *verticalLayout;
    QLabel *label_Info;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *mdbexport)
    {
        if (mdbexport->objectName().isEmpty())
            mdbexport->setObjectName(QString::fromUtf8("mdbexport"));
        mdbexport->resize(502, 303);
        mdbexport->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_3 = new QVBoxLayout(mdbexport);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(mdbexport);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        listWidget = new QListWidget(mdbexport);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_7->addWidget(listWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        toolButton_fileNam = new QToolButton(mdbexport);
        toolButton_fileNam->setObjectName(QString::fromUtf8("toolButton_fileNam"));

        verticalLayout_2->addWidget(toolButton_fileNam);

        toolButton_delet = new QToolButton(mdbexport);
        toolButton_delet->setObjectName(QString::fromUtf8("toolButton_delet"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_delet->setIcon(icon);
        toolButton_delet->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(toolButton_delet);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolButtonInfo = new QToolButton(mdbexport);
        toolButtonInfo->setObjectName(QString::fromUtf8("toolButtonInfo"));
        toolButtonInfo->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(toolButtonInfo);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(mdbexport);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(mdbexport);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_3->addLayout(horizontalLayout);

        checkBox_curan = new QCheckBox(mdbexport);
        checkBox_curan->setObjectName(QString::fromUtf8("checkBox_curan"));

        verticalLayout_3->addWidget(checkBox_curan);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_Info = new QLabel(mdbexport);
        label_Info->setObjectName(QString::fromUtf8("label_Info"));
        label_Info->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_Info);

        progressBar = new QProgressBar(mdbexport);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(1000);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));

        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(158, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(mdbexport);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(mdbexport);
        QObject::connect(buttonBox, SIGNAL(rejected()), mdbexport, SLOT(reject()));

        QMetaObject::connectSlotsByName(mdbexport);
    } // setupUi

    void retranslateUi(QDialog *mdbexport)
    {
        mdbexport->setWindowTitle(QApplication::translate("mdbexport", "\330\247\330\263\330\252\330\261\330\247\330\257 \331\205\331\204\331\201\330\247\330\252 \330\247\331\204\330\264\330\247\331\205\331\204\330\251", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mdbexport", "\330\252\331\206\330\250\331\212\331\207 : \331\202\330\250\331\204 \330\247\331\204\330\250\330\257\330\243 \331\201\331\212 \330\271\331\205\331\204\331\212\330\251 \330\247\331\204\330\247\330\263\330\252\331\212\330\261\330\247\330\257 \330\252\330\243\331\203\330\257 \331\205\331\206 \330\252\330\253\330\250\331\212\330\252 \330\255\330\262\331\205\330\251 mdbtools", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_fileNam->setToolTip(QApplication::translate("mdbexport", "\330\247\330\256\330\252\330\261 \330\247\331\204\331\205\330\263\330\247\330\261 ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_fileNam->setText(QApplication::translate("mdbexport", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_delet->setToolTip(QApplication::translate("mdbexport", "\330\255\330\260\331\201 \330\247\331\204\330\271\331\206\330\265\330\261 \330\247\331\204\331\205\330\255\330\257\330\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_delet->setText(QApplication::translate("mdbexport", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonInfo->setToolTip(QApplication::translate("mdbexport", "\331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\271\331\206 \330\247\331\204\330\271\331\206\330\265\330\261 \330\247\331\204\331\205\330\255\330\257\330\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonInfo->setText(QApplication::translate("mdbexport", "inf", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("mdbexport", "\330\247\331\204\331\205\330\254\331\205\331\210\330\271\330\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        checkBox_curan->setWhatsThis(QApplication::translate("mdbexport", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\330\271\331\204\331\205 \331\207\330\260\330\247 \330\247\331\204\330\256\331\212\330\247\330\261 \330\247\330\260\330\247 \331\203\330\247\331\206 \331\203\330\252\330\247\330\250 \330\247\331\204\330\252\331\201\330\263\331\212\330\261 \331\212\330\255\330\252\331\210\331\212 \330\271\331\204\331\211 \330\255\331\202\331\210\331\204 \330\247\331\204\330\247\331\212\330\247\330\252 \331\210\330\247\331\204\330\263\331\210\330\261</p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\">   \"Aya\" \331\210\330\255\331\202\331\204 \"Sora\"</p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        checkBox_curan->setText(QApplication::translate("mdbexport", "\330\252\331\201\330\263\331\212\330\261 \331\205\331\201\331\207\330\261\330\263 \330\247\331\204\330\247\331\212\330\247\330\252 \331\210\330\247\331\204\330\263\331\210\330\261", 0, QApplication::UnicodeUTF8));
        label_Info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mdbexport: public Ui_mdbexport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDBEXPORT_H
