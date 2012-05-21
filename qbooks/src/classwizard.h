/****************************************************************************
**

**
****************************************************************************/

#ifndef CLASSWIZARD_H
#define CLASSWIZARD_H
#include <QWizard>
#include "messages.h"
QT_BEGIN_NAMESPACE
class QCheckBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QRadioButton;
class QTreeWidget;
QT_END_NAMESPACE

//! [0]

class ClassWizard : public QWizard
{
    Q_OBJECT

public:
    ClassWizard(QWidget *parent = 0);

    enum { Page_Intro, Page_InfoPage, Page_TreeBook, Page_Details,
           Page_Conclusion };
    void accept();
    int nextId()const;
    QString urlTexte;

};
//! [0]

//! [1]
class IntroPage : public QWizardPage
{
    Q_OBJECT

public:
    IntroPage(QWidget *parent = 0);

private:
    QLabel *label;
};
//! [1]

//! [2]
class ClassInfoPage : public QWizardPage
{
    Q_OBJECT

public:
    ClassInfoPage(QWidget *parent = 0);

private:
    QLabel *labelUrlName;
    QLineEdit *lineEditUrlName;
    QGroupBox *groupBox;
    QRadioButton *radioButtonUrlBook;
    QRadioButton *radioButtonUrlFavorite;
    QRadioButton *radioButtonUrlWeb;
    QLineEdit *lineEditUrlWebName;
};
//! [2]

//! [3]
class PageTreeBook : public QWizardPage
{
    Q_OBJECT

public:
    PageTreeBook(QWidget *parent = 0);
    messages *Messages;
    QTreeWidget *treeViewBook;
private slots:
    void treeBookitemSelectionChanged();
private:
    QLineEdit *bookInfo;

};
//! [3]

class PageTreeFavorite : public QWizardPage
{
    Q_OBJECT

public:    
    PageTreeFavorite(QWidget *parent = 0);
    messages *Messages;
    QTreeWidget *treeViewFavorite;
    QString curentBook;
protected:
private slots:
    void treeFavoriteItemSelectionChanged();
private:
    QLineEdit  *FavoriteInfo;
};

class ConclusionPage : public QWizardPage
{
    Q_OBJECT

public:
    ConclusionPage(QWidget *parent = 0);

protected:
    void initializePage();

private:
    QLabel *label;
};

#endif
