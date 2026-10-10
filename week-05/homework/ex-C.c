#include <stdio.h>
#include <complex.h>

int main(void)
{
    float a, b, c;
    float complex x1, x2;
    float complex disc;
    scanf("%f %f %f", &a, &b, &c);

    disc = csqrtf(b * b - 4 * a * c);

    x1 = (-b + disc) / (2 * a);
    x2 = (-b - disc) / (2 * a);

    printf("x1=%.3f%c%.3fi x2=%.3f%c%.3fi\n",
           creal(x1), cimag(x1) >= 0 ? '+' : '-', fabsf(cimag(x1)),
           creal(x2), cimag(x2) >= 0 ? '+' : '-', fabsf(cimag(x2)));

    return 0;
}