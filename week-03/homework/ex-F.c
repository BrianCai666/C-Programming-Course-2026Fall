#include <math.h>
#include <stdio.h>

int main()
{
    double a,b,c,e,f;
    scanf("%lf %lf %lf", &a, &b, &c);

    e = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    f = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("x1=%.2lf x2=%.2lf\n", e, f);
}