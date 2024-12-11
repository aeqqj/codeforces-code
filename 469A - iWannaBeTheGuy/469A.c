#include <stdio.h>

int main() {
    int i, j, n, x, insert;

    scanf("%d", &n);

    int arr[n];

    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        scanf("%d", &insert);
        arr[insert] = insert;
    }
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        scanf("%d", &insert);
        arr[insert] = insert;
    }
    for (i = 1; i <= n; i++) {
        if (arr[i - 1] != i) {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
}