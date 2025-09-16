#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int r, a, b, z, c;
    cout << "Введите радиус торта: ";
    cin >> r;
    cout << "Введите 1 сторону коробки: ";
    cin >> a;
    cout << "Введите 2 сторону коробки: ";
    cin >> b;
    cout << "Введите высоту торта: ";
    cin >> z;
    cout << "Введите высоту коробки: ";
    cin >> c;
    if (r + r < a || r + r < b || z < c)
        cout << "Торт помещается в коробку";
    else
        cout << "Торт не помещается в коробку";
}