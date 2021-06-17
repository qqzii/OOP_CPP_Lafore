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

    unsigned long totalsec;
    Time enter_time;
    char ch = '.';
    cout << "Введите время в формате часы.минуты.секунды:";
    cin >> enter_time.hours >> ch >> enter_time.minutes >> ch >> enter_time.seconds;
    totalsec = enter_time.hours * 3600 + enter_time.minutes * 60 + enter_time.seconds;
    cout << "Суммарное колличество секунд: " << totalsec << "\nПрограмма завершена...\n\n";
    return 0;
}