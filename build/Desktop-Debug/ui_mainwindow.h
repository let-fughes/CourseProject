/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(853, 540);
        MainWindow->setMinimumSize(QSize(853, 540));
        MainWindow->setMaximumSize(QSize(853, 540));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(14);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons8-\320\274\320\260\320\273\321\213\321\210-\320\271\320\276\320\264\320\260-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 51);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 431, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 100, 141, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier New")});
        font2.setPointSize(16);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 100, 171, 20));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 160, 141, 19));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 250, 101, 19));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 340, 81, 19));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 190, 191, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(61, 61, 69);\n"
"border: 1px solid;\n"
"border-color: rgb(36, 31, 49);\n"
"border-radius: 20px;\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 280, 191, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(61, 61, 69);\n"
"border: 1px solid;\n"
"border-color: rgb(36, 31, 49);\n"
"border-radius: 20px;\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(120, 370, 191, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(61, 61, 69);\n"
"border: 1px solid;\n"
"border-color: rgb(36, 31, 49);\n"
"border-radius: 20px;\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(500, 190, 101, 19));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(500, 230, 81, 19));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(620, 230, 151, 19));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(620, 190, 141, 19));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 360, 281, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier New")});
        font3.setPointSize(15);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(81, 81, 92);\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 430, 281, 51));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(71, 71, 148);\n"
"border-radius: 20px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(450, 290, 281, 51));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);\n"
"background-color: rgb(81, 81, 92);\n"
"border-radius: 20px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 853, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TRAPEZINATOR T1500", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PROGRAM FOR TRAPEZOID RESEARCH", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "INPUT DATA", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PRINT RESULTS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "BUTTON BASE:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TOP BASE:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "HEIGHT:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "HALF SUM:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "SQUARE:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CALCULATE HALF SUM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "CALCULATE SQUARE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "GET INFO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
