/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Thu Jun 28 22:44:25 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

    // content:
    5, // revision
    0, // classname
    0, 0, // classinfo
    7, 14, // methods
    0, 0, // properties
    0, 0, // enums/sets
    0, 0, // constructors
    0, // flags
    0, // signalCount

    // slots: signature, parameters, type, tag, flags
    13, 8, 7, 7, 0x08, 54, 8, 7, 7, 0x08, 92, 8, 7, 7, 0x08, 137, 7, 7, 7, 0x08,
    165, 7, 7, 7, 0x08, 194, 7, 7, 7, 0x08, 226, 7, 7, 7, 0x08,

    0 // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0arg1\0on_lineEditPathMain_textChanged(QString)\0"
    "on_lineEditBooks_textChanged(QString)\0"
    "on_lineEditPathBooksNew_textChanged(QString)\0"
    "on_toolButtonMain_clicked()\0"
    "on_toolButtonBooks_clicked()\0"
    "on_toolButtonBooksNew_clicked()\0"
    "on_buttonBox_accepted()\0"
};

const QMetaObject Dialog::staticMetaObject = { { &QDialog::staticMetaObject,
    qt_meta_stringdata_Dialog,
    qt_meta_data_Dialog, 0 } };

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject& Dialog::getStaticMetaObject()
{
    return staticMetaObject;
}
#endif // Q_NO_DATA_RELOCATION

const QMetaObject* Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject
                                      : &staticMetaObject;
}

void* Dialog::qt_metacast(const char* _clname)
{
    if (!_clname)
        return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast<Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void** _a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0:
            on_lineEditPathMain_textChanged(
                (*reinterpret_cast<const QString(*)>(_a[1])));
            break;
        case 1:
            on_lineEditBooks_textChanged(
                (*reinterpret_cast<const QString(*)>(_a[1])));
            break;
        case 2:
            on_lineEditPathBooksNew_textChanged(
                (*reinterpret_cast<const QString(*)>(_a[1])));
            break;
        case 3:
            on_toolButtonMain_clicked();
            break;
        case 4:
            on_toolButtonBooks_clicked();
            break;
        case 5:
            on_toolButtonBooksNew_clicked();
            break;
        case 6:
            on_buttonBox_accepted();
            break;
        default:;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
