#include <stdio.h>

int main(void)
{
    int n;
    float r;
    scanf("%d %f", &n, &r);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(j == 1)
            {
                printf("%.2f",r);
            }
            else
            {
                printf("%6.2f", r);
            }
        }
        printf("\n");
    }

    return 0;
}