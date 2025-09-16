#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b;
    char znak;
    cout << "Введите выражение в формате 'a знак b'" << endl;
    cout << "a = ";
    cin >> a;
    cout << "знак (+,-,*) = ";
    cin >> znak;
    cout << "b = ";
    cin >> b;
    switch (znak)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    default:
        cout << "Неверные данные";
        break;
    }
}