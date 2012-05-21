/****************************************************************************
** Meta object code from reading C++ file 'mdbexport.h'
**
** Created: Wed Nov 16 20:36:02 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mdbexport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mdbexport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mdbexport[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      41,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,
      97,   87,   82,   10, 0x08,
     115,   87,   82,   10, 0x08,
     154,  142,   82,   10, 0x08,
     200,  192,   82,   10, 0x08,
     228,  219,   82,   10, 0x08,
     263,   10,  255,   10, 0x08,
     284,  278,   10,   10, 0x08,
     328,  321,   10,   10, 0x08,
     367,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mdbexport[] = {
    "mdbexport\0\0on_toolButton_delet_clicked()\0"
    "on_toolButtonInfo_clicked()\0criatBooks()\0"
    "bool\0mdbSource\0readMain(QString)\0"
    "creatmdbTempFiles(QString)\0f,table,csv\0"
    "creatXmlFile(QString,QString,QString)\0"
    "bookdir\0creatInfo(QString)\0fn,asbok\0"
    "creatBash(QString,QString)\0QString\0"
    "creatBooKDir()\0index\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "button\0on_buttonBox_clicked(QAbstractButton*)\0"
    "on_toolButton_fileNam_clicked()\0"
};

const QMetaObject mdbexport::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mdbexport,
      qt_meta_data_mdbexport, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mdbexport::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mdbexport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mdbexport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mdbexport))
        return static_cast<void*>(const_cast< mdbexport*>(this));
    return QDialog::qt_metacast(_clname);
}

int mdbexport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_toolButton_delet_clicked(); break;
        case 1: on_toolButtonInfo_clicked(); break;
        case 2: criatBooks(); break;
        case 3: { bool _r = readMain((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = creatmdbTempFiles((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = creatXmlFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = creatInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = creatBash((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QString _r = creatBooKDir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: on_toolButton_fileNam_clicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
