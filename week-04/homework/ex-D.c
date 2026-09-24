#include <math.h>
#include <stdio.h>

int main(void)
{
    float x1, x2, y1, y2, d;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("%.2f\n", d);
}