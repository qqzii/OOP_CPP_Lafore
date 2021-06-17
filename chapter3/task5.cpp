#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 20 - i; j <= 20; j++)
        {
            cout << " ";
        }
        for (int k = (i * 2) + 1; k < 40; k++)
        {
            cout << "X";
        }
        cout << "\n";
    }
    return 0;
}