#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    double a;
    cout << "a = ";
    cin >> a;
    if (a >= -4)
        cout << (sqrt(1.0 + a * a)) / (fabs(a - 1.0) + 1.0);
    else
    {
        if (a > -10)
            cout << sqrt(fabs(a - 5.0));
        else
            cout << exp(1.0 / -a);
    }
}