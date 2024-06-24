/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(918, 649);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 358, 89));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 10, 63, 20));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(400, 30, 358, 89));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(layoutWidget1);
        textBrowser_2->setObjectName("textBrowser_2");

        horizontalLayout_2->addWidget(textBrowser_2);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 918, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
