#include <iomanip>
#include <iostream>
#include <windows.h>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

enum etype { laborer, secretary, manager, accountant, executive, researcher, erorr };

struct employee
{
    etype position;
    date accepted;
    int number;
    float pension;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    employee one, two, three;
    char pos, ch = '/';

    cout << "Введите данные первого сотрудника\n";
    cout << "Номер:";
    cin >> one.number;
    cout << "Зарплата $:";
    cin >> one.pension;
    cout << "Должность:";
    cin >> pos;
    switch (pos)
    {
        case 'l':
            one.position = laborer;
            break;
        case 's':
            one.position = secretary;
            break;
        case 'm':
            one.position = manager;
            break;
        case 'a':
            one.position = accountant;
            break;
        case 'e':
            one.position = executive;
            break;
        case 'r':
            one.position = researcher;
            break;
        default:
            one.position = erorr;
            break;
    }
    cout << "Дата принятия: ";
    cin >> one.accepted.day >> ch >> one.accepted.month >> ch >> one.accepted.year;

    cout << "\nВведите данные второго сотрудника\n";
    cout << "Номер:";
    cin >> two.number;
    cout << "Зарплата $:";
    cin >> two.pension;
    cout << "Должность:";
    cin >> pos;
    switch (pos)
    {
        case 'l':
            two.position = laborer;
            break;
        case 's':
            two.position = secretary;
            break;
        case 'm':
            two.position = manager;
            break;
        case 'a':
            two.position = accountant;
            break;
        case 'e':
            two.position = executive;
            break;
        case 'r':
            two.position = researcher;
            break;
        default:
            two.position = erorr;
            break;
    }

    cout << "Дата принятия:";
    cin >> two.accepted.day >> ch >> two.accepted.month >> ch >> two.accepted.year;

    cout << "\nВведите данные третьего сотрудника\n";
    cout << "Номер:";
    cin >> three.number;
    cout << "Зарплата $:";
    cin >> three.pension;
    cout << "Должность:";
    cin >> pos;
    switch (pos)
    {
        case 'l':
            three.position = laborer;
            break;
        case 's':
            three.position = secretary;
            break;
        case 'm':
            three.position = manager;
            break;
        case 'a':
            three.position = accountant;
            break;
        case 'e':
            three.position = executive;
            break;
        case 'r':
            three.position = researcher;
            break;
        default:
            three.position = erorr;
            break;
    }

    cout << "Дата принятия:";
    cin >> three.accepted.day >> ch >> three.accepted.month >> ch >> three.accepted.year;

    cout << "\n\n";
    cout << setiosflags(ios::left) << setw(10) << "Номер" << setw(16) << "Зарплата $" << setw(16) << "Должность" << setw(24) << "Дата принятия на работу\n"
         << setw(10) << one.number << setw(16) << one.pension << setw(16) << one.position << one.accepted.day << "/" << one.accepted.month << "/" << one.accepted.year << "\n"
         << setw(10) << two.number << setw(16) << two.pension << setw(16) << two.position << two.accepted.day << "/" << two.accepted.month << "/" << two.accepted.year << "\n"
         << setw(10) << three.number << setw(16) << three.pension << setw(16) << three.position << three.accepted.day << "/" << three.accepted.month << "/" << three.accepted.year << "\n";
    return 0;
}