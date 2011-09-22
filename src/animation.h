#ifndef ANIMATION_H
#define ANIMATION_H



#include <QtGui>
#include <QObject>

class Pixmap : public QGraphicsWidget
{
    Q_OBJECT

public:
    Pixmap(const QPixmap &pix, QGraphicsItem *parent = 0)
        : QGraphicsWidget(parent), orig(pix), p(pix)
    {

        setCacheMode(DeviceCoordinateCache);
        setAcceptHoverEvents(true);
    }


    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
    {
        painter->drawPixmap(QPointF(), p);
    }

    virtual void setGeometry(const QRectF &rect)
    {
        QGraphicsWidget::setGeometry(rect);

        if (rect.size().width() > orig.size().width())
            p = orig.scaled(rect.size().toSize());
        else
            p = orig;
    }
signals:
    void pressed();
    void release();
    void enter();
    void leave();


protected:

    void mousePressEvent(QGraphicsSceneMouseEvent *)
    {
        emit pressed();
        update();
    }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *)
    {
        emit release();
        update();
    }
    void hoverEnterEvent(  QGraphicsSceneHoverEvent *)
    {

        emit enter();
        update();

    }
    void hoverLeaveEvent ( QGraphicsSceneHoverEvent  *)
    {
        emit leave();
        update();
    }
private:
    QPixmap orig;
    QPixmap p;

};
class View : public QGraphicsView
{
    Q_OBJECT
public:
    View( QWidget *parent) : QGraphicsView(parent) { }
    View();
    ~View();
    QTreeWidget *treeView;
    void chargePixmap();
    QLineEdit *lineEdit;
    QLabel *label;
    bool threeD;
   // QComboBox *comboBox;
    int recentNbr;
    enum { MaxRecentFiles = 15 };
    QAction *recentFileActs[MaxRecentFiles];
protected:
    void resizeEvent(QResizeEvent *event)
    {
        //        if (threeD==true){
        //            QGraphicsView::resizeEvent(event);
        //            fitInView(sceneRect(), Qt::KeepAspectRatio);
        //        }else{
        //            QGraphicsView::resizeEvent(event);
        //            fitInView(sceneRect(), Qt::IgnoreAspectRatio);
        //        }
        QGraphicsView::resizeEvent(event);
        setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
    }
void keyPressEvent(QKeyEvent *event);
void keyReleaseEvent(QKeyEvent *event);
private:
    QGraphicsScene *mscene;
    #if QT_VERSION >= 0x040600
    QEasingCurve::Type curveType;
#endif
    int itemCurant;
    QList<Pixmap *> items;
    QTimer  *m_timer ;
    bool m_right;
    bool isBook;
     bool isThreeD;
public slots:
    void chargeLevelOne();
    void chargeRecent();
    void chargeEnrto();
private slots:
    void animChargePixmape(int level,int index,int indexParent);
    void ThreeDChargePixmape(int level,int index,int indexParent);
    void animTeled();
    void animChargeLevelTow();
    void animItemOpenBook();
    void moveThreeDright();
    void moveThreeDleft();
    void moveThreeD(bool right);
    void animEnterItem();
    void animLeaveItem();
    void ThreeDItemOpenBook();
    void threedChargeLevelTow();
    void time_run();
    void stop_time();
    void chargeNavigator();
    void chargeMaskItem();
    void comboItemOpenBook();
    void ThreeDcomboItemOpenBook();
    void animEtoile(QRect rect);
       void animEtoileTitle();
        void animEtoileBook();
};

#endif // ANIMATION_H
