#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        c = 'A' + (c - 'A' + 4) % 26;
    }
    else if (c >= 'a' && c <= 'z')
    {
        c = 'a' + (c - 'a' + 4) % 26;
    }

    printf("%c\n", c);

    return 0;
}