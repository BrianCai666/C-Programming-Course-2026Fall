#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);

    c = a % b;
    d = b % a;

    if (c == 0 && d != 0)
    {
        printf("1\n");
    }
    else if (d == 0 && c != 0)
    {
        printf("2\n");
    }
    else if (c == 0 && d == 0)
    {
        printf("3\n");
    }
    else if (c != 0 && d != 0)
    {
        printf("4\n");
    }

    return 0;
}