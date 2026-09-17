#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
    double a,b;
    scanf("%lf", &a);
    b = (4 * PI * a*a*a) / 3;
    printf("%.3lf\n", b);
}