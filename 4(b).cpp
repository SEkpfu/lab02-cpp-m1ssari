#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int day, week;
    cout << "Введите дату: " << endl
         << "День месяца: ";
    cin >> day;
    cout << "Номер дня в неделе: ";
    cin >> week;
    if ((day == 13) && (week == 5 || week == 2))
        cout << "неудачный день :(";
    else if (day == 17 && week == 5)
        cout << "неудачный день :(";
}