#include <iostream>
using namespace std;

int main(void)
{
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        c = 'A' + (c - 'A' + 4) % 26;
    }
    else if (c >= 'a' && c <= 'z')
    {
        c = 'a' + (c - 'a' + 4) % 26;
    }

    cout << c << endl;

    return 0;
}