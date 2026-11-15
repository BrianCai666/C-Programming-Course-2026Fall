#include <stdio.h>

int main(void)
{
    int LY[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int CY[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int y, m, d;
        int days = 0;
        scanf("%d/%d/%d", &y, &m, &d);

        if (y % 100 == 0)
        {
            if (y % 4 == 0)
            {
                for (int i = 0; i <= m - 2; i++)
                {
                    days += LY[i];
                }
                days = days + d;
            }
            else
            {
                for (int i = 0; i <= m - 2; i++)
                {
                    days += CY[i];
                }
                days = days + d;
            }
        }
        else
        {
            if (y % 4 == 0)
            {
                for (int i = 0; i <= m - 2; i++)
                {
                    days += LY[i];
                }
                days = days + d;
            }
            else
            {
                for (int i = 0; i <= m - 2; i++)
                {
                    days += CY[i];
                }
                days = days + d;
            }
        }
        printf("%d\n", days);
    }
}