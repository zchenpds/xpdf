/********************************************************************************
** Form generated from reading UI file 'podofoaboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODOFOABOUTDLG_H
#define UI_PODOFOABOUTDLG_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PodofoAboutDlg
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QLabel *textLabel3;
    QLabel *textLabel2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton1;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *PodofoAboutDlg)
    {
        if (PodofoAboutDlg->objectName().isEmpty())
            PodofoAboutDlg->setObjectName(QString::fromUtf8("PodofoAboutDlg"));
        PodofoAboutDlg->resize(488, 250);
        vboxLayout = new QVBoxLayout(PodofoAboutDlg);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(PodofoAboutDlg);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignCenter);
        textLabel1->setWordWrap(true);

        vboxLayout->addWidget(textLabel1);

        textLabel3 = new QLabel(PodofoAboutDlg);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignCenter);
        textLabel3->setWordWrap(false);

        vboxLayout->addWidget(textLabel3);

        textLabel2 = new QLabel(PodofoAboutDlg);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        vboxLayout->addWidget(textLabel2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(121, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton1 = new QPushButton(PodofoAboutDlg);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        hboxLayout->addWidget(pushButton1);

        spacerItem1 = new QSpacerItem(121, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PodofoAboutDlg);
        QObject::connect(pushButton1, SIGNAL(clicked()), PodofoAboutDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(PodofoAboutDlg);
    } // setupUi

    void retranslateUi(QDialog *PodofoAboutDlg)
    {
        PodofoAboutDlg->setWindowTitle(QApplication::translate("PodofoAboutDlg", "About PoDoFoBrowser", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PodofoAboutDlg", "<qt><b>PoDoFoBrowser</b> is a Qt application for browsing the objects in a PDF file and modifying their keys easily. It is very useful if you want to look on the internal structure of PDF files.</qt>", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("PodofoAboutDlg", "(c) 2006-2007 Dominik Seichter - domseichter@web.de\n"
"(c) 2007 Craig Ringer - craig@postnewspapers.com.au", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("PodofoAboutDlg", "<p align=\"center\">http://podofo.sf.net</p>", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("PodofoAboutDlg", "&Close", 0, QApplication::UnicodeUTF8));
        pushButton1->setShortcut(QApplication::translate("PodofoAboutDlg", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PodofoAboutDlg: public Ui_PodofoAboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODOFOABOUTDLG_H
