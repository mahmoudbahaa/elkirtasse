/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Wed Nov 16 20:35:48 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      36,    7,    7,    7, 0x08,
      74,   67,    7,    7, 0x08,
     113,    7,    7,    7, 0x08,
     148,    7,    7,    7, 0x08,
     186,  180,    7,    7, 0x08,
     234,    7,  229,    7, 0x08,
     260,  246,  229,    7, 0x08,
     286,  281,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0on_toolButtonInfo_clicked()\0"
    "on_toolButton_delete_clicked()\0button\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
    "on_toolButton_zipFileNam_clicked()\0"
    "on_toolButton_fileNam_clicked()\0index\0"
    "on_comboBox_group_currentIndexChanged(int)\0"
    "bool\0creat_dir()\0filname,items\0"
    "copyDir(QString,int)\0path\0"
    "loadBookInfo(QString)\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_toolButtonInfo_clicked(); break;
        case 1: on_toolButton_delete_clicked(); break;
        case 2: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: on_toolButton_zipFileNam_clicked(); break;
        case 4: on_toolButton_fileNam_clicked(); break;
        case 5: on_comboBox_group_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { bool _r = creat_dir();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = copyDir((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: loadBookInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
