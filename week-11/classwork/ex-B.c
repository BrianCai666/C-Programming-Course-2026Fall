#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        char c;
        scanf("%d %c", &n, &c);

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= 2*n - 2*i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < 2*i - 1; k++)
            {
                printf("%c", c);
            }
            printf("\n");
        }
    }

    return 0;
}