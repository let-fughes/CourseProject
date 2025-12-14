#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "info.h"
#include "trapezoid.cpp"
#include <QMessageBox>
#include <QVBoxLayout>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QLineEdit *lineEdit = findChild<QLineEdit*>("lineEdit");
    QLineEdit *lineEdit2 = findChild<QLineEdit*>("lineEdit_2");


    bool ok1, ok2;

    QString text1 = lineEdit->text();
    QString text2 = lineEdit2->text();

    int value1 = text1.toInt(&ok1);
    int value2 = text2.toInt(&ok2);

    if (ok1 && ok2) {
        qDebug() << "Button base:" << value1;
        qDebug() << "Top base:" << value2;

        Trapezoid trapezoid(value1, value2);

        double result = trapezoid.calculateMidline();

        ui->label_10->setText(QString("%1").arg(result));
    } else {
        lineEdit->clear();
        lineEdit->setFocus();
        lineEdit2->clear();
        lineEdit2->setFocus();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QLineEdit *lineEdit = findChild<QLineEdit*>("lineEdit");
    QLineEdit *lineEdit2 = findChild<QLineEdit*>("lineEdit_2");
    QLineEdit *lineEdit3 = findChild<QLineEdit*>("lineEdit_3");


    bool ok1, ok2, ok3;

    QString text1 = lineEdit->text();
    QString text2 = lineEdit2->text();
    QString text3 = lineEdit3->text();

    int value1 = text1.toInt(&ok1);
    int value2 = text2.toInt(&ok2);
    int value3 = text3.toInt(&ok3);

    if (ok1 && ok2 && ok3) {
        qDebug() << "Button base:" << value1;
        qDebug() << "Top base:" << value2;
        qDebug() << "Height:" << value3;

        TrapezoidWithHeight trapezoidWithHeight(value1, value2, value3);

        double result = trapezoidWithHeight.calculateArea();

        ui->label_9->setText(QString("%1").arg(result));
    } else {
        lineEdit->clear();
        lineEdit2->clear();
        lineEdit3->clear();
        lineEdit->setFocus();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    Info *info = new Info(this);
    info->setWindowFlags(Qt::Window);
    info->setAttribute(Qt::WA_DeleteOnClose);

    QLineEdit *lineEdit = findChild<QLineEdit*>("lineEdit");
    QLineEdit *lineEdit2 = findChild<QLineEdit*>("lineEdit_2");
    QLineEdit *lineEdit3 = findChild<QLineEdit*>("lineEdit_3");


    bool ok1, ok2, ok3;

    QString text1 = lineEdit->text();
    QString text2 = lineEdit2->text();
    QString text3 = lineEdit3->text();

    int value1 = text1.toInt(&ok1);
    int value2 = text2.toInt(&ok2);
    int value3 = text3.toInt(&ok3);

    if (ok1 && ok2 && ok3) {
        info->setTrapezoidInfo(value1, value2, value3);

    } else {
        info->setInfoText(
            "INPUT ERROR\n"
            "============\n\n"
            "Invalid Input.\n"
            "Please, enter integer number\n"
            "• Button base\n"
            "• Top base\n"
            "• Height\n\n"
            );
    }

    info->show();
}


