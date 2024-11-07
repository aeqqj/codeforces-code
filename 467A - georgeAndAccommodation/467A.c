#include <stdio.h>

int main() {
    int i, n, p, q, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &p, &q);

        if (p < q - 1) {
            count++;
        }
    }
    printf("%d", count);
}