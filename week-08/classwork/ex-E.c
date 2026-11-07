#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h;
    scanf("%d/%d/%d", &a, &b, &c);
    scanf("%d/%d/%d", &d, &e, &f);

    g = a + b + c;
    h = d + e + f;

    if ((g % 2) == (h % 2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}