#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    long pop1 = 993259, pop2 = 11213444, pop3 = 125, pop4 = 69643;
    cout << setw(12) << "Города" << setw(12) << "Население" << "\n";
    cout << setw(12) << "Москва" << setfill('.') << setw(12) << pop1 << "\n";
    cout << setfill(' ') << setw(12) << "Минск" << setfill('.') << setw(12) << pop2 << "\n";
    cout << setfill(' ') << setw(12) << "Нью-Йорк" << setfill('.') << setw(12) << pop3 << "\n";
    cout << setfill(' ') << setw(12) << "Бишкек" << setfill('.') << setw(12) << pop4 << "\n\n";
    return 0;
}