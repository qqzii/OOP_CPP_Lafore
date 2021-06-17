#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double persent, sum, vklad;
    int years = 0;
    cout << "Введите начальный вклад:";
    cin >> vklad;
    cout << "Введите процентную ставку:";
    cin >> persent;
    cout << "Введите желаемую сумму:";
    cin >> sum;
    if (vklad > sum)
    {
        cout << "Сумма вклада больше желаемой...\n";
    }
    else
    {
        while (vklad < sum)
        {
            vklad += (vklad * persent / 100);
            years++;
        }
        if (years == 1 || years == 11 || years == 21 || years == 31 || years == 41 || years == 51 || years == 61 || years == 71 || years == 81)
        {
            cout << "Вам понадобится: " << years << " год\n";
        }
        else
        {
            cout << "Вам понадобится: " << years << " года\n";
        }
        cout << "Программа завершена...\n\n";
        return 0;
    }
}