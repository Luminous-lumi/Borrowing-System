/********************************************************************************
** Form generated from reading UI file 'Warning.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QStringLiteral("Warning"));
        Warning->resize(588, 300);
        label = new QLabel(Warning);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 130, 441, 24));
        pushButton = new QPushButton(Warning);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 230, 150, 46));

        retranslateUi(Warning);
        QObject::connect(pushButton, SIGNAL(clicked()), Warning, SLOT(accept()));

        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QDialog *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "Warning", Q_NULLPTR));
        label->setText(QApplication::translate("Warning", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\201\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\343\200\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Warning", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
