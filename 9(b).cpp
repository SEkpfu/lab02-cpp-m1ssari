#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    int x, y;
    cout << "Введите данные\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int r = 5;
    if (y >= 0)
        (pow(x, 2) + pow(y, 2) <= pow(r, 2)) ? cout << "Точка принадлежит заштрихованной области" : cout << "Точка не принадлежит заштрихованной области";
    else
        cout << "Точка не принадлежит заштрихованной области";
}