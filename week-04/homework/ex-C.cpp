#include <iostream>
using namespace std;

int main(void)
{
    int n, a, b, c, m;
    cin >> n;

    a = n / 100;
    b = n % 100 / 10;
    c = n % 100 % 10;
    m = c * 100 + b * 10 + a;

    cout << m << endl;
    return 0;
}