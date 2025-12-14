#include "trapezoid.h"

Trapezoid::Trapezoid(int lower, int upper)
    : lowerBase(lower), upperBase(upper) {
}

QString Trapezoid::getInfo() const {
    return QString("Tapezoid: button base = %1, top base = %2")
        .arg(lowerBase).arg(upperBase);
}

double Trapezoid::calculateMidline() const {
    return (lowerBase + upperBase) / 2.0;
}


TrapezoidWithHeight::TrapezoidWithHeight(int lower, int upper, int h)
    : Trapezoid(lower, upper), height(h) {
}

QString TrapezoidWithHeight::getInfo() const {
    return QString("Tapezoid: button base = %1, top base = %2, height = %3")
        .arg(lowerBase).arg(upperBase).arg(height);
}

double TrapezoidWithHeight::calculateArea() const {
    return calculateMidline() * height;
}
