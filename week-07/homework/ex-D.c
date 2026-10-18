#include <math.h>
#include <stdio.h>

int main(void)
{
    float t[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &t[i]);
    }

    if ((t[0] + t [1] > t[2]) && (t[0] + t [2] > t[1]) && (t[2] + t [1] > t[0]))
    {
        if ((fabs(t[0] - t[1]) >= 0.001) && (fabs(t[0] - t[2]) >= 0.001) && (fabs(t[2] - t[1]) >= 0.001))
        {
            printf("普通三角形\n");
        }
        else if ((fabs(t[0] - t[1]) < 0.001) || (fabs(t[0] - t[2]) < 0.001) || (fabs(t[0] - t[1]) < 0.001))
        {
            if ((fabs(t[0] - t[1]) < 0.001) && (fabs(t[0] - t[2]) < 0.001) && (fabs(t[2] - t[1]) < 0.001))
            {
                printf("等边三角形\n");
            }
            else
            {
                if ((fabs(t[0] - t[1]) < 0.001))
                {
                    if ((fabs(t[0] * t[0] + t[1] * t[1] - t[2]) < 0.001))
                    {
                        printf("等腰直角三角形\n");
                    }
                }
                else if ((fabs(t[0] - t[2]) < 0.001))
                {
                    if ((fabs(t[0] * t[0] + t[2] * t[2] - t[1]) < 0.001))
                    {
                        printf("等腰直角三角形\n");
                    }
                }
                else if ((fabs(t[2] - t[1]) < 0.001))
                {
                    if ((fabs(t[2] * t[2] + t[1] * t[1] - t[0]) < 0.001))
                    {
                        printf("等腰直角三角形\n");
                    }
                }
                else 
                {
                    printf("等腰三角形\n");
                }
            }
        }
    }
    else
    {
        printf("等腰三角形\n");
    }

    return 0;
}