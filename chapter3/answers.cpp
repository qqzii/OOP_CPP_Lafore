#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    cout << "for\n" << endl;
    for (int i = 100; i < 111; i++)
    {
        cout << i << endl;
    }

    cout << "\nwhile\n" << endl;
    int j = 100;
    while (j < 111)
    {
        cout << j << endl;
        j++;
    }

    cout << "\ndo\n" << endl;
    int u = 100;
    do
    {
        cout << u << endl;
        u++;
    } while (u < 111);

    int age;
    cin >> age;
    if (age > 21)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    char ch;
    cin >> ch;
    switch (ch)
    {
        case 'y':
            cout << "Yes" << endl;
            break;
        case 'n':
            cout << "No" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }

    double speed1;
    cin >> speed1;
    cout << (speed1 > 55) ? 1 : 0;

    double speed, limit;
    cin >> speed >> limit;
    if (limit == 55 && speed > 55)
    {
        cout << "Превышение" << endl;
    }
    return 0;
}