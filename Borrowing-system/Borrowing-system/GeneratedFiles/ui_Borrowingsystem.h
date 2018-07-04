/********************************************************************************
** Form generated from reading UI file 'Borrowingsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWINGSYSTEM_H
#define UI_BORROWINGSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowingsystemClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QLabel *label;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_book;
    QRadioButton *radioButton_video;
    QRadioButton *radioButton_picture;
    QSplitter *splitter;
    QTableWidget *tableWidget_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Additem;
    QSpacerItem *verticalSpacer_5;
    QPushButton *deleteitem;
    QSpacerItem *verticalSpacer_4;
    QPushButton *edititem;
    QSpacerItem *verticalSpacer_3;
    QPushButton *searchitem;
    QSpacerItem *verticalSpacer_2;
    QPushButton *saveitem;
    QSpacerItem *verticalSpacer_6;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BorrowingsystemClass)
    {
        if (BorrowingsystemClass->objectName().isEmpty())
            BorrowingsystemClass->setObjectName(QStringLiteral("BorrowingsystemClass"));
        BorrowingsystemClass->resize(1597, 1612);
        centralWidget = new QWidget(BorrowingsystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_4 = new QSplitter(centralWidget);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(23);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(label);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_book = new QRadioButton(layoutWidget);
        radioButton_book->setObjectName(QStringLiteral("radioButton_book"));

        horizontalLayout->addWidget(radioButton_book, 0, Qt::AlignHCenter);

        radioButton_video = new QRadioButton(layoutWidget);
        radioButton_video->setObjectName(QStringLiteral("radioButton_video"));

        horizontalLayout->addWidget(radioButton_video, 0, Qt::AlignHCenter);

        radioButton_picture = new QRadioButton(layoutWidget);
        radioButton_picture->setObjectName(QStringLiteral("radioButton_picture"));

        horizontalLayout->addWidget(radioButton_picture, 0, Qt::AlignHCenter);

        splitter_2->addWidget(layoutWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMaximumSize(QSize(16777215, 480));
        splitter->setOrientation(Qt::Horizontal);
        tableWidget_2 = new QTableWidget(splitter);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setMaximumSize(QSize(16777215, 480));
        splitter->addWidget(tableWidget_2);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Additem = new QPushButton(widget);
        Additem->setObjectName(QStringLiteral("Additem"));

        verticalLayout->addWidget(Additem);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        deleteitem = new QPushButton(widget);
        deleteitem->setObjectName(QStringLiteral("deleteitem"));

        verticalLayout->addWidget(deleteitem);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        edititem = new QPushButton(widget);
        edititem->setObjectName(QStringLiteral("edititem"));

        verticalLayout->addWidget(edititem);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        searchitem = new QPushButton(widget);
        searchitem->setObjectName(QStringLiteral("searchitem"));

        verticalLayout->addWidget(searchitem);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        saveitem = new QPushButton(widget);
        saveitem->setObjectName(QStringLiteral("saveitem"));

        verticalLayout->addWidget(saveitem);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        splitter->addWidget(widget);
        splitter_2->addWidget(splitter);
        tableWidget = new QTableWidget(splitter_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        splitter_2->addWidget(tableWidget);
        splitter_3->addWidget(splitter_2);
        splitter_4->addWidget(splitter_3);

        gridLayout->addWidget(splitter_4, 0, 0, 1, 1);

        BorrowingsystemClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BorrowingsystemClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1597, 37));
        BorrowingsystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BorrowingsystemClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BorrowingsystemClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BorrowingsystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BorrowingsystemClass->setStatusBar(statusBar);

        retranslateUi(BorrowingsystemClass);
        QObject::connect(radioButton_book, SIGNAL(toggled(bool)), BorrowingsystemClass, SLOT(click_book()));
        QObject::connect(radioButton_video, SIGNAL(toggled(bool)), BorrowingsystemClass, SLOT(click_video()));
        QObject::connect(radioButton_picture, SIGNAL(toggled(bool)), BorrowingsystemClass, SLOT(click_picture()));
        QObject::connect(Additem, SIGNAL(clicked()), BorrowingsystemClass, SLOT(click_additem()));
        QObject::connect(deleteitem, SIGNAL(clicked()), BorrowingsystemClass, SLOT(click_deleteitem()));
        QObject::connect(edititem, SIGNAL(clicked()), BorrowingsystemClass, SLOT(click_edititem()));
        QObject::connect(saveitem, SIGNAL(clicked()), BorrowingsystemClass, SLOT(click_saveitem()));
        QObject::connect(searchitem, SIGNAL(clicked()), BorrowingsystemClass, SLOT(click_searchitem()));

        QMetaObject::connectSlotsByName(BorrowingsystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *BorrowingsystemClass)
    {
        BorrowingsystemClass->setWindowTitle(QApplication::translate("BorrowingsystemClass", "Borrowingsystem", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowingsystemClass", "\345\252\222\344\275\223\345\200\237\351\230\205\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        radioButton_book->setText(QApplication::translate("BorrowingsystemClass", "\345\233\276\344\271\246", Q_NULLPTR));
        radioButton_video->setText(QApplication::translate("BorrowingsystemClass", "\350\247\206\351\242\221\345\205\211\347\233\230", Q_NULLPTR));
        radioButton_picture->setText(QApplication::translate("BorrowingsystemClass", "\345\233\276\345\203\217", Q_NULLPTR));
        Additem->setText(QApplication::translate("BorrowingsystemClass", "\346\267\273\345\212\240", Q_NULLPTR));
        deleteitem->setText(QApplication::translate("BorrowingsystemClass", "\345\210\240\351\231\244", Q_NULLPTR));
        edititem->setText(QApplication::translate("BorrowingsystemClass", "\344\277\256\346\224\271", Q_NULLPTR));
        searchitem->setText(QApplication::translate("BorrowingsystemClass", "\346\237\245\350\257\242", Q_NULLPTR));
        saveitem->setText(QApplication::translate("BorrowingsystemClass", "\345\255\230\347\233\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowingsystemClass: public Ui_BorrowingsystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGSYSTEM_H
