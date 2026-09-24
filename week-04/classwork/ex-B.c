#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i;
    scanf("%d:%d:%d", &a, &b, &c);
    scanf("%d:%d:%d", &d, &e, &f);

    g = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) / 3600;
    h = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) % 3600 / 60;
    i = ((a * 3600 + b * 60 + c) - (d * 3600 + e * 60 + f)) % 3600 % 60;

    printf("%d:%d:%d\n", g, h, i);
}
