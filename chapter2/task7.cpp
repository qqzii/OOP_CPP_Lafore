#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double celsium, farengeit;
    cout << "Введите температуру по Цельсию:";
    cin >> celsium;
    farengeit = celsium * 9 / 5 + 32;
    cout << "Температура по Фаренгейту:" << farengeit << "\n\n";

    return 0;
}