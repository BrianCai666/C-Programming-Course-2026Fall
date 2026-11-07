#include <stdio.h>
#include <math.h>

double f(double x) {
    return x * x * x - 5 * x * x + 16 * x - 80;
}

double xpoint(double x1, double x2) {
    return (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
}

double root(double x1, double x2) {
    double x = xpoint(x1, x2);
    while (fabs(f(x)) >= 0.0001) {
        if (f(x) * f(x1) > 0)
            x1 = x;
        else
            x2 = x;
        x = xpoint(x1, x2);
    }
    return x;
}

int main() {
    double x1, x2;
    while (scanf("%lf %lf", &x1, &x2) == 2) {
        if (f(x1) * f(x2) > 0) {
            printf("reinput:\n");
            continue;
        }
        printf("%f\n", root(x1, x2));
        break;
    }
    return 0;
}