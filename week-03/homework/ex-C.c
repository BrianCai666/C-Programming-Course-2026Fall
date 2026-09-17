#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%i", &a);

    b = a / 100;
    c = a % 100 /50;
    d = a % 100 % 50 / 20;
    e = a % 100 % 50 % 20 / 10;
    f = a % 100 % 50 % 20 % 10 / 5;
    g = a % 100 % 50 % 20 % 10 % 5 / 1;
    printf("%i %i %i %i %i %i\n", b, c, d, e, f, g);
}