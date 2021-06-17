#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    cout << setiosflags(ios::left)
         << setw(16) << "Фамилия" << setw(16) << "Имя" << setw(22) << "Адрес" << setw(18) << "Город"
         << setfill('_') << setw(72) << "\n" << setfill(' ')
         << "\n" << setw(16) << "Петров" << setw(16) << "Василий" << setw(22) << "Кленовая 16" << setw(18) << "Санкт-Петербург" << "\n"
         << setw(16) << "Иванов" << setw(16) << "Сергей" << setw(22) << "Осиновая 3" << setw(18) << "Находка" << "\n"
         << setw(16) << "Сидоров" << setw(16) << "Иван" << setw(22) << "Березовая 21" << setw(18) << "Калининград" << "\n\n";

    return 0;
}