#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float funt;
    int pounds, shilling, mini_funt;
    cout << "Введите число десятичных фунтов: J";
    cin >> funt;
    pounds = static_cast<int>(funt);
    shilling = static_cast<int>((funt - pounds) * 20);
    mini_funt = static_cast<int>(((funt - pounds) * 20 - shilling) * 12);
    cout << "Эквивалентная сумма в старой системе: J" << pounds << "." << shilling << "." << mini_funt << "\n\n";

    return 0;
}