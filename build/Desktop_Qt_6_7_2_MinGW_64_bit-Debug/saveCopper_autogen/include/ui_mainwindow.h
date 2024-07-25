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
#include <QtWidgets/QSplitter>
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
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *selectedFileLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_1;
    QPushButton *selectFileButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
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
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(100, 130, 571, 192));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 60, 571, 42));
        splitter->setLayoutDirection(Qt::LeftToRight);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(15);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        selectedFileLabel = new QLabel(widget);
        selectedFileLabel->setObjectName("selectedFileLabel");
        selectedFileLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(selectedFileLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setEnabled(true);
        lineEdit_1->setMouseTracking(true);
        lineEdit_1->setDragEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_1);

        selectFileButton = new QPushButton(widget);
        selectFileButton->setObjectName("selectFileButton");

        horizontalLayout_2->addWidget(selectFileButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName("widget1");
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        moveFileButton = new QPushButton(widget1);
        moveFileButton->setObjectName("moveFileButton");
        moveFileButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(moveFileButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(widget1);
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
        selectFileButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200/\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262", nullptr));
        moveFileButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200/\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        menusaveCopper->setTitle(QCoreApplication::translate("MainWindow", "saveCopper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
