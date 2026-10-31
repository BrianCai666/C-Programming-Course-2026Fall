#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int n = 3 * pow(2, N-1) - 2;
    
    printf("%d\n", n);

    return 0;
}