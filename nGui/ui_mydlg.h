/********************************************************************************
** Form generated from reading UI file 'mydlg.ui'
**
** Created: Wed Mar 21 16:57:59 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG_H
#define UI_MYDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg
{
public:
    QPushButton *enterBtn;

    void setupUi(QDialog *myDlg)
    {
        if (myDlg->objectName().isEmpty())
            myDlg->setObjectName(QString::fromUtf8("myDlg"));
        myDlg->resize(400, 300);
        enterBtn = new QPushButton(myDlg);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));
        enterBtn->setGeometry(QRect(140, 150, 97, 27));

        retranslateUi(myDlg);
        QObject::connect(enterBtn, SIGNAL(clicked()), myDlg, SLOT(accept()));

        QMetaObject::connectSlotsByName(myDlg);
    } // setupUi

    void retranslateUi(QDialog *myDlg)
    {
        myDlg->setWindowTitle(QApplication::translate("myDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        enterBtn->setText(QApplication::translate("myDlg", "\350\277\233\345\205\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg: public Ui_myDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG_H
