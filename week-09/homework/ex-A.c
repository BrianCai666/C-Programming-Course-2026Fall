#include <stdio.h>

int main(void)
{
    int c;
    int letters = 0, digits = 0, spaces = 0, others = 0;

    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c == 'Z'))
        {
            letters++;
        }
        else if (c >= '0' && c <= '9')
        {
            digits++;
        }
        else if (c == ' ')
        {
            spaces++;
        }
        else
        {
            others++;
        }
    }

    printf("%d %d %d %d\n", letters, digits, spaces, others);

    return 0;
}