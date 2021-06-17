#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int digit;
    cout << "Введите число:";
    cin >> digit;
    for (int vertikal = 0; vertikal <= 20; vertikal++)
    {
        for (int gorizontal = 0; gorizontal <= 10; gorizontal++)
        {
            cout << setiosflags(ios::left) << setw(8) << digit * (vertikal * 10 + gorizontal);
        }
        cout << "\n";
    }
    return 0;
}