/********************************************************************************
** Form generated from reading UI file 'podofogotodlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODOFOGOTODLG_H
#define UI_PODOFOGOTODLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PoDoFoGotoDlg
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *spinObjectNumber;
    QSpinBox *spinGenerationNumber;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PoDoFoGotoDlg)
    {
        if (PoDoFoGotoDlg->objectName().isEmpty())
            PoDoFoGotoDlg->setObjectName(QString::fromUtf8("PoDoFoGotoDlg"));
        PoDoFoGotoDlg->resize(361, 158);
        vboxLayout = new QVBoxLayout(PoDoFoGotoDlg);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(PoDoFoGotoDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        spinObjectNumber = new QSpinBox(groupBox);
        spinObjectNumber->setObjectName(QString::fromUtf8("spinObjectNumber"));
        spinObjectNumber->setMaximum(10000000);

        hboxLayout->addWidget(spinObjectNumber);

        spinGenerationNumber = new QSpinBox(groupBox);
        spinGenerationNumber->setObjectName(QString::fromUtf8("spinGenerationNumber"));
        spinGenerationNumber->setMaximum(65536);

        hboxLayout->addWidget(spinGenerationNumber);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(PoDoFoGotoDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinObjectNumber);
#endif // QT_NO_SHORTCUT

        retranslateUi(PoDoFoGotoDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), PoDoFoGotoDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PoDoFoGotoDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(PoDoFoGotoDlg);
    } // setupUi

    void retranslateUi(QDialog *PoDoFoGotoDlg)
    {
        PoDoFoGotoDlg->setWindowTitle(QApplication::translate("PoDoFoGotoDlg", "Goto Object", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PoDoFoGotoDlg", "Select Object", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PoDoFoGotoDlg", "&Object and Generation Number:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PoDoFoGotoDlg: public Ui_PoDoFoGotoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODOFOGOTODLG_H
