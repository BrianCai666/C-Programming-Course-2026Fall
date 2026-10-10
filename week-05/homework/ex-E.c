#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("ALPHA\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}