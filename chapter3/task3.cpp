#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    unsigned long enter = 0;
    char ch;

    cout << "Введите число:" << endl;

    while ((ch = _getche()) != '\r')
    {
        enter = enter * 10 + ch - '0';
        cout << "\nВы ввели число: " << enter << endl;
    }
    return 0;
}