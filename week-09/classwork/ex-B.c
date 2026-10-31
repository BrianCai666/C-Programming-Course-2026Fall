#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int count = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 3 != 0 && i % 4 != 0 && i % 7 == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}