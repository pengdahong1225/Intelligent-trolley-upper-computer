/****************************************************************************
** Meta object code from reading C++ file 'sock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sock_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sock_t qt_meta_stringdata_Sock = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Sock"
QT_MOC_LITERAL(1, 5, 10), // "NewConnect"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "receiveOK"
QT_MOC_LITERAL(4, 27, 9), // "sock_disc"
QT_MOC_LITERAL(5, 37, 18), // "incomingConnection"
QT_MOC_LITERAL(6, 56, 7), // "qintptr"
QT_MOC_LITERAL(7, 64, 14) // "receiveMessage"

    },
    "Sock\0NewConnect\0\0receiveOK\0sock_disc\0"
    "incomingConnection\0qintptr\0receiveMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void Sock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewConnect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 1: _t->receiveOK((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sock_disc(); break;
        case 3: _t->incomingConnection((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 4: _t->receiveMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sock::*)(QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sock::NewConnect)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Sock::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sock::receiveOK)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Sock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sock::sock_disc)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sock::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_Sock.data,
    qt_meta_data_Sock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sock.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int Sock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Sock::NewConnect(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sock::receiveOK(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Sock::sock_disc()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
