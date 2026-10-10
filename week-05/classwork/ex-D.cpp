#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    cin >> x;

    if (x<10)
    {
        y = -1 * x;
        cout << y << endl;
    }
    else if (x >= 10)
    {
        y = 4 * x;
        cout << y << endl;
    }

    return 0;
}