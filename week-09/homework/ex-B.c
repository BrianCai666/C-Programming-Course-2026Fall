#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int a, b, c;
        scanf("%d-%d-%d", &a, &b, &c);

        if ((a % b == 3) && (b % c == 3))
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}