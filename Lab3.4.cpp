#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int chislo = 0;
    int suma = 0;
    int num = 0;

    cout << "Введите число  \n";


    do {
        int i;
        cout << "Число " << i + 1 << "=";
        cin >> num;

        if (num) {
            i++;
            suma += num;
        }
    } while (num);
    int i;
    cout << "Количество введенных чисел " << i + 1 << endl;
    cout << "Общяя сумма" << suma << endl;
    cout << "Среднее арифметическое " << suma / (i + 1) << endl;

    return 0;
}