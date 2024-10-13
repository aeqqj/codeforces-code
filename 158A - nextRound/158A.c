#include <stdio.h>

int main() {
    int n, k, i, passer = 0;
    scanf("%d %d", &n, &k);
    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < arr[k-1] || arr[i] == 0) {
            break;
        }
        passer++;
    }

    printf("%d", passer);

    return 0;
}