#include <stdio.h>

int main() {
    int i, j, k, n, c, count;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &c);
        arr[i] = (c - 1) / 2;
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}