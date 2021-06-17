#include <iostream>
#include <windows.h>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    point point1, point2, sum_point;
    cout << "Введиие координаты точки A:";
    cin >> point1.x >> point1.y;
    cout << "Введиие координаты точки B:";
    cin >> point2.x >> point2.y;
    sum_point.x = point1.x + point2.x;
    sum_point.y = point1.y + point2.y;
    cout << "Координаты точки A+B равны " << sum_point.x << " " << sum_point.y << endl;
    return 0;
}