#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);          
        int half = (n + 1) / 2;   
        int rows = 2 * half - 1;  
        for (int i = 0; i < rows; i++)
        {
            int spaces = (i < rows - 1 - i) ? i : (rows - 1 - i); 
            int stars = n - 2 * spaces;
            for (int j = 0; j < spaces; j++) printf(" ");
            for (int j = 0; j < stars; j++) printf("*");
            printf("\n");
        }

        if (t != T - 1) printf("\n");   
    }

    return 0;
}