#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int funt;
    double new_money, shelling, pens;
    cout << "Введите количество фунтов:";
    cin >> funt;
    cout << "Введите количество шиллингов:";
    cin >> shelling;
    cout << "Введите количество пенсов:";
    cin >> pens;

    new_money = (pens / 12 + shelling) / 20 + funt;
    cout << "Старый формат: J" << funt << "." << shelling << "." << pens << "\n"
         << "Новый формат: J" << new_money << "\n";
    return 0;
}
