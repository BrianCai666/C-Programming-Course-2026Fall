#include <stdio.h>

int main(void)
{
    int N;
    int count = 0;
    scanf("%d", &N);
    for (int i = 2; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }

        if (count == 2)
        {
            printf("%d\n", i);
        }

        count = 0;
    }

    return 0; 
}