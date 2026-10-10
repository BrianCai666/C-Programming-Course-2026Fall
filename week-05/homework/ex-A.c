#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int a[3], b[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        scanf("%d %d %d", &b[0], &b[1], &b[2]);

        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
                if (b[i] > b[j])
                {
                    int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        if ((a[0] <= b[0] && a[1] <= b[1] && a[2] <= b[2]) ||
    (b[0] <= a[0] && b[1] <= a[1] && b[2] <= a[2]))
{
    printf("yes\n");
} 
else 
{
    printf("no\n");
}
    }
    return 0;
}