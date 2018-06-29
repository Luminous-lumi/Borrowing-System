/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *account_lineEdit;
    QLineEdit *password_lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *login_pushButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(752, 300);
        account_lineEdit = new QLineEdit(Login);
        account_lineEdit->setObjectName(QStringLiteral("account_lineEdit"));
        account_lineEdit->setGeometry(QRect(150, 70, 511, 61));
        password_lineEdit = new QLineEdit(Login);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(150, 150, 511, 61));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 108, 24));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 170, 108, 24));
        login_pushButton = new QPushButton(Login);
        login_pushButton->setObjectName(QStringLiteral("login_pushButton"));
        login_pushButton->setGeometry(QRect(320, 240, 150, 46));

        retranslateUi(Login);
        QObject::connect(login_pushButton, SIGNAL(clicked()), Login, SLOT(click_login()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        login_pushButton->setText(QApplication::translate("Login", "\347\231\273\351\231\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
