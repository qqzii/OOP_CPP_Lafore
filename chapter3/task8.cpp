#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int funt_1, shelling_1, pens_1, funt_2, shelling_2, pens_2, sum_funt = 0, sum_shelling = 0, sum_pens = 0;
    char ch = '.', answer = 'y';

    do
    {
        sum_funt *= 0;
        sum_shelling *= 0;
        sum_pens *= 0;

        cout << "Введите первую сумму: J";
        cin >> funt_1 >> ch >> shelling_1 >> ch >> pens_1;
        cout << "Введите вторую сумму: J";
        cin >> funt_2 >> ch >> shelling_2 >> ch >> pens_2;
        sum_pens = pens_1 + pens_2;
        if (sum_pens > 11)
        {
            sum_pens -= 12;
            sum_shelling += 1;
        }
        sum_shelling += shelling_1 + shelling_2;
        if (sum_shelling > 19)
        {
            sum_shelling -= 20;
            sum_funt += 1;
        }
        sum_funt += funt_1 + funt_2;
        cout << "Всего: J" << sum_funt << "." << sum_shelling << "." << sum_pens << endl;
        cout << "Желаете продолжить(y/n):";
        cin >> answer;
    } while (answer == 'y');

    cout << "Программа завершена...\n\n";
    return 0;
}