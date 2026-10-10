#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d", &x);

    if (x<10)
    {
        y = -1 * x;
        printf("%d\n", y);
    }
    else if (x >= 10)
    {
        y = 4 * x;
        printf("%d\n", y);
    }

    return 0;
}