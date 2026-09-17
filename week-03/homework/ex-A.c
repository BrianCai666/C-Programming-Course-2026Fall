#include <stdio.h>

int main()
{
    int q,s;
    scanf("%i %i", &q, &s);
    
    printf("%.3f%%\n", (double) s / q * 100);
}