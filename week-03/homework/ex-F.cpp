#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double a,b,c,e,f;
    cin >> a >> b >> c;

    e = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    f = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << fixed << setprecision(2) << "x1=" << e << " ";
    cout << fixed << setprecision(2) << "x2=" << f << endl;

}