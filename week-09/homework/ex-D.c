#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int temp = n;
    int digits = 0;
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }
    
    printf("%d\n", digits);

    int div = 1;
    for (int i = 1; i < digits; i++)
    {
        div *= 10;
    }

    temp = n;
    for (int i = 0; i < digits; i++)
    {
        printf("%d", temp / div);
        if (i < digits - 1)
        {
            printf(" ");
        }
        temp %= div;
        div /= 10;
    }
    printf("\n");

    temp = n;
    int rev = 0;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("%d\n", rev);

    return 0;
}