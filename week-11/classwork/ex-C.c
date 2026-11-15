#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int l = 1;
        for (int j = 1; j <= i; j++)
        {
            l = l * j;
        }
        sum = sum + l;
    }
    printf("%d\n", sum);
}