#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double persent, sum;
    int years;
    cout << "Введите начальный вклад:";
    cin >> sum;
    cout << "Введите число лет:";
    cin >> years;
    cout << "Введите процентную ставку:";
    cin >> persent;
    for (int i = years; i > 0; i--)
    {
        sum += (sum * persent / 100);
    }
    cout << "На выходе вы получите " << sum << "\n\n";
    return 0;
}