
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    double check;

    cout << "[1] саженец в метры\n [2] дюйм в сантиметров\n [3] фут в метры\n [4] драхм в грамм\n[5] унций в грамм\n [6] фунт в килограммы\n [7] аршин в метры\n[8] золотник в грамм\n [9] дюйм в миллиметры\n ";
    cin >> num;
    switch (num) 
    {
    case 1:
        system("cls");

        cin >> check;
        cout << check << " сажень равна  = " << check * 2.1366 << " метров " << endl;
        break;
    
    case 2:
        system("cls");
        cin >> check;
        cout << check <<" дюйм равен  = " << check * 2.5 << " сантиметров " << endl;
        break;

    case 3:
        system("cls");
        cin >> check;
        cout << check << " фут равен  = " << check * 0.3048 << " метров " << endl;
        break;

    case 4:
        system("cls");
        cin >> check;
        cout << check << " драхм равен  = " << check * 3.7325 << " грамм " << endl;
        break;

    case 5:
        system("cls");
        cin >> check;
        cout << check << " унций равен  = " << check * 29.86 << " грамм " << endl;
        break;

    case 6:
        system("cls");
        cin >> check;
        cout << check << " фунт равен  = " << check * 0.40951 << " килограмм " << endl;
        break;

    case 7:
        system("cls");
        cin >> check;
        cout << check << " аршин равен  = " << check * 0.7112 << " метров " << endl;
        break;

    case 8:
        system("cls");
        cin >> check;
        cout << check << " золотник равен  = " << check * 4.2657 << " грамм " << endl;
        break;

    case 9:
        system("cls");
        cin >> check;
        cout << check << " дюйм равен  = " << check * 25.3995 << " миллиметров " << endl;
        break;
    default:
        cout << "Выберите вариант систем исчесления " << endl;
        break;

    }
    return 0;
}
    

