#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a1, a2, b1, b2, a3, b3;
    cout << "Введите стороны 1-го прямоугольника \n";
    cout << "a1= ";
    cin >> a1;
    cout << "b1= ";
    cin >> b1;
    cout << "Введите стороны 2-го прямоугольника \n";
    cout << "a2= ";
    cin >> a2;
    cout << "b2= ";
    cin >> b2;
    double s1, s2, s3;
    s1 = a1 * b1;
    s2 = a2 * b2;
    s3 = a3 * b3;
    cout << "Введите стороны 3-го прямоугольника \n";
    cout << "a3= ";
    cin >> a3;
    cout << "b3= ";
    cin >> b3;
    int maks;
    s1 > s2 ? maks = s1 : maks = s2;
    s2 > s3 ? maks = s2 : maks = s3;
    s3 > s1 ? maks = s3 : maks = s1;
    cout << "max =  " << maks;
}
