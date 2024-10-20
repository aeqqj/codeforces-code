#include <stdio.h>

int main() {
    int n, i, off, on, count = 0, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &off, &on);
        count = (count - off) + on;
        if (count > max) {
            max = count;
        }
    }
    printf("%d", max);
}