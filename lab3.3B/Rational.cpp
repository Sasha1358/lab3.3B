// Rational.cpp
#include "Rational.h"

Rational::Rational() {}
Rational::Rational(int p1_val, int p2_val) : Pair(p1_val, p2_val) {
    Reduce();
}

void Rational::SetA(int value) {
    setP1(value);
}
void Rational::SetB(int value) {
    setP2(value);
}

void Rational::Reduce() {
    int gcd = 1;
    int smaller = (getP1() < getP2()) ? getP1() : getP2();

    for (int i = 2; i <= smaller; ++i) {
        if (getP1() % i == 0 && getP2() % i == 0) {
            gcd = i;
        }
    }

    if (gcd > 1) {
        setP1(getP1() / gcd);
        setP2(getP2() / gcd);
    }
}

double Rational::value() const {
    return static_cast<double>(getP1()) / getP2();
}

Rational operator+(const Rational& l, const Rational& r) {
    return Rational(l.getP1() * r.getP2() + r.getP1() * l.getP2(), l.getP2() * r.getP2());
}

Rational operator-(const Rational& l, const Rational& r) {
    return Rational(l.getP1() * r.getP2() - r.getP1() * l.getP2(), l.getP2() * r.getP2());
}

Rational operator*(const Rational& l, const Rational& r) {
    return Rational(l.getP1() * r.getP1(), l.getP2() * r.getP2());
}