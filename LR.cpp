#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    double L;
    cout << "Введіть відстань L у сантиметрах: ";
    cin >> L;

    // Спосіб 1
    int L1 = (int)L;
    int meters1 = L1 / 100;

    // Спосіб 2
    int L2 = static_cast<int>(L);
    int meters2 = L2 / 100;

    cout << "Спосіб 1 (стиль C):           " << meters1 << " цілих метрів" << endl;
    cout << "Спосіб 2 (static_cast, C++):  " << meters2 << " цілих метрів" << endl;

    system("pause");
    return 0;
}