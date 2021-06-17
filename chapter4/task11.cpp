#include <iostream>
#include <windows.h>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Time one, two, sum;
    char ch = '.';
    unsigned long totalsec;
    cout << "Введите первое время:";
    cin >> one.hours >> ch >> one.minutes >> ch >> one.seconds;
    cout << "Введите второе время:";
    cin >> two.hours >> ch >> two.minutes >> ch >> two.seconds;
    totalsec = (one.hours + two.hours) * 3600 + (one.minutes + two.minutes) * 60 + (one.seconds + two.seconds);
    sum.hours = totalsec / 3600;
    sum.minutes = (totalsec % 3600) / 60;
    sum.seconds = totalsec - (sum.hours * 3600 + sum.minutes * 60);
    cout << "Суммарное время " << sum.hours << "." << sum.minutes << "." << sum.seconds << "\nПрограмма завершена...\n\n";
    return 0;
}