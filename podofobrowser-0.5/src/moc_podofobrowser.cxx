/****************************************************************************
** Meta object code from reading C++ file 'podofobrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podofobrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podofobrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PoDoFoBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      25,   14,   14,   14, 0x08,
      45,   36,   14,   14, 0x08,
      68,   14,   63,   14, 0x08,
      79,   36,   63,   14, 0x08,
      97,   14,   63,   14, 0x08,
     110,   14,   14,   14, 0x08,
     123,   14,   14,   14, 0x08,
     134,   14,   14,   14, 0x08,
     147,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,
     210,  193,   14,   14, 0x08,
     256,   14,   14,   14, 0x08,
     275,   14,   14,   14, 0x08,
     294,   14,   14,   14, 0x08,
     306,   14,   14,   14, 0x08,
     325,   14,   14,   14, 0x08,
     343,   14,   14,   14, 0x08,
     359,   14,   14,   14, 0x08,
     382,   14,   14,   14, 0x08,
     399,   14,   14,   14, 0x08,
     421,   14,   14,   14, 0x08,
     432,   14,   14,   14, 0x08,
     447,   14,   14,   14, 0x08,
     466,   14,   14,   14, 0x08,
     480,   14,   14,   14, 0x08,
     497,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PoDoFoBrowser[] = {
    "PoDoFoBrowser\0\0fileNew()\0fileOpen()\0"
    "filename\0fileOpen(QString)\0bool\0"
    "fileSave()\0fileSave(QString)\0fileSaveAs()\0"
    "fileReload()\0fileExit()\0toolsToHex()\0"
    "toolsFromHex()\0toolsDisplayCodeForSelection()\0"
    "current,previous\0"
    "treeSelectionChanged(QModelIndex,QModelIndex)\0"
    "slotImportStream()\0slotExportStream()\0"
    "helpAbout()\0editInsertBefore()\0"
    "editInsertAfter()\0editInsertKey()\0"
    "editInsertChildBelow()\0editRemoveItem()\0"
    "editCreateNewObject()\0editFind()\0"
    "editFindNext()\0editFindPrevious()\0"
    "editReplace()\0editGotoObject()\0"
    "viewRefreshView()\0"
};

void PoDoFoBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PoDoFoBrowser *_t = static_cast<PoDoFoBrowser *>(_o);
        switch (_id) {
        case 0: _t->fileNew(); break;
        case 1: _t->fileOpen(); break;
        case 2: _t->fileOpen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->fileSave((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->fileReload(); break;
        case 7: _t->fileExit(); break;
        case 8: _t->toolsToHex(); break;
        case 9: _t->toolsFromHex(); break;
        case 10: _t->toolsDisplayCodeForSelection(); break;
        case 11: _t->treeSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: _t->slotImportStream(); break;
        case 13: _t->slotExportStream(); break;
        case 14: _t->helpAbout(); break;
        case 15: _t->editInsertBefore(); break;
        case 16: _t->editInsertAfter(); break;
        case 17: _t->editInsertKey(); break;
        case 18: _t->editInsertChildBelow(); break;
        case 19: _t->editRemoveItem(); break;
        case 20: _t->editCreateNewObject(); break;
        case 21: _t->editFind(); break;
        case 22: _t->editFindNext(); break;
        case 23: _t->editFindPrevious(); break;
        case 24: _t->editReplace(); break;
        case 25: _t->editGotoObject(); break;
        case 26: _t->viewRefreshView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PoDoFoBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PoDoFoBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PoDoFoBrowser,
      qt_meta_data_PoDoFoBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PoDoFoBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PoDoFoBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PoDoFoBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PoDoFoBrowser))
        return static_cast<void*>(const_cast< PoDoFoBrowser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PoDoFoBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
