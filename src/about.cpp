/****************************************************************************
**
** Copyright AbouZakaria.
** All rights reserved.
** Contact: AbouZakaria (yahia67@live.com)
**
** $elkirtasse_BEGIN_LICENSE:GPL$
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** AbouZakaria (yahia67@live.com)
** $elkirtasse_END_LICENSE$
**
****************************************************************************/
#include "about.h"
#include  "ui_about.h"
#include <QtGui>
About::About(QWidget *parent)
    : QDialog(parent), ui(new Ui::About)
{
    ui->setupUi(this);
    QGraphicsWidget *  panelParent = new QGraphicsWidget;
    QGraphicsPixmapItem* lab=new QGraphicsPixmapItem(panelParent);
   // QGraphicsPixmapItem* labreflet=new QGraphicsPixmapItem(panelParent);
    m_scene=new QGraphicsScene();
    //setText(trUtf8("القرطاس"),m_scene);
    lab->setPixmap(QPixmap(QString::fromUtf8(":/images/image/groupbook.png")));
   // labreflet->setPixmap(QPixmap(QString::fromUtf8(":/images/image/groupbook2.png")));
#if QT_VERSION >= 0x040600

    QGraphicsDropShadowEffect *efet=new QGraphicsDropShadowEffect;
    efet->setOffset(4,3);
    efet->setColor(QColor(63, 63, 63, 80));
    lab->setGraphicsEffect(efet);

//    QLinearGradient alphaGradient(0, 0,0,128);
//    //  alphaGradient.setColorAt(0.0, Qt::transparent);
 //   alphaGradient.setColorAt(0.0, QColor(63, 63, 63, 30));
//    alphaGradient.setColorAt(0.2, QColor(63, 63, 63, 40));
//    alphaGradient.setColorAt(1.0, Qt::transparent);
//    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect;
//    effect->setOpacityMask(alphaGradient);
//    labreflet->setGraphicsEffect(effect);

    //labreflet->setTransform(QTransform().rotate(180).translate(-120, -120));

    QPropertyAnimation * anim = new QPropertyAnimation(panelParent, "pos");
    //  lab->setAlignment(Qt::AlignRight);
    anim->setEasingCurve(QEasingCurve::CosineCurve);
    //startAnimation();
    anim->setStartValue(QPointF(0, 0));
    anim->setEndValue(QPointF(0, ui->graphicsView->height()));
    anim->setDuration(1000);
    anim->setLoopCount(-1); // forever
  anim->start();


 #endif
    lab->setPos(0,0);
    //labreflet->setPos(0,128);

    m_scene->addItem(panelParent);

    //   m_scene->setBackgroundBrush(m_scene->palette().window());

    ui->graphicsView->setScene(m_scene);
}
About::~About()
{

//m_anim->stop();
}

