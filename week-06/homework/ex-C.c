#include <stdio.h>

int main(void)
{
    int a, b, r;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    
    
    if (c == '/' && b == 0)
    {
        printf("Divided by zero!\n");
    }
    else if ((c == '+') || (c == '-') || (c == '*') || (c == '/'))
    {
        if (c == '+')
        {
            r = a + b;
        }
        else if (c == '-')
        {
            r = a - b;
        }
        else if (c == '*')
        {
            r = a * b;
        }
        else if (c == '/')
        {
            r = a / b;
        }
        printf("%d\n", r);
    }
    else 
    {
        printf("Invalid operator!\n");
    }

    return 0;
}