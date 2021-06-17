#include <iostream>
#include <windows.h>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    sterling sum;
    double sum_enter;
    cout << "Введите сумму в новой системе: J";
    cin >> sum_enter;
    sum.pounds = static_cast<int>(sum_enter);
    sum.shillings = static_cast<int>((sum_enter - static_cast<int>(sum_enter)) * 20);
    sum.pence = round((((sum_enter - static_cast<int>(sum_enter)) * 20) - static_cast<int>((sum_enter - static_cast<int>(sum_enter)) * 20)) * 12);
    cout << "Сумма в старой системе : J" << sum.pounds << "." << sum.shillings << "." << sum.pence << "\nПрограмма завершена...\n\n";
    return 0;
}