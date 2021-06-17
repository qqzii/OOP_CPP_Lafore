#include <iostream>
using namespace std;

int main()
{
    double fut, gallon;
    cout << "Enter the number of gallons: ";
    cin >> gallon;
    fut = gallon / 7.481;
    cout << "This is equivalent to " << fut << " feet." << endl;

    return 0;
}