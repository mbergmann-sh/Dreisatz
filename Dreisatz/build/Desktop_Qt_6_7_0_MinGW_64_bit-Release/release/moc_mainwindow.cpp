/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "closeEvent",
    "",
    "QCloseEvent*",
    "event",
    "resetDefaults",
    "decideSolution",
    "on_btnSolution_clicked",
    "on_btnCalc_clicked",
    "on_actionNeue_Berechnung_triggered",
    "on_actionBerechnen_triggered",
    "on_actionSolution_triggered",
    "on_actionProgramm_beenden_triggered",
    "on_actionDreisatz_triggered",
    "on_action_About_triggered",
    "on_action_AboutQt_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       5,    0,   89,    2, 0x08,    3 /* Private */,
       6,    0,   90,    2, 0x08,    4 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    0,   92,    2, 0x08,    6 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    0,   94,    2, 0x08,    8 /* Private */,
      11,    0,   95,    2, 0x08,    9 /* Private */,
      12,    0,   96,    2, 0x08,   10 /* Private */,
      13,    0,   97,    2, 0x08,   11 /* Private */,
      14,    0,   98,    2, 0x08,   12 /* Private */,
      15,    0,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Int,
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'resetDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decideSolution'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnSolution_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCalc_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNeue_Berechnung_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBerechnen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSolution_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProgramm_beenden_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDreisatz_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_About_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_AboutQt_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 1: _t->resetDefaults(); break;
        case 2: { int _r = _t->decideSolution();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_btnSolution_clicked(); break;
        case 4: _t->on_btnCalc_clicked(); break;
        case 5: _t->on_actionNeue_Berechnung_triggered(); break;
        case 6: _t->on_actionBerechnen_triggered(); break;
        case 7: _t->on_actionSolution_triggered(); break;
        case 8: _t->on_actionProgramm_beenden_triggered(); break;
        case 9: _t->on_actionDreisatz_triggered(); break;
        case 10: _t->on_action_About_triggered(); break;
        case 11: _t->on_action_AboutQt_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
