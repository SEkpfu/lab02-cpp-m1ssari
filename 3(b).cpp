#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    int x;
    cout << "x = ";
    cin >> x;
    if (x == 0)
        cout << "Ошибка";
    else if (x <= -2)
        cout << "f(x) = 0";
    else if (-2 < x <= 0)
        cout << "f(x) = " << pow(x, 2) + 4 * x + 5;
    else
        cout << "f(x) = " << 1.0 / pow(x, 2) + 4 * x - 5;
}
