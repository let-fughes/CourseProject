#ifndef INFO_H
#define INFO_H

#include <QWidget>

namespace Ui {
class Info;
}

class Info : public QWidget
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();

    void setInfoText(const QString &text);
    void setTrapezoidInfo(int lowerBase, int upperBase, int height);

private:
    Ui::Info *ui;
};

#endif // INFO_H
