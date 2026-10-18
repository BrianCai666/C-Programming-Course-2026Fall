#include <math.h>
#include <stdio.h>

int main(void)
{
    int h, r, v, dist;
    scanf("%d %d %d %d", &h, &r, &v, &dist);

    if (r < h)
    {
        printf("sad\n");
    }
    else
    {
        float d = dist - sqrt(r * r - h * h);
        float t = d / v;
        printf("%.2f\n", t);
    }

    return 0;
}