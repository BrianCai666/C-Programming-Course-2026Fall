#include <stdio.h>

#define MAXT 300005

int blink[MAXT];
int f[MAXT];

int main(void)
{
    int M, S, T;
    scanf("%d %d %d", &M, &S, &T);

    int magic = M, dist = 0;
    blink[0] = 0;
    for (int i = 1; i <= T; i++)
    {
        if (magic >= 10)
        {
            magic -= 10;
            dist += 60;
        }
        else
        {
            magic += 4;
        }
        blink[i] = dist;
    }

    f[0] = 0;
    for (int i = 1; i <= T; i++)
    {
        if (f[i] >= S)
        {
            printf("Yes\n%d\n", i);
            return 0;
        }
    }
    printf("No\n%d\n", f[T]);
    return 0;
}