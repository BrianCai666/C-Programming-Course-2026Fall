#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cout << t / 100 << " ";
    cout << t % 100 / 50 << " ";
    cout << t % 100 % 50 / 20 << " ";
    cout << t % 100 % 50 % 20 / 10 << " ";
    cout << t % 100 % 50 % 20 % 10 / 5 << " ";
    cout << t % 100 % 50 % 20 % 10 % 5 / 1 << " ";
    return 0; 
}