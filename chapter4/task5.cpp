#include <iostream>
#include <windows.h>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    date enter = { 1, 1, 1 };
    char ch = '/';

    cout << "Введите дату в формате день/месяц/год:";
    cin >> enter.day >> ch >> enter.month >> ch >> enter.year;

    if (enter.day < 1 || enter.month < 1 || enter.year < -4500)
    {
        cout << "Некорректный ввод...\n";
    }
    else
    {
        if (enter.month > 12)
        {
            cout << "Несуществующий месяц...\n";
        }
        else
        {
            if (enter.year > 35000)
            {
                cout << "Будущее?..\n";
            }
            else
            {
                if ((enter.month == 1 || enter.month == 3 || enter.month == 5 || enter.month == 7 || enter.month == 8 || enter.month == 10 || enter.month == 12) && enter.day > 31)
                {
                    cout << "В этом месяце 31 день...\n";
                }
                else
                {
                    if ((enter.month == 4 || enter.month == 6 || enter.month == 9 || enter.month == 11) && enter.day > 30)
                    {
                        cout << "В этом месяце 30 дней...\n";
                    }
                    else
                    {
                        if ((enter.month == 2 && enter.day > 28) || (enter.month == 2 && enter.day > 29 && enter.year % 4 == 0))
                        {
                            cout << "В феврале всего 28 дней в обычный год и 29 дней в високосный год...\n";
                        }
                        else
                        {
                            cout << "\nВы ввели дату: " << enter.day << "/" << enter.month << "/" << enter.year << "\n";
                            if (enter.year % 4 == 0)
                            {
                                cout << "Это високосный год\n";
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "Программа завершена...\n\n";
    return 0;
}