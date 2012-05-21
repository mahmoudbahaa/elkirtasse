/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Nov 16 20:34:55 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QLocale>
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

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_fileNam;
    QToolButton *toolButton_zipFileNam;
    QToolButton *toolButton_delete;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButtonInfo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_group;
    QCheckBox *checkBox_curan;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(435, 291);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/address-book-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setLayoutDirection(Qt::RightToLeft);
        Dialog->setLocale(QLocale(QLocale::Arabic, QLocale::Algeria));
        Dialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton_fileNam = new QToolButton(Dialog);
        toolButton_fileNam->setObjectName(QString::fromUtf8("toolButton_fileNam"));
        toolButton_fileNam->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(toolButton_fileNam);

        toolButton_zipFileNam = new QToolButton(Dialog);
        toolButton_zipFileNam->setObjectName(QString::fromUtf8("toolButton_zipFileNam"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/image/tar-gz.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zipFileNam->setIcon(icon1);
        toolButton_zipFileNam->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(toolButton_zipFileNam);

        toolButton_delete = new QToolButton(Dialog);
        toolButton_delete->setObjectName(QString::fromUtf8("toolButton_delete"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/image/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_delete->setIcon(icon2);
        toolButton_delete->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(toolButton_delete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        toolButtonInfo = new QToolButton(Dialog);
        toolButtonInfo->setObjectName(QString::fromUtf8("toolButtonInfo"));
        toolButtonInfo->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(toolButtonInfo);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_4);

        comboBox_group = new QComboBox(Dialog);
        comboBox_group->setObjectName(QString::fromUtf8("comboBox_group"));

        horizontalLayout_5->addWidget(comboBox_group);


        verticalLayout_2->addLayout(horizontalLayout_5);

        checkBox_curan = new QCheckBox(Dialog);
        checkBox_curan->setObjectName(QString::fromUtf8("checkBox_curan"));

        verticalLayout_2->addWidget(checkBox_curan);

        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(10);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\330\245\330\270\330\247\331\201\330\251 \331\203\330\252\330\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_fileNam->setToolTip(QApplication::translate("Dialog", "\331\201\330\252\330\255 \331\205\330\254\331\204\330\257 \331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolButton_fileNam->setWhatsThis(QApplication::translate("Dialog", "\330\247\331\206\331\202\330\261 \331\207\330\247 \331\204\330\247\330\266\330\247\331\201\330\251 \331\203\330\252\330\250 \330\272\331\212\330\261 \331\205\330\266\330\272\331\210\330\267\330\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton_fileNam->setText(QApplication::translate("Dialog", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_zipFileNam->setToolTip(QApplication::translate("Dialog", "\331\201\330\252\330\255 \330\247\330\261\330\264\331\212\331\201 \331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolButton_zipFileNam->setWhatsThis(QApplication::translate("Dialog", "\330\247\331\202\330\261 \331\207\331\206\330\247 \331\204\330\247\330\266\330\247\331\201\330\251 \331\203\330\252\330\250 \331\205\330\266\330\272\330\267\330\251 ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton_zipFileNam->setText(QApplication::translate("Dialog", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_delete->setToolTip(QApplication::translate("Dialog", "\331\201\330\252\330\255 \331\205\330\254\331\204\330\257 \331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolButton_delete->setWhatsThis(QApplication::translate("Dialog", "\330\255\330\260\331\201 \330\247\331\204\330\271\331\206\330\265\330\261 \330\247\331\204\331\205\330\255\330\257\330\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton_delete->setText(QApplication::translate("Dialog", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonInfo->setToolTip(QApplication::translate("Dialog", "\331\201\330\252\330\255 \331\205\330\254\331\204\330\257 \331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolButtonInfo->setWhatsThis(QApplication::translate("Dialog", "\331\205\330\271\331\204\331\210\331\205\330\247\330\252 \330\271\331\206 \330\247\331\204\330\271\331\206\330\265\330\261 \330\247\331\204\331\205\330\255\330\257\330\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButtonInfo->setText(QApplication::translate("Dialog", "inf", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\330\247\331\204\331\205\330\254\331\205\331\210\330\271\330\251", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        comboBox_group->setWhatsThis(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\330\247\330\256\330\252\330\261 \330\247\331\204\331\205\330\254\331\205\331\210\330\271\330\251 \330\247\331\204\330\252\331\212 \330\263\331\212\330\252\331\205 \330\247\330\266\330\247\331\201\330\251 \330\247\331\204\331\203\330\252\330\247\330\250 \330\247\331\204\331\212\331\207\330\247</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        checkBox_curan->setWhatsThis(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\330\271\331\204\331\205 \331\207\330\260\330\247 \330\247\331\204\330\256\331\212\330\247\330\261 \330\247\330\260\330\247 \331\203\330\247\331\206 \331\203\330\252\330\247\330\250 \330\247\331\204\330\252\331\201\330\263\331\212\330\261 \331\212\330\255\330\252\331\210\331\212 \330\271\331\204\331\211 \330\255\331\202\331\210\331\204 \330\247\331\204\330\247\331\212\330\247\330\252 \331\210\330\247\331\204\330\263\331\210\330\261</p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\">   \"Aya\" \331\210\330\255\331\202\331\204 \"Sora\"</p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        checkBox_curan->setText(QApplication::translate("Dialog", "\330\252\331\201\330\263\331\212\330\261 \331\205\331\201\331\207\330\261\330\263 \330\247\331\204\330\247\331\212\330\247\330\252 \331\210\330\247\331\204\330\263\331\210\330\261", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
