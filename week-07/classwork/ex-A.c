#include <stdio.h>

int main(void)
{
    int a, b, c, n;
    char d;
    scanf("%d%c%d=%d", &a, &d, &b, &c);

    if (d != '+' && d != '-' && d != '*' && d != '/' && d != '%')
    {
        printf("%d%c%d=%d error op\n", a, d, b, c);
    }
    else 
    {
        if (d == '+')
        {
            n = a + b;
            if (n == c)
            {
                printf("%d%c%d=%d correct\n", a, d, b, c);
            }
            else
            {
                printf("%d%c%d=%d wrong\n", a, d, b, c);
            }
        }
        else if (d == '-')
        {
            n = a - b;
            if (n == c)
            {
                printf("%d%c%d=%d correct\n", a, d, b, c);
            }
            else
            {
                printf("%d%c%d=%d wrong\n", a, d, b, c);
            }
        }
        else if (d == '*')
        {
            n = a * b;
            if (n == c)
            {
                printf("%d%c%d=%d correct\n", a, d, b, c);
            }
            else
            {
                printf("%d%c%d=%d wrong\n", a, d, b, c);
            }
        }
        else if (d == '/')
        {
            n = a / b;
            if (n == c)
            {
                printf("%d%c%d=%d correct\n", a, d, b, c);
            }
            else
            {
                printf("%d%c%d=%d wrong\n", a, d, b, c);
            }
        }
        else if (d == '%')
        {
            n = a % b;
            if (n == c)
            {
                printf("%d%c%d=%d correct\n", a, d, b, c);
            }
            else
            {
                printf("%d%c%d=%d wrong\n", a, d, b, c);
            }
        }
    }

    return 0;
}