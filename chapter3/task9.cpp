#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    unsigned int persons, places, variants = 1;
    cout << "Введите число гостей:";
    cin >> persons;
    cout << "Введите число рассадочных мест:";
    cin >> places;
    for (int i = persons; i > persons - places; i--)
    {
        variants *= i;
    }
    cout << "Число возможных рассадок равно " << variants << endl;
    cout << "Программа завершена...\n\n";
    return 0;
}