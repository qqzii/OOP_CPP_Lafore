#include <iostream>
#include <windows.h>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance width;
    Distance length;
    Distance height;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Volume room;
    cout << "Введите размеры длины помещения\nФутов:";
    cin >> room.length.feet;
    cout << "Дюймов:";
    cin >> room.length.inches;
    cout << "\nВведите размеры ширины помещения\nФутов:";
    cin >> room.width.feet;
    cout << "Дюймов:";
    cin >> room.width.inches;
    cout << "\nВведите размеры высоты помещения\nФутов:";
    cin >> room.height.feet;
    cout << "Дюймов:";
    cin >> room.height.inches;
    float l = room.length.feet + room.length.inches / 12;
    float w = room.width.feet + room.width.inches / 12;
    float h = room.height.feet + room.height.inches / 12;
    float room_volume = l * w * h;
    cout << "\nПлощадь помещения в футах " << room_volume << "\nПрограмма завершена...\n\n";
    return 0;
}