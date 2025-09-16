#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a;
    cout << "a = ";
    cin >> a;
    if (a == 0)
        cout << a << " - нуль";
    else if (a < 0)
        cout << a << " - отрицательное число";
    else if (a > 0)
        cout << a << " - положительное число";
}