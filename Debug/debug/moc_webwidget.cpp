/****************************************************************************
** Meta object code from reading C++ file 'webwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../header/webwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebWidget_t {
    QByteArrayData data[13];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebWidget_t qt_meta_stringdata_WebWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WebWidget"
QT_MOC_LITERAL(1, 10, 7), // "sendMsg"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 31, 4), // "data"
QT_MOC_LITERAL(5, 36, 14), // "closeWebwidget"
QT_MOC_LITERAL(6, 51, 6), // "goSlot"
QT_MOC_LITERAL(7, 58, 8), // "backSlot"
QT_MOC_LITERAL(8, 67, 8), // "pickSlot"
QT_MOC_LITERAL(9, 76, 8), // "downSlot"
QT_MOC_LITERAL(10, 85, 21), // "finishedThreadBtnSlot"
QT_MOC_LITERAL(11, 107, 10), // "recevie_ok"
QT_MOC_LITERAL(12, 118, 5) // "image"

    },
    "WebWidget\0sendMsg\0\0QByteArray&\0data\0"
    "closeWebwidget\0goSlot\0backSlot\0pickSlot\0"
    "downSlot\0finishedThreadBtnSlot\0"
    "recevie_ok\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   12,

       0        // eod
};

void WebWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMsg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->closeWebwidget(); break;
        case 2: _t->goSlot(); break;
        case 3: _t->backSlot(); break;
        case 4: _t->pickSlot(); break;
        case 5: _t->downSlot(); break;
        case 6: _t->finishedThreadBtnSlot(); break;
        case 7: _t->recevie_ok((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebWidget::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebWidget::sendMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebWidget::closeWebwidget)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_WebWidget.data,
    qt_meta_data_WebWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WebWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WebWidget::sendMsg(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebWidget::closeWebwidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
