#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    int x, y, z;
    cout << "Введите стороны треугольника\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    if (x + y > z && x + z > y && z + y > x)
        cout << "Треугольник существует";
    else
        cout << "Треугольник не существует";
}