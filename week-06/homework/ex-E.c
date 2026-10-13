#include <stdio.h>

int main(void)
{
    int n, m;
    char c;
    scanf("%d %c", &n, &c);

    if (c == 'y')
    {
        if (n <= 1000)
        {
            m = 13;
        }
        else
        {
            m = 13 + ((n - 1000 + 499) / 500) * 4;
        }
    }
    else if (c == 'n')
    {    
        if (n <= 1000)
        {
            m = 8;
        }
        else
        {
            m = 8 + ((n - 1000 + 499) / 500) * 4;
        }
    }

    printf("%d\n", m);
    return 0;
}