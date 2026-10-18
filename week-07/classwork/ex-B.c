#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("upper\n");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("lower\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("digit\n");
    }
    else 
    {
        printf("others\n");
    }

    return 0;
}