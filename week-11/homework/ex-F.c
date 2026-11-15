#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);

        double e = 0.001;

        if (a + b <= c + e || a + c <= b + e || b + c <= a + e) {
            printf("no triangle\n");
            continue;
        }

        int iso = 0, right = 0, equi = 0;

        if (fabs(a - b) < e && fabs(b - c) < e) {
            equi = 1;
        } else if (fabs(a - b) < e || fabs(a - c) < e || fabs(b - c) < e) {
            iso = 1;
        }

        if (fabs(a * a + b * b - c * c) < e ||
            fabs(a * a + c * c - b * b) < e ||
            fabs(b * b + c * c - a * a) < e) {
            right = 1;
        }

        if (equi) {
            printf("equilateral triangle, ");
        } else if (iso && right) {
            printf("isosceles right triangle, ");
        } else if (iso) {
            printf("isosceles triangle, ");
        } else if (right) {
            printf("right triangle, ");
        } else {
            printf("general triangle, ");
        }

        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.1f\n", area);
    }
    return 0;
}