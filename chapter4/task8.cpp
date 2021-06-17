#include <iostream>
#include <windows.h>
using namespace std;

struct fraction
{
    int numerator;
    int denominator;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    fraction one, two, sum;
    char ch = '/';
    cout << "Введите первую дробь:";
    cin >> one.numerator >> ch >> one.denominator;
    cout << "Введите вторую дробь:";
    cin >> two.numerator >> ch >> two.denominator;
    sum.numerator = one.numerator * two.denominator + one.denominator * two.numerator;
    sum.denominator = one.denominator * two.denominator;
    cout << "Сумма дробей равна " << sum.numerator << ch << sum.denominator << endl;
    cout << "Программа завершена...\n\n";
    return 0;
}