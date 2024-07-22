/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeView *treeView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *selectedFileLabel;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_1;
    QPushButton *selectFileButton;
    QLineEdit *lineEdit_2;
    QPushButton *moveFileButton;
    QMenuBar *menubar;
    QMenu *menusaveCopper;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(710, 470);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(100, 130, 571, 192));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 60, 324, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        selectedFileLabel = new QLabel(widget);
        selectedFileLabel->setObjectName("selectedFileLabel");
        selectedFileLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(selectedFileLabel);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName("lineEdit_1");

        horizontalLayout->addWidget(lineEdit_1);

        selectFileButton = new QPushButton(widget);
        selectFileButton->setObjectName("selectFileButton");

        horizontalLayout->addWidget(selectFileButton);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        moveFileButton = new QPushButton(widget);
        moveFileButton->setObjectName("moveFileButton");
        moveFileButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(moveFileButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 710, 17));
        menusaveCopper = new QMenu(menubar);
        menusaveCopper->setObjectName("menusaveCopper");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menusaveCopper->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        selectedFileLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270\320\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262", nullptr));
        selectFileButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200/\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        moveFileButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200/\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        menusaveCopper->setTitle(QCoreApplication::translate("MainWindow", "saveCopper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
