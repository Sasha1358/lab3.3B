///Pair.cpp
#include "Pair.h"
using namespace std;

Pair::Pair() : p1(), p2() {}
Pair::Pair(int p1_val, int p2_val) : p1(p1_val), p2(p2_val) {}
Pair::Pair(const Pair& other) : p1(other.p1), p2(other.p2) {}
Pair::~Pair() {}

int Pair::getP1() const {
    return p1;
}
void Pair::setP1(int value) {
    p1 = value;
}
int Pair::getP2() const {
    return p2;
}
void Pair::setP2(int value) {
    p2 = value;
}

bool Pair::operator>(const Pair& other) const {
    return (p1 > other.p1) || (p1 == other.p1 && p2 > other.p2);
}
bool Pair::operator<(const Pair& other) const {
    return (p1 < other.p1) || (p1 == other.p1 && p2 < other.p2);
}
bool Pair::operator>=(const Pair& other) const {
    return !(*this < other);
}
bool Pair::operator<=(const Pair& other) const {
    return !(*this > other);
}
bool Pair::operator==(const Pair& other) const {
    return p1 == other.p1 && p2 == other.p2;
}
bool Pair::operator!=(const Pair& other) const {
    return !(*this == other);
}

istream& operator>>(istream& in, Pair& pair) {
    cout << "p1: ";
    in >> pair.p1;
    cout << "p2: ";
    in >> pair.p2;
    return in;
}
ostream& operator<<(ostream& out, const Pair& pair) {
    out << "" << pair.p1 << "/ " << pair.p2 << "";
    return out;
}

Pair makePair(int p1_val, int p2_val) {
    return Pair(p1_val, p2_val);
}