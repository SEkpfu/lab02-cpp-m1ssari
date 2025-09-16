#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    int dr, mr, yr, dn, mn, yn;
    int let, ost;
    cout << "Введите дату рождения\nдень рождения: ";
    cin >> dr;
    cout << "месяц рождения: ";
    cin >> mr;
    cout << "Введите год рождения:";
    cin >> yr;
    cout << "Введите сегодняшнюю дату\nдень: ";
    cin >> dn;
    cout << "месяц: ";
    cin >> mn;
    cout << "год: ";
    cin >> yn;
    let = yn - yr;
    if (mn < mr || (mn == mr && dn <= dr))
        let = let - 1;
    ost = let % 10;
    if (ost == 1 && (let < 11 || let > 20))
        cout << "Вам " << let << " год";
    else if ((ost == 2 || ost == 3 || ost == 4) && (let < 11 || let > 14))
        cout << "Вам " << let << " года";
    else
        cout << "Вам " << let << " лет";
}