/********************************************************************************
** Form generated from reading UI file 'AddDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDLG_H
#define UI_ADDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddDlg
{
public:
    QLabel *label;
    QPushButton *Warning_OK;

    void setupUi(QDialog *AddDlg)
    {
        if (AddDlg->objectName().isEmpty())
            AddDlg->setObjectName(QStringLiteral("AddDlg"));
        AddDlg->resize(588, 219);
        label = new QLabel(AddDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, -20, 561, 251));
        label->setAlignment(Qt::AlignCenter);
        Warning_OK = new QPushButton(AddDlg);
        Warning_OK->setObjectName(QStringLiteral("Warning_OK"));
        Warning_OK->setGeometry(QRect(430, 170, 150, 46));

        retranslateUi(AddDlg);
        QObject::connect(Warning_OK, SIGNAL(clicked()), AddDlg, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDlg);
    } // setupUi

    void retranslateUi(QDialog *AddDlg)
    {
        AddDlg->setWindowTitle(QApplication::translate("AddDlg", "AddDlg", Q_NULLPTR));
        label->setText(QApplication::translate("AddDlg", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\343\200\202", Q_NULLPTR));
        Warning_OK->setText(QApplication::translate("AddDlg", "OK\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddDlg: public Ui_AddDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDLG_H
