#include <stdio.h>

int main(void)
{
    int numbers = 3;
    int arr[numbers];

    for (int i = 0; i < numbers; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < numbers - 1; i++)
    {
        for (int j = 0; j < numbers - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < numbers; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}