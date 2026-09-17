#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double a,b;
    cin >> a;
    double PI = 3.14159265358979323846;
    b = (4 * PI * a*a*a) / 3;
    cout << fixed << setprecision(3) << b << endl;
}