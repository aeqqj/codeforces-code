#include <stdio.h>

int main() {
    int h, n, i, w = 0;

    scanf("%d %d", &n, &h);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > h) {
            w += 2;
        } else {
            w += 1;
        }
    }
    printf("%d", w);
}