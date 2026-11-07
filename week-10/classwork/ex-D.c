#include <stdio.h>

double round2(double x) {
    return (int)((x * 1000 + 5) / 10) / 100.0;
}

int main() {
    double h;
    int n;
    scanf("%lf %d", &h, &n);

    double distance = round2(h);
    double height = round2(h / 2);

    for (int i = 2; i <= n; i++) {
        distance = round2(distance + 2 * height);
        height = round2(height / 2);
    }

    printf("%.2f\n%.2f\n", distance, height);
    return 0;
}