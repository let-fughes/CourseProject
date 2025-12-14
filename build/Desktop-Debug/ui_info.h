/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName("Info");
        Info->resize(505, 309);
        Info->setMinimumSize(QSize(505, 309));
        Info->setMaximumSize(QSize(505, 309));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons8-\320\274\320\260\320\273\321\213\321\210-\320\271\320\276\320\264\320\260-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Info->setWindowIcon(icon);
        Info->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 51);\n"
""));
        label = new QLabel(Info);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 30, 211, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));
        label_2 = new QLabel(Info);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 90, 111, 171));
        label_3 = new QLabel(Info);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 70, 261, 201));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QWidget *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Info", nullptr));
        label->setText(QCoreApplication::translate("Info", "TRAPEZOID INFO", nullptr));
        label_2->setText(QCoreApplication::translate("Info", "<html><head/><body><p><img src=\":/icons/bender.png\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Info", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
