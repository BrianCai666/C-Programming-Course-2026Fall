#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 85)
        {
            printf("A");
        }
        else if (arr[i] < 85 && arr[i] >= 75)
        {
            printf("B");
        }
        else if (arr[i] < 75 && arr[i] >= 65)
        {
            printf("C");
        }
        else if (arr[i] < 65 && arr[i] >= 60)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }

        printf("\n");
    }

    return 0;
}