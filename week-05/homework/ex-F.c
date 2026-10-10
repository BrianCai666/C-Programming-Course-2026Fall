#include <stdio.h>
#include <math.h>

int main(void)
{
    double distance;
    scanf("%lf", &distance);

    double walkTime = distance / 1.2;
    double bikeTime = 27 + 23 + distance / 3.0;
    double eps = 1e-8;

    if (fabs(walkTime - bikeTime) < eps)
    {
        printf("All\n");
    }
    else if (walkTime < bikeTime)
    {
        printf("Walk\n");
    }
    else
    {
        printf("Bike\n");
    }

    return 0;
}