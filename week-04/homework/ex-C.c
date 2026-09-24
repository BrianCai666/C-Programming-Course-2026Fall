#include <stdio.h>

int main(void)
{
    int n, a, b, c, m;
    scanf("%i", &n);
    a = n / 100;
    b = n % 100 / 10;
    c = n % 100 % 10;
    m = c * 100 + b * 10 + a;
    printf("%i\n", m);
}
