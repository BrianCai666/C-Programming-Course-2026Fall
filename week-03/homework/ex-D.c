#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    e = ((c * 60 + d) - (a * 60 + b)) / 60;
    f = ((c * 60 + d) - (a * 60 + b)) % 60;
    printf("%i %i\n", e, f);

}