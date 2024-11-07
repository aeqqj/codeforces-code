#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &k);
        for (j = 0; j <= n; j++) {
            if (k == j) {
                arr[j - 1] = i + 1; 
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}