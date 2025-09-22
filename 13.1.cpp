#include <iostream>
using namespace std;
int main()
{
    int d, m;
    cout << "Введите день: ";
    cin >> d;
    cout << "Введите месяц: ";
    cin >> m;
    cout << "Завтра: " << endl;
    switch (m)
    {
    case 1:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 2:
        switch (d)
        {
        case 28:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 3:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 4:
        switch (d)
        {
        case 30:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 5:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 6:
        switch (d)
        {
        case 30:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 7:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 8:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 9:
        switch (d)
        {
        case 30:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 10:
        switch (d)
        {
        case 31:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 11:
        switch (d)
        {
        case 30:
            m++;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    case 12:
        switch (d)
        {
        case 31:
            m = 1;
            d = 1;
            break;
        default:
            d++;
            break;
        }
        break;
    default:
        cout << "неверный месяц";
    }
    cout << d << "." << m;
}