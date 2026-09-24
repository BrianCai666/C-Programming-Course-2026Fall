#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, d, e, f, g, h, i;
    char colon1, colon2;
    cin >> a >> colon1 >> b >> colon2 >> c;
    cin >> d >> colon1 >> e >> colon2 >> f;

    g = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) / 3600;
    h = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) % 3600 / 60;
    i = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) % 3600 % 60;

    cout << g << colon1 << h << colon2 << i << endl;
    return 0;
}