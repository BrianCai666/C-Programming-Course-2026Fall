#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int m = 0; 
        
        for (int i = a; i <= b; i++)
        {
            int l = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    l++;
                }
            }

            if (l == 2)
            {
                int original = i;
                int temp = i;
                int reversed = 0;

                while (temp > 0)
                {
                    reversed = reversed * 10 + temp % 10;
                    temp /= 10;
                }

                if (original == reversed)
                {
                    m++;
                    printf("%d\n", i);
                }
            }
        }

        if (m == 0)
        {
            printf("Not found\n");
        }
    }
    return 0; 
}