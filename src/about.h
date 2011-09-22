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
#ifndef ABOUT_H
#define ABOUT_H
#include <QDialog>
#include <QtGui>
namespace Ui
{
    class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    About(QWidget *parent = 0);
    ~About();

private:
     Ui::About *ui;



QGraphicsScene* m_scene;


};
#endif // ABOUT_H
