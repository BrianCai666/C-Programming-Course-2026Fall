#include <stdio.h>

int main(void)
{
    float f, c;
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("c=%.2f\n", c);

    return 0;
}