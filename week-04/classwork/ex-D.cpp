#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{
    float a, b;
    cin >> a;
    b = 5 * (a - 32) / 9;
    cout << "c="<< fixed << setprecision(2) << b << endl;
    return 0;
}