/****************************************************************************
** Meta object code from reading C++ file 'cdromshamila.h'
**
** Created: Wed Nov 16 20:36:28 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cdromshamila.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdromshamila.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cdromShamila[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   13,   14,   13, 0x0a,
      40,   13,   35,   13, 0x08,
      60,   57,   35,   13, 0x08,
      83,   13,   35,   13, 0x08,
     100,   13,   35,   13, 0x08,
     117,   57,   35,   13, 0x08,
     142,  139,   35,   13, 0x08,
     200,  161,   35,   13, 0x08,
     264,  252,   35,   13, 0x08,
     331,  302,   35,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cdromShamila[] = {
    "cdromShamila\0\0QString\0execPlugin()\0"
    "bool\0creatShamellaX()\0fn\0"
    "creatBashMain(QString)\0creatCatigorie()\0"
    "creatBooksInfo()\0creatBashMdb(QString)\0"
    "id\0creatBook(QString)\0"
    "bkpath,bktitle,bkauth,bkbetaka,groupid\0"
    "addNewBook(QString,QString,QString,QString,QString)\0"
    "f,table,csv\0creatXmlFile(QString,QString,QString)\0"
    "bookname,title,author,betaka\0"
    "saveBookInfo(QString,QString,QString,QString)\0"
};

const QMetaObject cdromShamila::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cdromShamila,
      qt_meta_data_cdromShamila, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cdromShamila::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cdromShamila::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cdromShamila::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cdromShamila))
        return static_cast<void*>(const_cast< cdromShamila*>(this));
    if (!strcmp(_clname, "ShamilaInterface"))
        return static_cast< ShamilaInterface*>(const_cast< cdromShamila*>(this));
    if (!strcmp(_clname, "com.trolltech.Plugin.ShamilaInterface/1.0"))
        return static_cast< ShamilaInterface*>(const_cast< cdromShamila*>(this));
    return QObject::qt_metacast(_clname);
}

int cdromShamila::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = execPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { bool _r = creatShamellaX();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = creatBashMain((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = creatCatigorie();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = creatBooksInfo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = creatBashMdb((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = creatBook((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = addNewBook((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = creatXmlFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = saveBookInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
