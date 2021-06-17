#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int choose;
    cout << "Введите 1 для перевода шкалы Цельсия в шкалу Фаренгейта\n"
         << "Введите 2 для перевода шкалы Фаренгейта в шкалу Цельсия\n"
         << "Ввод:";
    cin >> choose;
    switch (choose)
    {
        case 1:
            double temp_c;
            cout << "Введите температуру по Цельсию:";
            cin >> temp_c;
            cout << "Это " << temp_c * 9 / 5 + 32 << " по Фаренгейту";
            break;
        case 2:
            double temp_f;
            cout << "Введите температуру по Фаренгейту:";
            cin >> temp_f;
            cout << "Это " << (temp_f - 32) * 5 / 9 << " по Цельсию";
            break;
        default:
            cout << "Введено некорректное значение";
            break;
    }
    cout << "\nПрограмма завершена...\n\n";
    return 0;
}