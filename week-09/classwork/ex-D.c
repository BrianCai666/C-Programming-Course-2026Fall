#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    int a = m, b = n;
    
    
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    int gcd = a;
    
    
    int lcm = m * n / gcd;
    
    printf("%d %d\n", gcd, lcm);
    
    return 0;
}