
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int hei = 0;

    cout << "Введите высоту  равнобедренного треугольника: ";
    cin >> hei;

    for (int i = 0; i <= hei; i++)
    {
        for (int j = 1; j <= hei - i; j++)
        {
            cout << ' ';
        }

        for (int j = hei - 2 * i; j <= hei; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}