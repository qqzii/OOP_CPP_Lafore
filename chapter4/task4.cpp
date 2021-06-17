#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

struct employee
{
    int number;
    float pension;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    employee worker1, worker2, worker3;
    worker1.number = 1;
    worker2.number = 2;
    worker3.number = 3;
    cout << "Введите пособие первого сотрудника $:";
    cin >> worker1.pension;
    cout << "Введите пособие второго сотрудника $:";
    cin >> worker2.pension;
    cout << "Введите пособие третьего сотрудника $:";
    cin >> worker3.pension;

    cout << "\n" << setiosflags(ios::left) << setw(14) << "Сотрудник №" << setw(20) << "Пособие в $" << "\n"
         << setw(14) << worker1.number << setw(20) << worker1.pension << "\n"
         << setw(14) << worker2.number << setw(20) << worker2.pension << "\n"
         << setw(14) << worker3.number << setw(20) << worker3.pension << "\n";
    cout << "\nПрограмма завершена...\n\n";
    return 0;
}