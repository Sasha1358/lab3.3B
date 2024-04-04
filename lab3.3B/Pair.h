#pragma once
#include <iostream>
using namespace std;

class Pair {
private:
    int p1;
    int p2;
public:
    Pair();
    Pair(int p1_val, int p2_val);
    Pair(const Pair& other);
    ~Pair();

    int getP1() const;
    void setP1(int value);
    int getP2() const;
    void setP2(int value);

    bool operator>(const Pair& other) const;
    bool operator<(const Pair& other) const;
    bool operator>=(const Pair& other) const;
    bool operator<=(const Pair& other) const;
    bool operator==(const Pair& other) const;
    bool operator!=(const Pair& other) const;

    friend Pair makePair(int p1_val, int p2_val);

    friend istream& operator>>(istream& in, Pair& pair);
    friend ostream& operator<<(ostream& out, const Pair& pair);
};
