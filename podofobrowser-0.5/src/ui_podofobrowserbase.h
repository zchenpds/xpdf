/********************************************************************************
** Form generated from reading UI file 'podofobrowserbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODOFOBROWSERBASE_H
#define UI_PODOFOBROWSERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PoDoFoBrowserBase
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *fileExitAction;
    QAction *helpAboutAction;
    QAction *toolsToHexAction;
    QAction *toolsFromHexAction;
    QAction *editCutAction;
    QAction *editnew_itemAction;
    QAction *editPasteAction;
    QAction *actionInsert_Before;
    QAction *actionInsert_After;
    QAction *actionInsert_Child;
    QAction *actionRemove_Item;
    QAction *actionCreateNewObject;
    QAction *actionInsert_Key;
    QAction *fileReloadAction;
    QAction *actionRefreshView;
    QAction *actionDisplay_Selected_Object;
    QAction *actionToolsDisplayCodeForSelection;
    QAction *actionCatalogView;
    QAction *actionFind;
    QAction *actionFindNext;
    QAction *actionFindPrevious;
    QAction *actionReplace;
    QAction *actionGotoObject;
    QWidget *widget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QTreeView *listObjects;
    QSplitter *splitter3;
    QSplitter *splitter2;
    QWidget *layout3;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel1;
    QLabel *labelStream;
    QTextEdit *textStream;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonImport;
    QPushButton *buttonExport;
    QSpacerItem *spacerItem;
    QToolBar *toolBar;
    QMenuBar *MenuBar;
    QMenu *helpMenu;
    QMenu *fileMenu;
    QMenu *menuView;
    QMenu *Tools;
    QMenu *Edit;

    void setupUi(QMainWindow *PoDoFoBrowserBase)
    {
        if (PoDoFoBrowserBase->objectName().isEmpty())
            PoDoFoBrowserBase->setObjectName(QString::fromUtf8("PoDoFoBrowserBase"));
        PoDoFoBrowserBase->resize(758, 629);
        fileNewAction = new QAction(PoDoFoBrowserBase);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/filenew.png"));
        fileNewAction->setIcon(icon);
        fileOpenAction = new QAction(PoDoFoBrowserBase);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/fileopen.png"));
        fileOpenAction->setIcon(icon1);
        fileSaveAction = new QAction(PoDoFoBrowserBase);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        fileSaveAction->setEnabled(false);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/filesave.png"));
        fileSaveAction->setIcon(icon2);
        fileSaveAsAction = new QAction(PoDoFoBrowserBase);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        fileSaveAsAction->setEnabled(false);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/filesaveas.png"));
        fileSaveAsAction->setIcon(icon3);
        fileExitAction = new QAction(PoDoFoBrowserBase);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        helpAboutAction = new QAction(PoDoFoBrowserBase);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        toolsToHexAction = new QAction(PoDoFoBrowserBase);
        toolsToHexAction->setObjectName(QString::fromUtf8("toolsToHexAction"));
        toolsFromHexAction = new QAction(PoDoFoBrowserBase);
        toolsFromHexAction->setObjectName(QString::fromUtf8("toolsFromHexAction"));
        editCutAction = new QAction(PoDoFoBrowserBase);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        editCutAction->setEnabled(false);
        editnew_itemAction = new QAction(PoDoFoBrowserBase);
        editnew_itemAction->setObjectName(QString::fromUtf8("editnew_itemAction"));
        editnew_itemAction->setEnabled(false);
        editPasteAction = new QAction(PoDoFoBrowserBase);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        editPasteAction->setEnabled(false);
        actionInsert_Before = new QAction(PoDoFoBrowserBase);
        actionInsert_Before->setObjectName(QString::fromUtf8("actionInsert_Before"));
        actionInsert_Before->setEnabled(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/insert_elem_above.png"));
        actionInsert_Before->setIcon(icon4);
        actionInsert_After = new QAction(PoDoFoBrowserBase);
        actionInsert_After->setObjectName(QString::fromUtf8("actionInsert_After"));
        actionInsert_After->setEnabled(false);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/insert_elem_below.png"));
        actionInsert_After->setIcon(icon5);
        actionInsert_Child = new QAction(PoDoFoBrowserBase);
        actionInsert_Child->setObjectName(QString::fromUtf8("actionInsert_Child"));
        actionInsert_Child->setEnabled(false);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/icons/insert_child.png"));
        actionInsert_Child->setIcon(icon6);
        actionRemove_Item = new QAction(PoDoFoBrowserBase);
        actionRemove_Item->setObjectName(QString::fromUtf8("actionRemove_Item"));
        actionRemove_Item->setEnabled(false);
        const QIcon icon7 = QIcon(QString::fromUtf8(":/icons/deleteitem.png"));
        actionRemove_Item->setIcon(icon7);
        actionCreateNewObject = new QAction(PoDoFoBrowserBase);
        actionCreateNewObject->setObjectName(QString::fromUtf8("actionCreateNewObject"));
        actionCreateNewObject->setEnabled(false);
        const QIcon icon8 = QIcon(QString::fromUtf8(":/icons/fix_dangling_reference.png"));
        actionCreateNewObject->setIcon(icon8);
        actionInsert_Key = new QAction(PoDoFoBrowserBase);
        actionInsert_Key->setObjectName(QString::fromUtf8("actionInsert_Key"));
        actionInsert_Key->setEnabled(false);
        const QIcon icon9 = QIcon(QString::fromUtf8(":/icons/insert_key.png"));
        actionInsert_Key->setIcon(icon9);
        fileReloadAction = new QAction(PoDoFoBrowserBase);
        fileReloadAction->setObjectName(QString::fromUtf8("fileReloadAction"));
        const QIcon icon10 = QIcon(QString::fromUtf8(":/icons/reload.png"));
        fileReloadAction->setIcon(icon10);
        actionRefreshView = new QAction(PoDoFoBrowserBase);
        actionRefreshView->setObjectName(QString::fromUtf8("actionRefreshView"));
        actionDisplay_Selected_Object = new QAction(PoDoFoBrowserBase);
        actionDisplay_Selected_Object->setObjectName(QString::fromUtf8("actionDisplay_Selected_Object"));
        actionToolsDisplayCodeForSelection = new QAction(PoDoFoBrowserBase);
        actionToolsDisplayCodeForSelection->setObjectName(QString::fromUtf8("actionToolsDisplayCodeForSelection"));
        actionCatalogView = new QAction(PoDoFoBrowserBase);
        actionCatalogView->setObjectName(QString::fromUtf8("actionCatalogView"));
        actionCatalogView->setCheckable(true);
        actionCatalogView->setChecked(true);
        actionCatalogView->setEnabled(false);
        actionFind = new QAction(PoDoFoBrowserBase);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionFindNext = new QAction(PoDoFoBrowserBase);
        actionFindNext->setObjectName(QString::fromUtf8("actionFindNext"));
        actionFindPrevious = new QAction(PoDoFoBrowserBase);
        actionFindPrevious->setObjectName(QString::fromUtf8("actionFindPrevious"));
        actionReplace = new QAction(PoDoFoBrowserBase);
        actionReplace->setObjectName(QString::fromUtf8("actionReplace"));
        actionGotoObject = new QAction(PoDoFoBrowserBase);
        actionGotoObject->setObjectName(QString::fromUtf8("actionGotoObject"));
        widget = new QWidget(PoDoFoBrowserBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        listObjects = new QTreeView(splitter);
        listObjects->setObjectName(QString::fromUtf8("listObjects"));
        listObjects->setMouseTracking(false);
        listObjects->setAlternatingRowColors(true);
        listObjects->setIndentation(15);
        listObjects->setRootIsDecorated(true);
        splitter->addWidget(listObjects);
        splitter3 = new QSplitter(splitter);
        splitter3->setObjectName(QString::fromUtf8("splitter3"));
        splitter3->setOrientation(Qt::Horizontal);
        splitter2 = new QSplitter(splitter3);
        splitter2->setObjectName(QString::fromUtf8("splitter2"));
        splitter2->setOrientation(Qt::Vertical);
        layout3 = new QWidget(splitter2);
        layout3->setObjectName(QString::fromUtf8("layout3"));
        vboxLayout1 = new QVBoxLayout(layout3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(layout3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        vboxLayout1->addWidget(textLabel1);

        labelStream = new QLabel(layout3);
        labelStream->setObjectName(QString::fromUtf8("labelStream"));
        labelStream->setWordWrap(false);

        vboxLayout1->addWidget(labelStream);

        textStream = new QTextEdit(layout3);
        textStream->setObjectName(QString::fromUtf8("textStream"));
        textStream->setUndoRedoEnabled(false);
        textStream->setReadOnly(false);
        textStream->setAcceptRichText(false);

        vboxLayout1->addWidget(textStream);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonImport = new QPushButton(layout3);
        buttonImport->setObjectName(QString::fromUtf8("buttonImport"));
        buttonImport->setEnabled(false);

        hboxLayout->addWidget(buttonImport);

        buttonExport = new QPushButton(layout3);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));
        buttonExport->setEnabled(false);

        hboxLayout->addWidget(buttonExport);

        spacerItem = new QSpacerItem(241, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        splitter2->addWidget(layout3);
        splitter3->addWidget(splitter2);
        splitter->addWidget(splitter3);

        vboxLayout->addWidget(splitter);

        PoDoFoBrowserBase->setCentralWidget(widget);
        toolBar = new QToolBar(PoDoFoBrowserBase);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        PoDoFoBrowserBase->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBar);
        MenuBar = new QMenuBar(PoDoFoBrowserBase);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 758, 22));
        helpMenu = new QMenu(MenuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        fileMenu = new QMenu(MenuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menuView = new QMenu(MenuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        Tools = new QMenu(MenuBar);
        Tools->setObjectName(QString::fromUtf8("Tools"));
        Edit = new QMenu(MenuBar);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        PoDoFoBrowserBase->setMenuBar(MenuBar);

        toolBar->addAction(fileNewAction);
        toolBar->addAction(fileOpenAction);
        toolBar->addAction(fileSaveAction);
        toolBar->addAction(fileReloadAction);
        toolBar->addSeparator();
        toolBar->addAction(actionInsert_Before);
        toolBar->addAction(actionInsert_After);
        toolBar->addAction(actionInsert_Key);
        toolBar->addAction(actionInsert_Child);
        toolBar->addAction(actionCreateNewObject);
        toolBar->addAction(actionRemove_Item);
        toolBar->addSeparator();
        toolBar->addAction(actionCatalogView);
        MenuBar->addAction(fileMenu->menuAction());
        MenuBar->addAction(Edit->menuAction());
        MenuBar->addAction(Tools->menuAction());
        MenuBar->addAction(menuView->menuAction());
        MenuBar->addAction(helpMenu->menuAction());
        helpMenu->addAction(helpAboutAction);
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addAction(fileReloadAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        menuView->addAction(actionRefreshView);
        menuView->addAction(actionCatalogView);
        Tools->addAction(toolsToHexAction);
        Tools->addAction(toolsFromHexAction);
        Tools->addAction(actionToolsDisplayCodeForSelection);
        Edit->addAction(editCutAction);
        Edit->addAction(editnew_itemAction);
        Edit->addAction(editPasteAction);
        Edit->addSeparator();
        Edit->addAction(actionInsert_Before);
        Edit->addAction(actionInsert_After);
        Edit->addAction(actionInsert_Key);
        Edit->addAction(actionInsert_Child);
        Edit->addSeparator();
        Edit->addAction(actionCreateNewObject);
        Edit->addSeparator();
        Edit->addAction(actionRemove_Item);
        Edit->addSeparator();
        Edit->addAction(actionFind);
        Edit->addAction(actionFindNext);
        Edit->addAction(actionFindPrevious);
        Edit->addAction(actionReplace);
        Edit->addSeparator();
        Edit->addAction(actionGotoObject);

        retranslateUi(PoDoFoBrowserBase);
        QObject::connect(fileNewAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(fileNew()));
        QObject::connect(fileOpenAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(fileOpen()));
        QObject::connect(fileSaveAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(fileSave()));
        QObject::connect(fileSaveAsAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(fileSaveAs()));
        QObject::connect(fileExitAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(fileExit()));
        QObject::connect(helpAboutAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(helpAbout()));
        QObject::connect(toolsToHexAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(toolsToHex()));
        QObject::connect(toolsFromHexAction, SIGNAL(activated()), PoDoFoBrowserBase, SLOT(toolsFromHex()));

        QMetaObject::connectSlotsByName(PoDoFoBrowserBase);
    } // setupUi

    void retranslateUi(QMainWindow *PoDoFoBrowserBase)
    {
        PoDoFoBrowserBase->setWindowTitle(QApplication::translate("PoDoFoBrowserBase", "PoDoFo Browser", 0, QApplication::UnicodeUTF8));
        fileNewAction->setText(QApplication::translate("PoDoFoBrowserBase", "&New", 0, QApplication::UnicodeUTF8));
        fileNewAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "New", 0, QApplication::UnicodeUTF8));
        fileNewAction->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setText(QApplication::translate("PoDoFoBrowserBase", "&Open...", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Open", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setText(QApplication::translate("PoDoFoBrowserBase", "&Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setText(QApplication::translate("PoDoFoBrowserBase", "Save &As...", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Save As", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setShortcut(QString());
        fileExitAction->setText(QApplication::translate("PoDoFoBrowserBase", "E&xit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Exit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setShortcut(QString());
        helpAboutAction->setText(QApplication::translate("PoDoFoBrowserBase", "&About", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "About", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setShortcut(QString());
        toolsToHexAction->setText(QApplication::translate("PoDoFoBrowserBase", "Convert &to Hexstring", 0, QApplication::UnicodeUTF8));
        toolsToHexAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Convert &to Hexstring", 0, QApplication::UnicodeUTF8));
        toolsFromHexAction->setText(QApplication::translate("PoDoFoBrowserBase", "Convert &from Hexstring", 0, QApplication::UnicodeUTF8));
        toolsFromHexAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Convert &from Hexstring", 0, QApplication::UnicodeUTF8));
        editCutAction->setText(QApplication::translate("PoDoFoBrowserBase", "Cu&t", 0, QApplication::UnicodeUTF8));
        editCutAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "Cu&t", 0, QApplication::UnicodeUTF8));
        editnew_itemAction->setText(QApplication::translate("PoDoFoBrowserBase", "&Copy", 0, QApplication::UnicodeUTF8));
        editnew_itemAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "&Copy", 0, QApplication::UnicodeUTF8));
        editPasteAction->setText(QApplication::translate("PoDoFoBrowserBase", "&Paste", 0, QApplication::UnicodeUTF8));
        editPasteAction->setIconText(QApplication::translate("PoDoFoBrowserBase", "&Paste", 0, QApplication::UnicodeUTF8));
        actionInsert_Before->setText(QApplication::translate("PoDoFoBrowserBase", "Insert &Before", 0, QApplication::UnicodeUTF8));
        actionInsert_After->setText(QApplication::translate("PoDoFoBrowserBase", "Insert &After", 0, QApplication::UnicodeUTF8));
        actionInsert_Child->setText(QApplication::translate("PoDoFoBrowserBase", "Insert New &Child", 0, QApplication::UnicodeUTF8));
        actionRemove_Item->setText(QApplication::translate("PoDoFoBrowserBase", "&Delete Item", 0, QApplication::UnicodeUTF8));
        actionCreateNewObject->setText(QApplication::translate("PoDoFoBrowserBase", "Create New Object", 0, QApplication::UnicodeUTF8));
        actionInsert_Key->setText(QApplication::translate("PoDoFoBrowserBase", "Insert &Key", 0, QApplication::UnicodeUTF8));
        fileReloadAction->setText(QApplication::translate("PoDoFoBrowserBase", "Reload", 0, QApplication::UnicodeUTF8));
        actionRefreshView->setText(QApplication::translate("PoDoFoBrowserBase", "Refresh View (DEBUG)", 0, QApplication::UnicodeUTF8));
        actionDisplay_Selected_Object->setText(QApplication::translate("PoDoFoBrowserBase", "Display Selected Object", 0, QApplication::UnicodeUTF8));
        actionToolsDisplayCodeForSelection->setText(QApplication::translate("PoDoFoBrowserBase", "&Display Code For Selection", 0, QApplication::UnicodeUTF8));
        actionCatalogView->setText(QApplication::translate("PoDoFoBrowserBase", "Catalog View", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("PoDoFoBrowserBase", "&Find...", 0, QApplication::UnicodeUTF8));
        actionFind->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionFindNext->setText(QApplication::translate("PoDoFoBrowserBase", "Find &Next", 0, QApplication::UnicodeUTF8));
        actionFindNext->setShortcut(QApplication::translate("PoDoFoBrowserBase", "F3", 0, QApplication::UnicodeUTF8));
        actionFindPrevious->setText(QApplication::translate("PoDoFoBrowserBase", "Find &Previous", 0, QApplication::UnicodeUTF8));
        actionFindPrevious->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Shift+F3", 0, QApplication::UnicodeUTF8));
        actionReplace->setText(QApplication::translate("PoDoFoBrowserBase", "&Replace...", 0, QApplication::UnicodeUTF8));
        actionReplace->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionGotoObject->setText(QApplication::translate("PoDoFoBrowserBase", "&Goto Object...", 0, QApplication::UnicodeUTF8));
        actionGotoObject->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PoDoFoBrowserBase", "Contents of the associated stream:", 0, QApplication::UnicodeUTF8));
        labelStream->setText(QString());
        buttonImport->setText(QApplication::translate("PoDoFoBrowserBase", "&Import Stream ...", 0, QApplication::UnicodeUTF8));
        buttonImport->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Alt+I", 0, QApplication::UnicodeUTF8));
        buttonExport->setText(QApplication::translate("PoDoFoBrowserBase", "&Export Stream ...", 0, QApplication::UnicodeUTF8));
        buttonExport->setShortcut(QApplication::translate("PoDoFoBrowserBase", "Alt+E", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("PoDoFoBrowserBase", "&Help", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("PoDoFoBrowserBase", "&File", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("PoDoFoBrowserBase", "View", 0, QApplication::UnicodeUTF8));
        Tools->setTitle(QApplication::translate("PoDoFoBrowserBase", "&Tools", 0, QApplication::UnicodeUTF8));
        Edit->setTitle(QApplication::translate("PoDoFoBrowserBase", "&Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PoDoFoBrowserBase: public Ui_PoDoFoBrowserBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODOFOBROWSERBASE_H
