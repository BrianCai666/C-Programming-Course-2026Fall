#include <iomanip>
#include <iostream>
using namespace std;

#define PI 3.14

int main(void)
{
    float r, h, C1, Sa, Sb, Va, Vb;
    cin >> r >> h;

    C1 = 2 * PI * r;
    Sa = PI * r * r;
    Sb = 4 * PI * r * r;
    Va = 4 * PI * r * r * r / 3;
    Vb = PI * r * r * h;

    cout << "C1=" << fixed << setprecision(2) << C1 << endl;
    cout << "Sa=" << fixed << setprecision(2) << Sa << endl;
    cout << "Sb=" << fixed << setprecision(2) << Sb << endl;
    cout << "Va=" << fixed << setprecision(2) << Va << endl;
    cout << "Vb=" << fixed << setprecision(2) << Vb << endl;
}