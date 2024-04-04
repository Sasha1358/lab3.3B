#include "Rational.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rational z1, z2, z3;

    cout << "������ �������� ��� z1:" << endl;
    cin >> z1;

    cout << "z1: " << z1 << ", ��������: " << z1.value() << endl;
    z1.Reduce();
    cout << "�������� �������� z1: " << z1 << endl;

    cout << "������ �������� ��� z2:" << endl;
    cin >> z2;
    z2.Reduce();
    cout << "�������� �������� z2: " << z2 << endl;
    cout << "z2: " << z2 << ", ��������: " << z2.value() << endl;

    // ���������
    z3 = z1 + z2;
    cout << "��������� ��������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << endl;

    // ³�������
    z3 = z1 - z2;
    cout << "��������� �������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << endl;

    // ��������
    z3 = z1 * z2; 
    cout << "��������� �������� z1 � z2: " << z3 << ", ���� ��������: " << z3.value() << endl;

    cin.get();
    return 0;
}
