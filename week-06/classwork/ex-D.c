#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h;
    scanf("%d%d%d%d-%d%d-%d%d", &a, &b, &c, &d, &e, &f, &g, &h);

    int y = a * 1000 + b * 100 + c * 10 + d;
    int m = e * 10 + f;
    int da = g * 10 + h;

    if ((y % m == 3) && (m % da == 3))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}