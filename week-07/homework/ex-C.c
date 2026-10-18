#include <stdio.h>

int main(void)
{
    int n, a, b;
    scanf("%d", &n);

    a = n % 2;
    if (a == 0)
    {
        b = n / 2;
    }
    else
    {
        b = n / 2 + 1;
    }

    printf("%d\n", b);

    return 0;
}