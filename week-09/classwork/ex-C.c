#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 1~a 的和
    long long s1 = (long long)a * (a + 1) / 2;

    // 1~b 的平方和
    long long s2 = (long long)b * (b + 1) * (2 * b + 1) / 6;

    // 1~c 的倒数和
    double s3 = 0.0;
    for (int i = 1; i <= c; i++) {
        s3 += 1.0 / i;
    }

    double total = s1 + s2 + s3;
    printf("%.2f\n", total);

    return 0;
}