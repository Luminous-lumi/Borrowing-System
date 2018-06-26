/********************************************************************************
** Form generated from reading UI file 'borrowsystem_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWSYSTEM_QT_H
#define UI_BORROWSYSTEM_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrowsystem_qtClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *title;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QMenuBar *menuBar;
    QMenu *menu_edit;
    QMenu *menu_search;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *borrowsystem_qtClass)
    {
        if (borrowsystem_qtClass->objectName().isEmpty())
            borrowsystem_qtClass->setObjectName(QStringLiteral("borrowsystem_qtClass"));
        borrowsystem_qtClass->resize(1327, 1126);
        centralWidget = new QWidget(borrowsystem_qtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(890, 10, 421, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(368, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(50, 520, 108, 24));
        title->setLayoutDirection(Qt::LeftToRight);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 10, 801, 421));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 20, 801, 421));
        borrowsystem_qtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(borrowsystem_qtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1327, 37));
        menu_edit = new QMenu(menuBar);
        menu_edit->setObjectName(QStringLiteral("menu_edit"));
        menu_search = new QMenu(menuBar);
        menu_search->setObjectName(QStringLiteral("menu_search"));
        borrowsystem_qtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(borrowsystem_qtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        borrowsystem_qtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(borrowsystem_qtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        borrowsystem_qtClass->setStatusBar(statusBar);

        menuBar->addAction(menu_edit->menuAction());
        menuBar->addAction(menu_search->menuAction());

        retranslateUi(borrowsystem_qtClass);

        QMetaObject::connectSlotsByName(borrowsystem_qtClass);
    } // setupUi

    void retranslateUi(QMainWindow *borrowsystem_qtClass)
    {
        borrowsystem_qtClass->setWindowTitle(QApplication::translate("borrowsystem_qtClass", "borrowsystem_qt", Q_NULLPTR));
        pushButton->setText(QApplication::translate("borrowsystem_qtClass", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("borrowsystem_qtClass", "\345\210\240\351\231\244", Q_NULLPTR));
        title->setText(QApplication::translate("borrowsystem_qtClass", "\346\240\207\351\242\230", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("borrowsystem_qtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">nihao</p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("borrowsystem_qtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">nihao</p></body></html>", Q_NULLPTR));
        menu_edit->setTitle(QApplication::translate("borrowsystem_qtClass", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_search->setTitle(QApplication::translate("borrowsystem_qtClass", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrowsystem_qtClass: public Ui_borrowsystem_qtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWSYSTEM_QT_H
