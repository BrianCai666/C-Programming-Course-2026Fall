#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (a < b)
    {
        max = b;
        if (b < c)
        {
            max = c;
        }
    }
    if (a < c)
    {
        max = c;
        if (c < b)
        {
            max = b;
        }
    }

    printf("%d\n", max);

    return 0;
}