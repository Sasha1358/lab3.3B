#include "Rational.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rational z1, z2, z3;

    cout << "Введіть значення для z1:" << endl;
    cin >> z1;

    cout << "z1: " << z1 << ", значення: " << z1.value() << endl;
    z1.Reduce();
    cout << "Зменшене значення z1: " << z1 << endl;

    cout << "Введіть значення для z2:" << endl;
    cin >> z2;
    z2.Reduce();
    cout << "Зменшене значення z2: " << z2 << endl;
    cout << "z2: " << z2 << ", значення: " << z2.value() << endl;

    // Додавання
    z3 = z1 + z2;
    cout << "Результат додавання z1 і z2: " << z3 << ", його значення: " << z3.value() << endl;

    // Віднімання
    z3 = z1 - z2;
    cout << "Результат віднімання z1 і z2: " << z3 << ", його значення: " << z3.value() << endl;

    // Множення
    z3 = z1 * z2; 
    cout << "Результат множення z1 і z2: " << z3 << ", його значення: " << z3.value() << endl;

    cin.get();
    return 0;
}
