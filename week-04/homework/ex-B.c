#include <stdio.h>
#define PI 3.14

int main(void)
{
    float r, h, C1, Sa, Sb, Va, Vb;
    scanf("%f %f", &r, &h);
    
    C1 = 2 * PI * r;
    Sa = PI * r * r;
    Sb = 4 * PI * r * r;
    Va = (4 * PI * r * r * r) / 3;
    Vb = PI * r * r * h;

    printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n", C1, Sa, Sb, Va, Vb);
}