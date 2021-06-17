#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int funt_1, shelling_1, pens_1, funt_2, shelling_2, pens_2, sum_funt = 0, sum_shelling = 0, sum_pens = 0, factor, rank = 0;
    char ch = '.', answer = 'y', operation;
    double residue = 0;

    cout << "Какую операцию вы желаете произвести:\n";
    cout << "Сложение двух сумм - введите +\n";
    cout << "Вычитание одной суммы из другой - введите -\n";
    cout << "Умножение суммы на число - введите *\n";
    do
    {
        cout << "Ввод операции:";
        cin >> operation;

        switch (operation)
        {
            case '+':
                sum_funt *= 0;
                sum_shelling *= 0;
                sum_pens *= 0;
                rank *= 0;

                cout << "Введите первую сумму: J";
                cin >> funt_1 >> ch >> shelling_1 >> ch >> pens_1;
                cout << "Введите вторую сумму: J";
                cin >> funt_2 >> ch >> shelling_2 >> ch >> pens_2;

                rank = (funt_1 * 240 + shelling_1 * 12 + pens_1) + (funt_2 * 240 + shelling_2 * 12 + pens_2);
                sum_funt = rank / 240;
                sum_shelling = (rank - sum_funt * 240) / 12;
                sum_pens = (rank - sum_funt * 240) - (sum_shelling * 12);

                cout << "Всего: J" << sum_funt << "." << sum_shelling << "." << sum_pens << endl;
                break;

            case '-':
                sum_funt *= 0;
                sum_shelling *= 0;
                sum_pens *= 0;
                rank *= 0;

                cout << "Введите первую сумму: J";
                cin >> funt_1 >> ch >> shelling_1 >> ch >> pens_1;
                cout << "Введите вторую сумму: J";
                cin >> funt_2 >> ch >> shelling_2 >> ch >> pens_2;

                if (funt_1 * 240 + shelling_1 * 12 + pens_1 == funt_2 * 240 + shelling_2 * 12 + pens_2)
                {
                    cout << "Суммы равны" << endl;
                }
                else
                {
                    if (funt_1 * 240 + shelling_1 * 12 + pens_1 > funt_2 * 240 + shelling_2 * 12 + pens_2)
                    {
                        rank = (funt_1 * 240 + shelling_1 * 12 + pens_1) - (funt_2 * 240 + shelling_2 * 12 + pens_2);
                        sum_funt = rank / 240;
                        sum_shelling = (rank - sum_funt * 240) / 12;
                        sum_pens = (rank - sum_funt * 240) - (sum_shelling * 12);
                        cout << "Разница между суммами: J" << sum_funt << "." << sum_shelling << "." << sum_pens;
                        cout << "    Первая сумма больше" << endl;
                    }
                    else
                    {
                        rank = (funt_2 * 240 + shelling_2 * 12 + pens_2) - (funt_1 * 240 + shelling_1 * 12 + pens_1);
                        sum_funt = rank / 240;
                        sum_shelling = (rank - sum_funt * 240) / 12;
                        sum_pens = (rank - sum_funt * 240) - (sum_shelling * 12);
                        cout << "Разница между суммами: J" << sum_funt << "." << sum_shelling << "." << sum_pens;
                        cout << "    Вторая сумма больше" << endl;
                    }
                }
                break;

            case '*':
                sum_funt *= 0;
                sum_shelling *= 0;
                sum_pens *= 0;

                cout << "Введите сумму: J";
                cin >> funt_1 >> ch >> shelling_1 >> ch >> pens_1;
                cout << "Введите число на которое хотите умножить свою сумму:";
                cin >> factor;

                rank = (funt_1 * 240 + shelling_1 * 12 + pens_1) * factor;
                sum_funt = rank / 240;
                sum_shelling = (rank - sum_funt * 240) / 12;
                sum_pens = (rank - sum_funt * 240) - (sum_shelling * 12);

                cout << "Всего: J" << sum_funt << "." << sum_shelling << "." << sum_pens << endl;
                break;

            case '/':
                sum_funt *= 0;
                sum_shelling *= 0;
                sum_pens *= 0;

                cout << "Введите сумму: J";
                cin >> funt_1 >> ch >> shelling_1 >> ch >> pens_1;
                cout << "Введите число на которое хотите поделить свою сумму:";
                cin >> factor;

                rank = (funt_1 * 240 + shelling_1 * 12 + pens_1) / factor;
                sum_funt = rank / 240;
                sum_shelling = (rank - sum_funt * 240) / 12;
                sum_pens = (rank - sum_funt * 240) - (sum_shelling * 12);

                cout << "Всего: J" << sum_funt << "." << sum_shelling << "." << sum_pens << endl;
                break;

            default:
                cout << "Вы ввели неверную операцию..." << endl;
                break;
        }
        cout << "Желаете продолжить (введите - y):";
        cin >> answer;
    } while (answer == 'y');

    cout << "Программа завершена...\n\n";
    return 0;
}