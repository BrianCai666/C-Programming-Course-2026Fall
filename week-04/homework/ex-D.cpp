#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{
    float x1, x2, y1, y2, i, d;
    cin >> x1 >> y1 >> x2 >> y2;

    i = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    d = sqrt(i);
    cout << d << endl;
    return 0;
}