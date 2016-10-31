/********************************************************************************
** Form generated from reading UI file 'podofofinddlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODOFOFINDDLG_H
#define UI_PODOFOFINDDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PoDoFoFindDlg
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBoxFind;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QComboBox *comboBoxText;
    QGroupBox *groupBoxOptions;
    QVBoxLayout *vboxLayout2;
    QCheckBox *checkBoxCaseSensitive;
    QCheckBox *checkBoxWholeWords;
    QCheckBox *checkBoxFindBackwards;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *buttonFind;
    QPushButton *buttonClose;

    void setupUi(QDialog *PoDoFoFindDlg)
    {
        if (PoDoFoFindDlg->objectName().isEmpty())
            PoDoFoFindDlg->setObjectName(QString::fromUtf8("PoDoFoFindDlg"));
        PoDoFoFindDlg->resize(400, 300);
        vboxLayout = new QVBoxLayout(PoDoFoFindDlg);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBoxFind = new QGroupBox(PoDoFoFindDlg);
        groupBoxFind->setObjectName(QString::fromUtf8("groupBoxFind"));
        vboxLayout1 = new QVBoxLayout(groupBoxFind);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(groupBoxFind);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        comboBoxText = new QComboBox(groupBoxFind);
        comboBoxText->setObjectName(QString::fromUtf8("comboBoxText"));
        comboBoxText->setEditable(true);

        vboxLayout1->addWidget(comboBoxText);


        vboxLayout->addWidget(groupBoxFind);

        groupBoxOptions = new QGroupBox(PoDoFoFindDlg);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        vboxLayout2 = new QVBoxLayout(groupBoxOptions);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        checkBoxCaseSensitive = new QCheckBox(groupBoxOptions);
        checkBoxCaseSensitive->setObjectName(QString::fromUtf8("checkBoxCaseSensitive"));

        vboxLayout2->addWidget(checkBoxCaseSensitive);

        checkBoxWholeWords = new QCheckBox(groupBoxOptions);
        checkBoxWholeWords->setObjectName(QString::fromUtf8("checkBoxWholeWords"));

        vboxLayout2->addWidget(checkBoxWholeWords);

        checkBoxFindBackwards = new QCheckBox(groupBoxOptions);
        checkBoxFindBackwards->setObjectName(QString::fromUtf8("checkBoxFindBackwards"));

        vboxLayout2->addWidget(checkBoxFindBackwards);


        vboxLayout->addWidget(groupBoxOptions);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonFind = new QPushButton(PoDoFoFindDlg);
        buttonFind->setObjectName(QString::fromUtf8("buttonFind"));
        buttonFind->setDefault(true);

        hboxLayout->addWidget(buttonFind);

        buttonClose = new QPushButton(PoDoFoFindDlg);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        hboxLayout->addWidget(buttonClose);


        vboxLayout->addLayout(hboxLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBoxText);
#endif // QT_NO_SHORTCUT

        retranslateUi(PoDoFoFindDlg);
        QObject::connect(buttonFind, SIGNAL(clicked()), PoDoFoFindDlg, SLOT(accept()));
        QObject::connect(buttonClose, SIGNAL(clicked()), PoDoFoFindDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(PoDoFoFindDlg);
    } // setupUi

    void retranslateUi(QDialog *PoDoFoFindDlg)
    {
        PoDoFoFindDlg->setWindowTitle(QApplication::translate("PoDoFoFindDlg", "Find Text", 0, QApplication::UnicodeUTF8));
        groupBoxFind->setTitle(QApplication::translate("PoDoFoFindDlg", "Find", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PoDoFoFindDlg", "&Text to Find:", 0, QApplication::UnicodeUTF8));
        groupBoxOptions->setTitle(QApplication::translate("PoDoFoFindDlg", "Options", 0, QApplication::UnicodeUTF8));
        checkBoxCaseSensitive->setText(QApplication::translate("PoDoFoFindDlg", "C&ase sensitive", 0, QApplication::UnicodeUTF8));
        checkBoxWholeWords->setText(QApplication::translate("PoDoFoFindDlg", "&Whole words only", 0, QApplication::UnicodeUTF8));
        checkBoxFindBackwards->setText(QApplication::translate("PoDoFoFindDlg", "Find &backwards", 0, QApplication::UnicodeUTF8));
        buttonFind->setText(QApplication::translate("PoDoFoFindDlg", "&Find", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("PoDoFoFindDlg", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PoDoFoFindDlg: public Ui_PoDoFoFindDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODOFOFINDDLG_H
