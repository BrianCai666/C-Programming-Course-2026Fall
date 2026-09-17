#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    cin >> a;

    b = a / 100;
    c = a % 100 /50;
    d = a % 100 % 50 / 20;
    e = a % 100 % 50 % 20 / 10;
    f = a % 100 % 50 % 20 % 10 / 5;
    g = a % 100 % 50 % 20 % 10 % 5 / 1;

    cout << b << " ";
    cout << c << " ";
    cout << d << " ";
    cout << e << " ";
    cout << f << " ";
    cout << g << endl;
}