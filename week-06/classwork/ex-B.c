#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n >= 90)
    {
        printf("A\n");
    }
    else if (n >= 89)
    {
        printf("B\n");
    }
    else if (n >= 70)
    {
        printf("C\n");
    }
    else if (n >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}