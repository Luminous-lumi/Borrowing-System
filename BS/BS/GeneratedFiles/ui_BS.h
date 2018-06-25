/********************************************************************************
** Form generated from reading UI file 'BS.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BS_H
#define UI_BS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BSClass
{
public:
    QWidget *Login_or_signin;
    QPushButton *Login;
    QPushButton *Signin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BSClass)
    {
        if (BSClass->objectName().isEmpty())
            BSClass->setObjectName(QStringLiteral("BSClass"));
        BSClass->resize(1241, 929);
        Login_or_signin = new QWidget(BSClass);
        Login_or_signin->setObjectName(QStringLiteral("Login_or_signin"));
        Login = new QPushButton(Login_or_signin);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(370, 190, 481, 201));
        Signin = new QPushButton(Login_or_signin);
        Signin->setObjectName(QStringLiteral("Signin"));
        Signin->setGeometry(QRect(370, 420, 481, 201));
        BSClass->setCentralWidget(Login_or_signin);
        menuBar = new QMenuBar(BSClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1241, 37));
        BSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BSClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BSClass->setStatusBar(statusBar);

        retranslateUi(BSClass);

        QMetaObject::connectSlotsByName(BSClass);
    } // setupUi

    void retranslateUi(QMainWindow *BSClass)
    {
        BSClass->setWindowTitle(QApplication::translate("BSClass", "\345\252\222\344\275\223\345\200\237\351\230\205\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        Login->setText(QApplication::translate("BSClass", "Login", Q_NULLPTR));
        Signin->setText(QApplication::translate("BSClass", "Sign in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BSClass: public Ui_BSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BS_H
