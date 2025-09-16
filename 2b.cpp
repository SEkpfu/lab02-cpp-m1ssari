#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a;
    cout << "a = ";
    cin >> a;
    if (a % 2 == 0)
        cout << a << " - четное";
    else
        cout << a << " - нечетное";
}