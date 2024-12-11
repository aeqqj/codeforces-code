#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        sum += num;
    }

    printf("%.4f", sum / n);
}