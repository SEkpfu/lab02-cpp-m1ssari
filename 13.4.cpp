#include <iostream>
using namespace std;
int main()
{
    int x;
    setlocale(0, "");
    cout << "Введите количество яблок: ";
    cin >> x;
    cout << "ёжик нёс " << x;
    if ((11 <= x) && (x <= 19))
        cout << " яблок";
    else
    {
        if (x % 10 == 1)
            cout << " яблоко";
        else
        {
            if ((x % 10 >= 2) && (x % 10 <= 4))
                cout << " яблока";
            else
                cout << " яблок";
        }
    }
}

/*
11-19 яблок
на конце 1 яблоко
на конце 2-4 яблока
остальное яблок
*/