/****************************************************************************
** Meta object code from reading C++ file 'okno.h'
**
** Created: Mon 23. Nov 17:22:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../okno.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'okno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Okno[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      14,    5,    5,    5, 0x08,
      50,    5,    5,    5, 0x08,
      79,    5,    5,    5, 0x08,
     118,    5,    5,    5, 0x08,
     152,    5,    5,    5, 0x08,
     186,    5,    5,    5, 0x08,
     233,  222,    5,    5, 0x08,
     267,  262,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Okno[] = {
    "Okno\0\0reset()\0on_actionOProgramie_triggered(bool)\0"
    "on_actionOQt_triggered(bool)\0"
    "on_actionOtworzZdjecie_triggered(bool)\0"
    "on_actionZmniejsz_triggered(bool)\0"
    "on_actionPowieksz_triggered(bool)\0"
    "on_actionOryginalny_triggered(bool)\0"
    "nerw,brzeg\0zmianaPunktow(double,double)\0"
    "stan\0gotowyDoEdycji(bool)\0"
};

const QMetaObject Okno::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Okno,
      qt_meta_data_Okno, 0 }
};

const QMetaObject *Okno::metaObject() const
{
    return &staticMetaObject;
}

void *Okno::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Okno))
        return static_cast<void*>(const_cast< Okno*>(this));
    if (!strcmp(_clname, "Ui::Okno"))
        return static_cast< Ui::Okno*>(const_cast< Okno*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Okno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reset(); break;
        case 1: on_actionOProgramie_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_actionOQt_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_actionOtworzZdjecie_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_actionZmniejsz_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_actionPowieksz_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_actionOryginalny_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: zmianaPunktow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: gotowyDoEdycji((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Okno::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
