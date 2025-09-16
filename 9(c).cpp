#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, y;
    cout << "Введите данные\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int r1 = 3;
    int r2 = 6;
    if (x >= 0)
        if ((pow(x, 2) + pow(y, 2) >= pow(r1, 2)) && (pow(x, 2) + pow(y, 2) <= pow(r2, 2)))
            cout << "Точка принадлежит заштрихованной области";
        else
            cout << "Точка не принадлежит заштрихованной области";
    else
        cout << "Точка не принадлежит заштрихованной области";
}