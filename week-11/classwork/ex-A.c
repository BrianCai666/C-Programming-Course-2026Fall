#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int n, m;
        int count = 0;
        int sum = 0;
        scanf("%d %d", &n, &m);

        for (int i = n; i <= m; i++)
        {
            int k;
            for (int j = 1, k_1 = 0; j <= i; j++)
            {
                if (i % j == 0)
                {
                    k_1++;
                    k = k_1;
                }
            }
            if (k == 2)
            {
                printf("%d ", i);
                sum = sum + i;
                count++;
            }
        }
        if (count == 0)
        {
            printf("\nNO\n");
        }
        else if (count != 0)
        {
            printf("\n%d\n", sum);
        }
    }
}