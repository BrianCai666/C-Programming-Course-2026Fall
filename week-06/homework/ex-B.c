#include <stdio.h>

int main(void)
{
    int n, a, b, c, d;
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        a = n / 100;
        b = n % 100 / 10;
        c = n % 100 % 10;
        d = (a * a * a) + (b * b * b) + (c * c * c);
        if (d == n)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("ERROR\n");
    }

    return 0;
}