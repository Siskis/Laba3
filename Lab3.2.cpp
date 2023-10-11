
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int s, res;
    float years;
    cout << "Введите сумму, которую хотите внести : " << endl;
    cin >> s;
    cout << "На какой срок сумма будет вложена" << endl;
    cin >> years;

    for (int n = 0; n <= years; n++)
    {
        res = s *(0.03) * years ;
    }
    cout <<"Сумма вклада станет : " << res + s;
    
    return 0;
}

