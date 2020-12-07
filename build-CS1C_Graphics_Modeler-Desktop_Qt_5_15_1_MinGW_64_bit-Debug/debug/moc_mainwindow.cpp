/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CS1C_Graphics_Modeler/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[468];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_LoginButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_LogoutButton_clicked"
QT_MOC_LITERAL(4, 59, 27), // "on_LoginButtonGuest_clicked"
QT_MOC_LITERAL(5, 87, 11), // "colorChange"
QT_MOC_LITERAL(6, 99, 25), // "on_AddShapeButton_clicked"
QT_MOC_LITERAL(7, 125, 26), // "on_EditShapeButton_clicked"
QT_MOC_LITERAL(8, 152, 29), // "on_TestimonialsButton_clicked"
QT_MOC_LITERAL(9, 182, 23), // "on_BackToCanvas_clicked"
QT_MOC_LITERAL(10, 206, 25), // "on_AddTestimonial_clicked"
QT_MOC_LITERAL(11, 232, 27), // "on_PastTestimonials_clicked"
QT_MOC_LITERAL(12, 260, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 282, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(14, 304, 30), // "on_ContactUsBackButton_clicked"
QT_MOC_LITERAL(15, 335, 26), // "on_ContactUsButton_clicked"
QT_MOC_LITERAL(16, 362, 28), // "on_ReportsBackButton_clicked"
QT_MOC_LITERAL(17, 391, 41), // "on_ReportsSortByEntry_current..."
QT_MOC_LITERAL(18, 433, 5), // "index"
QT_MOC_LITERAL(19, 439, 28) // "on_DeleteShapeButton_clicked"

    },
    "MainWindow\0on_LoginButton_clicked\0\0"
    "on_LogoutButton_clicked\0"
    "on_LoginButtonGuest_clicked\0colorChange\0"
    "on_AddShapeButton_clicked\0"
    "on_EditShapeButton_clicked\0"
    "on_TestimonialsButton_clicked\0"
    "on_BackToCanvas_clicked\0"
    "on_AddTestimonial_clicked\0"
    "on_PastTestimonials_clicked\0"
    "on_pushButton_clicked\0on_backButton_clicked\0"
    "on_ContactUsBackButton_clicked\0"
    "on_ContactUsButton_clicked\0"
    "on_ReportsBackButton_clicked\0"
    "on_ReportsSortByEntry_currentIndexChanged\0"
    "index\0on_DeleteShapeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LoginButton_clicked(); break;
        case 1: _t->on_LogoutButton_clicked(); break;
        case 2: _t->on_LoginButtonGuest_clicked(); break;
        case 3: _t->colorChange(); break;
        case 4: _t->on_AddShapeButton_clicked(); break;
        case 5: _t->on_EditShapeButton_clicked(); break;
        case 6: _t->on_TestimonialsButton_clicked(); break;
        case 7: _t->on_BackToCanvas_clicked(); break;
        case 8: _t->on_AddTestimonial_clicked(); break;
        case 9: _t->on_PastTestimonials_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_backButton_clicked(); break;
        case 12: _t->on_ContactUsBackButton_clicked(); break;
        case 13: _t->on_ContactUsButton_clicked(); break;
        case 14: _t->on_ReportsBackButton_clicked(); break;
        case 15: _t->on_ReportsSortByEntry_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_DeleteShapeButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
