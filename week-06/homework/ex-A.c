#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;

    printf("Menu:A(dd) D(elete) S(ort) Q(uit),select one:\n");
    scanf(" %c", &c);

    if (c == 'A')
    {
        printf("data is added\n");
    }
    else if (c == 'D')
    {
        printf("data is deleted\n");
    }
    else if (c == 'S')
    {
        printf("data is sorted\n");
    }
    else if (c == 'Q')
    {
        exit(0);
    }

    return 0;
}