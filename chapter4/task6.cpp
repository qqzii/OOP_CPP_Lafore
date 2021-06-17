#include <iostream>
#include <windows.h>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    etype position;
    char ch;
    cout << "Введите первую букву должности:";
    cin >> ch;
    switch (ch)
    {
        case 'l':
            position = laborer;
            break;
        case 's':
            position = secretary;
            break;
        case 'm':
            position = manager;
            break;
        case 'a':
            position = accountant;
            break;
        case 'e':
            position = executive;
            break;
        case 'r':
            position = researcher;
            break;
        default:
            cout << "Некоректный ввод...\n";
            break;
    }
    switch (position)
    {
        case 0:
            cout << "Ваша должность - laborer";
            break;
        case 1:
            cout << "Ваша должность - secretary";
            break;
        case 2:
            cout << "Ваша должность - manager";
            break;
        case 3:
            cout << "Ваша должность - accountant";
            break;
        case 4:
            cout << "Ваша должность - executive";
            break;
        case 5:
            cout << "Ваша должность - researcher";
            break;
    }
    cout << "\nПрограмма завершена...\n\n";
    return 0;
}