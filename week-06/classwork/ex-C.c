#include <stdio.h>

int main(void)
{
    float a, b, c, d, e, f;

    scanf("%f %f\n%f %f\n%f %f", &a, &b, &c, &d, &e, &f);

    if ((e >= a && e <=c) && (f <= b && f >= d))
    {
        printf("IN\n");
    }
    else
    {
        printf("OUT\n");
    }

    return 0;
}