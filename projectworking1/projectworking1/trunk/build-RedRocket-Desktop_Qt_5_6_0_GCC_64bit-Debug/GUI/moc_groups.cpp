/****************************************************************************
** Meta object code from reading C++ file 'groups.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RedRocket/GUI/groups.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groups.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Groups_t {
    QByteArrayData data[8];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Groups_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Groups_t qt_meta_stringdata_Groups = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Groups"
QT_MOC_LITERAL(1, 7, 30), // "on_pushButton_username_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 28), // "on_pushButton_groups_clicked"
QT_MOC_LITERAL(4, 68, 30), // "on_pushButton_messages_clicked"
QT_MOC_LITERAL(5, 99, 30), // "on_pushButton_settings_clicked"
QT_MOC_LITERAL(6, 130, 30), // "on_pushButton_mainfeed_clicked"
QT_MOC_LITERAL(7, 161, 31) // "on_pushButton_startchat_clicked"

    },
    "Groups\0on_pushButton_username_clicked\0"
    "\0on_pushButton_groups_clicked\0"
    "on_pushButton_messages_clicked\0"
    "on_pushButton_settings_clicked\0"
    "on_pushButton_mainfeed_clicked\0"
    "on_pushButton_startchat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Groups[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Groups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Groups *_t = static_cast<Groups *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_username_clicked(); break;
        case 1: _t->on_pushButton_groups_clicked(); break;
        case 2: _t->on_pushButton_messages_clicked(); break;
        case 3: _t->on_pushButton_settings_clicked(); break;
        case 4: _t->on_pushButton_mainfeed_clicked(); break;
        case 5: _t->on_pushButton_startchat_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Groups::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Groups.data,
      qt_meta_data_Groups,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Groups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Groups::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Groups.stringdata0))
        return static_cast<void*>(const_cast< Groups*>(this));
    return QWidget::qt_metacast(_clname);
}

int Groups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
