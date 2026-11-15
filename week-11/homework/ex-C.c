#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
     int c;
    long long result = 0;
    int negative = 0;

    while ((c = getchar()) == ' ' || c == '\t' || c == '\n') {
    }

    if (c == '-') {
        negative = 1;
        c = getchar();
    } else if (c == '+') {
        c = getchar();
    }

    while (c != EOF) {
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else {
            break;
        }
        result = result * 16 + digit;
        c = getchar();
    }

    if (negative) {
        result = -result;
    }

    printf("%lld\n", result);
    }
    return 0;
}