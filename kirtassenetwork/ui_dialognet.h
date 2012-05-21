/********************************************************************************
** Form generated from reading UI file 'dialognet.ui'
**
** Created: Wed Nov 16 20:36:05 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNET_H
#define UI_DIALOGNET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialognet
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QToolButton *toolButtonExpande;
    QToolButton *toolButtonColapce;
    QTreeWidget *treeWidget;
    QLineEdit *lineEditUrl;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialognet)
    {
        if (Dialognet->objectName().isEmpty())
            Dialognet->setObjectName(QString::fromUtf8("Dialognet"));
        Dialognet->resize(430, 347);
        Dialognet->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(Dialognet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialognet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(Dialognet);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        toolButton = new QToolButton(Dialognet);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(Dialognet);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialognet);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(Dialognet);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        toolButtonExpande = new QToolButton(Dialognet);
        toolButtonExpande->setObjectName(QString::fromUtf8("toolButtonExpande"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/image/btnfolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonExpande->setIcon(icon);

        horizontalLayout->addWidget(toolButtonExpande);

        toolButtonColapce = new QToolButton(Dialognet);
        toolButtonColapce->setObjectName(QString::fromUtf8("toolButtonColapce"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/image/colapse.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonColapce->setIcon(icon1);

        horizontalLayout->addWidget(toolButtonColapce);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(Dialognet);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("\330\247\331\204\331\203\330\252\330\247\330\250"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(250);

        verticalLayout->addWidget(treeWidget);

        lineEditUrl = new QLineEdit(Dialognet);
        lineEditUrl->setObjectName(QString::fromUtf8("lineEditUrl"));
        QPalette palette;
        QBrush brush(QColor(255, 253, 211, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(239, 232, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(236, 233, 216, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        lineEditUrl->setPalette(palette);
        lineEditUrl->setFrame(false);
        lineEditUrl->setReadOnly(true);

        verticalLayout->addWidget(lineEditUrl);

        line_2 = new QFrame(Dialognet);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        buttonBox = new QDialogButtonBox(Dialognet);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialognet);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialognet, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialognet, SLOT(reject()));
        QObject::connect(toolButtonColapce, SIGNAL(clicked()), treeWidget, SLOT(collapseAll()));
        QObject::connect(toolButtonExpande, SIGNAL(clicked()), treeWidget, SLOT(expandAll()));

        QMetaObject::connectSlotsByName(Dialognet);
    } // setupUi

    void retranslateUi(QDialog *Dialognet)
    {
        Dialognet->setWindowTitle(QApplication::translate("Dialognet", "\330\252\330\255\331\205\331\212\331\204 \331\203\330\252\330\2502", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialognet", "\330\261\330\247\330\250\330\267 \331\202\330\247\330\246\331\205\330\251 \330\247\331\204\331\203\330\252\330\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("Dialognet", "\331\207\330\260\330\247 \330\261\330\247\330\250\330\267 \331\204\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\331\203\330\252\330\250 \330\247\331\204\331\205\330\252\331\201\330\261\330\251 \331\212\331\205\331\203\331\206\331\203 \330\247\330\257\330\256\330\247\331\204 \330\261\330\247\330\250\330\267 \330\254\330\257\331\212\330\257 \331\201\331\212 \330\255\330\247\331\204 \330\255\330\265\331\204\331\203 \330\271\331\204\331\211 \330\261\330\247\330\250\330\267 \330\254\330\257\331\212\330\257 ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lineEdit->setText(QApplication::translate("Dialognet", "http://dl.dropbox.com/u/13013844/update_liste/bookslist.xml", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("Dialognet", "\330\252\330\255\330\257\331\212\330\253 \331\202\330\247\330\246\331\205\330\251 \330\247\331\204\331\203\330\252\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        toolButton->setWhatsThis(QApplication::translate("Dialognet", "\330\252\330\255\330\257\331\212\330\253 \331\202\330\247\330\246\331\205\330\251 \330\247\331\204\331\203\330\252\330\250 \330\247\331\206 \331\203\330\247\331\206 \331\207\331\206\330\247\331\203 \330\252\330\272\331\212\331\212\330\261 \331\201\331\212 \331\202\330\247\330\246\331\205\330\251 \330\247\331\204\331\203\330\252\330\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton->setText(QApplication::translate("Dialognet", "\330\252\330\255\330\257\331\212\330\253", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialognet", "\330\247\330\250\330\255\330\253 \330\271\331\206 \331\203\330\252\330\247\330\250", 0, QApplication::UnicodeUTF8));
        toolButtonExpande->setText(QApplication::translate("Dialognet", "...", 0, QApplication::UnicodeUTF8));
        toolButtonColapce->setText(QApplication::translate("Dialognet", "...", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Dialognet", "\330\247\331\204\331\205\330\244\331\204\331\201", 0, QApplication::UnicodeUTF8));
        lineEditUrl->setText(QApplication::translate("Dialognet", "\330\255\330\257\330\257 \331\203\330\252\330\247\330\250\330\247 \331\205\331\206 \330\247\331\204\331\202\330\247\330\246\331\205\330\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialognet: public Ui_Dialognet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNET_H
