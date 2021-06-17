#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c, d;
    char ch = '/', operation, answer = 'y';

    do
    {
        cout << "Введите выражение над дробями:";
        cin >> a >> ch >> b >> operation >> c >> ch >> d;

        switch (operation)
        {
            case '+':
                cout << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a * d + b * c) << "/" << (b * d) << endl;
                break;

            case '-':
                cout << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a * d - b * c) << "/" << (b * d) << endl;
                break;

            case '*':
                cout << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a * c) << "/" << (b * d) << endl;
                break;

            case '/':
                cout << a << "/" << b << " " << operation << " " << c << "/" << d << " = " << (a * d) << "/" << (b * c) << endl;
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