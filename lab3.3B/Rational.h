#pragma once
#include "Pair.h"

class Rational : public Pair
{
public:
    Rational();
    Rational(int p1_val, int p2_val);
    Rational(const Rational& other);
    ~Rational() {}

    double GetA() const { return getP1(); }
    double GetB() const { return getP2(); }
    void SetA(int value);
    void SetB(int value);

    void Reduce();
    double value() const;

    friend Rational operator+(const Rational& l, const Rational& r);
    friend Rational operator-(const Rational& l, const Rational& r);
    friend Rational operator*(const Rational& l, const Rational& r);
};