#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    int x, y;
    cout << "Введите координаты\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int r1 = 2;
    int r2 = 4;
    if (pow(x, 2) + pow(y, 2) <= pow(r1, 2))
        cout << "Вы получили 10 очков";
    else if (pow(x, 2) + pow(y, 2) >= pow(r1, 2) && pow(x, 2) + pow(y, 2) <= pow(r2, 2))
        cout << "Вы получили 5 очков";
    else
        cout << "Вы получили 0 очков";
}