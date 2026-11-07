#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float x1, x2;
    float delta = b * b - 4 * a * c;

    if (a == 0 && b == 0 & c == 0)
    {
        printf("inf\n");
        return 0;
    }

    if (delta < 0)
    {
        printf("wa\n");
    }
    else
    {
        if (delta == 0)
        {
            x1 = ((-1) * b - sqrt(delta)) / (2 * a);
            printf("1 %.2f\n", x1);
        }
        else if (delta > 0)
        {
            x1 = ((-1) * b - sqrt(delta)) / (2 * a);
            x2 = ((-1) * b + sqrt(delta)) / (2 * a);
            printf("2 %.2f %.2f\n", x1, x2);
        }
    }
}