#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        int l = 0;
        scanf("%d", &n);

        for (int i = 1, j = 0; i < n; i++)
        {
            if (n % i == 0)
            {
                j = j + i;
            }
            l = j;
        }

        if (l == n)
        {
            printf("yes");
            for (int i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    printf(",%d", i);
                }
            }
            printf("\n");
        }

        if (l != n)
        {
            printf("no");
            for (int i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    printf(",%d", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}