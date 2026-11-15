#include <stdio.h>

int main(void)
{
    long long M;
    scanf("%lld", &M);

    long long x = M;
    if (x < 0)
    {
        x = 0;
    }

    while (1)
    {
        if (x % 5 == 1 && x % 6 == 5 && x % 7 == 4 && x % 11 == 10)
        {
            printf("%lld\n", x);
            break;
        }
        x++;
    }

    return 0;
}