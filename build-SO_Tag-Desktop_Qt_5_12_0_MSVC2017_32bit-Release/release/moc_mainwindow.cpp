/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SO_Tag/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "print_file"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "controller"
QT_MOC_LITERAL(4, 34, 11), // "set_default"
QT_MOC_LITERAL(5, 46, 32), // "on_actionSpecial_Order_triggered"
QT_MOC_LITERAL(6, 79, 30), // "on_actionStore_Order_triggered"
QT_MOC_LITERAL(7, 110, 31), // "on_stackedWidget_currentChanged"
QT_MOC_LITERAL(8, 142, 4), // "arg1"
QT_MOC_LITERAL(9, 147, 30), // "on_menuSpecial_Order_triggered"
QT_MOC_LITERAL(10, 178, 7), // "checked"
QT_MOC_LITERAL(11, 186, 28), // "on_menuStore_Order_triggered"
QT_MOC_LITERAL(12, 215, 35), // "on_actionSet_Store_Number_tri..."
QT_MOC_LITERAL(13, 251, 43), // "on_actionPO_Number_placeholde..."
QT_MOC_LITERAL(14, 295, 52) // "on_actionStore_Order_Number_P..."

    },
    "MainWindow\0print_file\0\0controller\0"
    "set_default\0on_actionSpecial_Order_triggered\0"
    "on_actionStore_Order_triggered\0"
    "on_stackedWidget_currentChanged\0arg1\0"
    "on_menuSpecial_Order_triggered\0checked\0"
    "on_menuStore_Order_triggered\0"
    "on_actionSet_Store_Number_triggered\0"
    "on_actionPO_Number_placeholder_text_toggled\0"
    "on_actionStore_Order_Number_Placeholder_Text_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print_file(); break;
        case 1: _t->controller(); break;
        case 2: _t->set_default(); break;
        case 3: _t->on_actionSpecial_Order_triggered(); break;
        case 4: _t->on_actionStore_Order_triggered(); break;
        case 5: _t->on_stackedWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_menuSpecial_Order_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_menuStore_Order_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_actionSet_Store_Number_triggered(); break;
        case 9: _t->on_actionPO_Number_placeholder_text_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_actionStore_Order_Number_Placeholder_Text_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
