#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    unsigned long fact = 1;
    unsigned int numb;
    do
    {
        cout << "Введите число для вычисления его факториала:";
        cin >> numb;
        if (numb == 0)
        {
            cout << "Завершение программы...";
            break;
        }
        for (int j = numb; j > 0; j--)
        {
            fact *= j;
        }
        cout << "Факториал введенного числа равен " << fact << endl;
        fact = 1;
    } while (numb != 0);
    return 0;
}