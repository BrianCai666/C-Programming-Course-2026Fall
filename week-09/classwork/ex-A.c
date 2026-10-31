#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    
    int sum = 0;   
    int term = 0;  
    
    for (int i = 1; i <= n; i++) {
        term = term * 10 + a;  
        sum += term;           
    }
    
    printf("%d\n", sum);
    return 0;
}