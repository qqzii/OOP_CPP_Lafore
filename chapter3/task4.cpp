#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double x1, x2;
    char oper, answer = 'y';
    do
    {
        cout << "Введите первое число, операцию, второе число:";
        cin >> x1 >> oper >> x2;
        switch (oper)
        {
            case '+':
                cout << "Результат равен " << x1 + x2 << endl;
                break;
            case '-':
                cout << "Результат равен " << x1 - x2 << endl;
                break;
            case '*':
                cout << "Результат равен " << x1 * x2 << endl;
                break;
            case '/':
                cout << "Результат равен " << x1 / x2 << endl;
                break;
            default:
                cout << "Введена неверная операция..." << endl;
                break;
        }
        do
        {
            cout << "Выполнить еще одну операцию (y/n):";
            cin >> answer;
            if (answer != 'y' && answer != 'n')
            {
                cout << "Вы ввели некорректный ответ... ";
            }
        } while (answer != 'y' && answer != 'n');
    } while (answer == 'y');
    cout << "Программа завершена..." << endl;
    return 0;
}