#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Info)
{
    ui->setupUi(this);
}

Info::~Info()
{
    delete ui;
}

void Info::setInfoText(const QString &text)
{
    ui->label_3->setText(text);
}

void Info::setTrapezoidInfo(int lowerBase, int upperBase, int height)
{
    QString text = QString(
                       "TRAPEZOID INFO\n"
                       "==================\n\n"
                       "Geometrical info:\n"
                       "• Button base: %1 сm\n"
                       "• Top base: %2 сm\n"
                       "• Height: %3 сm\n\n"
                       "Results:\n"
                       "• Middle line: %4 сm\n"
                       "• Square: %5 сm²"
                       ).arg(lowerBase)
                       .arg(upperBase)
                       .arg(height)
                       .arg((lowerBase + upperBase) / 2.0, 0, 'f', 2)
                       .arg(((lowerBase + upperBase) / 2.0) * height, 0, 'f', 2);

    ui->label_3->setText(text);
}
