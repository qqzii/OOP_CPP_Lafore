#include <iostream>
#include <windows.h>
using namespace std;

struct phone
{
    int country_kode;
    int operator_kode;
    int number;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    phone mine, ur;

    mine.country_kode = 375;
    mine.operator_kode = 29;
    mine.number = 3481101;

    cout << "Введите телефон: +";
    cin >> ur.country_kode >> ur.operator_kode >> ur.number;
    cout << "Мой номер +" << mine.country_kode << " " << mine.operator_kode << " " << mine.number;
    if (mine.operator_kode == 29 || mine.operator_kode == 44)
    {
        cout << "    (A1)" << endl;
    }
    else
    {
        if (mine.operator_kode == 33)
        {
            cout << "    (МТС)" << endl;
        }
        else
        {
            cout << "    (неизвестный оператор)" << endl;
        }
    }
    cout << "Ваш номер +" << ur.country_kode << " " << ur.operator_kode << " " << ur.number;
    if (ur.operator_kode == 29 || ur.operator_kode == 44)
    {
        cout << "    (A1)" << endl;
    }
    else
    {
        if (ur.operator_kode == 33)
        {
            cout << "    (МТС)" << endl;
        }
        else
        {
            cout << "    (неизвестный оператор)" << endl;
        }
    }
}