#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        double x, y;
        scanf("%lf", &x);

        if (x < 0)
        {
            y = fabs(x);
            printf("%.2lf\n", y);
        }
        else if (x >= 0 && x < 1)
        {
            y = sin(x);
            printf("%.2lf\n", y);
        }
        else if (x >= 1 && x < 5)
        {
            y = sqrt(x * x * x + x);
            printf("%.2lf\n", y);
        }
        else 
        {
            y = 2 * x + 10;
            printf("%.2lf\n", y);
        }
    }
    return 0;
}