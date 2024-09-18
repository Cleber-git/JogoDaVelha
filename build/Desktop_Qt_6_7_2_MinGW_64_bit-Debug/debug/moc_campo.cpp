/****************************************************************************
** Meta object code from reading C++ file 'campo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../campo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'campo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCampoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCampoENDCLASS = QtMocHelpers::stringData(
    "Campo",
    "sendChangedPlayer",
    "",
    "changeJogador",
    "on_clicked_btn_00",
    "on_clicked_btn_01",
    "on_clicked_btn_02",
    "on_clicked_btn_10",
    "on_clicked_btn_11",
    "on_clicked_btn_12",
    "on_clicked_btn_20",
    "on_clicked_btn_21",
    "on_clicked_btn_22"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCampoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   83,    2, 0x0a,    3 /* Public */,
       4,    0,   84,    2, 0x0a,    4 /* Public */,
       5,    0,   85,    2, 0x0a,    5 /* Public */,
       6,    0,   86,    2, 0x0a,    6 /* Public */,
       7,    0,   87,    2, 0x0a,    7 /* Public */,
       8,    0,   88,    2, 0x0a,    8 /* Public */,
       9,    0,   89,    2, 0x0a,    9 /* Public */,
      10,    0,   90,    2, 0x0a,   10 /* Public */,
      11,    0,   91,    2, 0x0a,   11 /* Public */,
      12,    0,   92,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Campo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCampoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCampoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCampoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Campo, std::true_type>,
        // method 'sendChangedPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeJogador'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_00'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_01'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_02'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_10'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_11'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_12'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_20'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_21'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clicked_btn_22'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Campo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Campo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendChangedPlayer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->changeJogador(); break;
        case 2: _t->on_clicked_btn_00(); break;
        case 3: _t->on_clicked_btn_01(); break;
        case 4: _t->on_clicked_btn_02(); break;
        case 5: _t->on_clicked_btn_10(); break;
        case 6: _t->on_clicked_btn_11(); break;
        case 7: _t->on_clicked_btn_12(); break;
        case 8: _t->on_clicked_btn_20(); break;
        case 9: _t->on_clicked_btn_21(); break;
        case 10: _t->on_clicked_btn_22(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Campo::*)(int );
            if (_t _q_method = &Campo::sendChangedPlayer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Campo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Campo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCampoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Campo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Campo::sendChangedPlayer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
