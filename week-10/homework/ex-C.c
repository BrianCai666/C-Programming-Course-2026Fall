#include <stdio.h>

int main(void)
{
    int a, n;
    int j = 0, l = 0;
    scanf("%d\n%d", &a, &n);

    for (int i = 1; i <= n; i++)
    {
        j = j * 10 + a;
        l = l + j;
    }

    printf("%d\n", l);
}