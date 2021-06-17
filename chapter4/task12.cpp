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

    fraction one, two;
    char ch = '/', operation, answer = 'y';

    do
    {
        cout << "Введите выражение над дробями:";
        cin >> one.numerator >> ch >> one.denominator >> operation >> two.numerator >> ch >> two.denominator;

        switch (operation)
        {
            case '+':
                cout << one.numerator << "/" << one.denominator << " " << operation << " " << two.numerator << "/" << two.denominator << " = " << (one.numerator * two.denominator + one.denominator * two.numerator) << "/" << (one.denominator * two.denominator) << endl;
                break;

            case '-':
                cout << one.numerator << "/" << one.denominator << " " << operation << " " << two.numerator << "/" << two.denominator << " = " << (one.numerator * two.denominator - one.denominator * two.numerator) << "/" << (one.denominator * two.denominator) << endl;
                break;

            case '*':
                cout << one.numerator << "/" << one.denominator << " " << operation << " " << two.numerator << "/" << two.denominator << " = " << (one.numerator * two.numerator) << "/" << (one.denominator * two.denominator) << endl;
                break;

            case '/':
                cout << one.numerator << "/" << one.denominator << " " << operation << " " << two.numerator << "/" << two.denominator << " = " << (one.numerator * two.denominator) << "/" << (one.denominator * two.numerator) << endl;
                break;

            default:
                cout << "Вы ввели некорректную операцию..." << endl;
                break;
        }
        cout << "Желаете посчитать еще (нажмите - y):";
        cin >> answer;
    } while (answer == 'y');

    cout << "Программа завершена..." << endl;
    return 0;
}