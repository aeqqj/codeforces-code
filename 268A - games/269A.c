#include <stdio.h>

int main() {
    int i, j, n, count = 0;

    scanf("%d", &n);

    int arr[n], second_array[n];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &arr[i], &second_array[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] == second_array[j]) count++;
        }
    }

    printf("%d", count);
}