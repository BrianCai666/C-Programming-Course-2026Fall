#include <stdio.h>

int main(void)
{
    int a, b, c;
    char op;
    scanf("%d%c%d=%d", &a, &op, &b, &c);

    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') 
    {
        printf("%d%c%d=%d error op\n", a, op, b, c);
        return 0;
    }

    int result;
    switch (op)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': if (b != 0) result = a / b; break;
        case '%': if (b != 0) result = a % b; break;
    }

    if (result == c)
    {
        printf("%d%c%d=%d correct\n", a, op, b, c);
    }
    else
    {
        printf("%d%c%d=%d wrong\n", a, op, b, c);
    }

    return 0;
}