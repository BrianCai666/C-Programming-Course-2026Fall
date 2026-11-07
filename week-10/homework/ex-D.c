#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int a = 0; a < t; a++)
    {
        int l = 0;
        int n, k;
        scanf("%d %d", &n, &k);

        for (int i = 1, j = 1; i <= k; i++)
        {
            j = j * n;
            l = l + j;
        }
        printf("%d\n", l);
    }
    return 0;
}