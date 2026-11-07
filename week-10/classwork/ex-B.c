#include <stdio.h>


long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}


long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x, y, n;
        scanf("%lld %lld %lld", &x, &y, &n);
        
        
        long long px = x + 1;
        long long py = y + 1;
        long long L = lcm(px, py);
        
        
        long long days = n / L;
        
       
        long long ans = days * 36;
        
        printf("%lld\n", ans);
    }
    return 0;
}