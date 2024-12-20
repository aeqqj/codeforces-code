#include <stdio.h>

int main() {
    int i, j, n, seconds, min = 0, max = 0, prevNum = 0;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prevMax = arr[0], prevMin = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > prevMax) {
            max = i;
            prevMax = arr[i];
        }
        if (arr[i] <= prevMin) {
            min = i;
            prevMin = arr[i];
        }
    }
    if (max > min) max--;
    printf("max: %d, min: %d", max, min);
    printf("\n%d", (--n - min) + max);
}