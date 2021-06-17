#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double dollar, funt, frank, n_mark, yen;
    cout << "Введите сумму в долларах:";
    cin >> dollar;
    funt = dollar / 1.487;
    frank = dollar / 0.172;
    n_mark = dollar / 0.584;
    yen = dollar / 0.00955;
    cout << "\n\n" << setw(20) << "Валюта" << setw(16) << "Сумма\n"
         << setw(20) << "Фунт стерлинга" << setw(16) << funt << "\n"
         << setw(20) << "Франк" << setw(16) << frank << "\n"
         << setw(20) << "Немецкая марка" << setw(16) << n_mark << "\n"
         << setw(20) << "Японская йена" << setw(16) << yen << "\n";
    return 0;
}