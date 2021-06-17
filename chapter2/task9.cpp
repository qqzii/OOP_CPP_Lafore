#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int summ1, summ2, first1_digit, first2_digit, second1_digit, second2_digit;
    cout << "Введите числитеть первой дроби:";
    cin >> first1_digit;
    cout << "Введите знаменатель первой дроби:";
    cin >> first2_digit;
    cout << "Введите числитеть второй дроби:";
    cin >> second1_digit;
    cout << "Введите знаменатель второй дроби:";
    cin >> second2_digit;

    summ1 = first1_digit * second2_digit + first2_digit * second1_digit;
    summ2 = first2_digit * second2_digit;

    cout << "Первая дробь:" << first1_digit << "/" << first2_digit << "\n";
    cout << "Вторая дробь:" << second1_digit << "/" << second2_digit << "\n";
    cout << "Сумма этих дробей равна:" << summ1 << "/" << summ2 << "\n\n";
    return 0;
}
