/********************************************************************************
** Form generated from reading UI file 'LoginDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QPushButton *LoginButton;
    QPushButton *ExitButton;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *accountEdit;
    QTextEdit *passwordEdit;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(778, 476);
        LoginButton = new QPushButton(LoginDlg);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(410, 390, 150, 46));
        ExitButton = new QPushButton(LoginDlg);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        ExitButton->setGeometry(QRect(590, 390, 150, 46));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 110, 108, 24));
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 220, 108, 24));
        accountEdit = new QTextEdit(LoginDlg);
        accountEdit->setObjectName(QStringLiteral("accountEdit"));
        accountEdit->setGeometry(QRect(240, 90, 401, 71));
        passwordEdit = new QTextEdit(LoginDlg);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(240, 200, 401, 71));

        retranslateUi(LoginDlg);
        QObject::connect(LoginButton, SIGNAL(clicked()), LoginDlg, SLOT(ClickLogin()));
        QObject::connect(ExitButton, SIGNAL(clicked()), LoginDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "LoginDlg", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("LoginDlg", "OK!", Q_NULLPTR));
        ExitButton->setText(QApplication::translate("LoginDlg", "CANCEL!", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDlg", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDlg", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
