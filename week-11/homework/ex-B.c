#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int a, b, c, d, e, f, g, h;
        scanf("%d %d %d %d %d %d %d %d",
              &a, &b, &c, &d, &e, &f, &g, &h);

        
        int overlap_x = (a <= g) && (e <= c);
       
        int overlap_y = (b <= h) && (f <= d);

        if (overlap_x && overlap_y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}