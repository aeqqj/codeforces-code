#include <stdio.h>

void sort(int*, int);

int main() {
    int i, arr[3], size = 3;

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, size);

    printf("%d", (arr[1] - arr[0]) + (arr[2] - arr[1]));
}

void sort(int* arr, int n) {
    int i, j, temp, flag;

    for (i = 1; i <= n; i++) {
        flag = 1;
        for (j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1) break;
    }
}