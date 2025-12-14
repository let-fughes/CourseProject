#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <QString>

class Trapezoid {
protected:
    int lowerBase;
    int upperBase;

public:
    Trapezoid(int lower, int upper);

    virtual QString getInfo() const;

    virtual double calculateMidline() const;

    virtual ~Trapezoid() = default;
};

class TrapezoidWithHeight : public Trapezoid {
private:
    int height;

public:
    TrapezoidWithHeight(int lower, int upper, int h);

    QString getInfo() const override;

    double calculateArea() const;
};

#endif // TRAPEZOID_H
