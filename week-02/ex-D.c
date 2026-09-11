#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    printf("%d %d %d %d %d %d", t / 100, t % 100 / 50, 
        t % 100 % 50 / 20,
         t % 100 % 50 % 20 / 10,
         t % 100 % 50 % 20 % 10 / 5,
         t % 100 % 50 % 20 % 10 % 5 / 1);
    return 0;
}