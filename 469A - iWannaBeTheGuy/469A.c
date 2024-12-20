#include <stdio.h>

int main() {
    int i, n, check = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        arr[i] = 0;
    }

    scanf("%d", &n);
    int arrX[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arrX[i]);
        arr[arrX[i] - 1] = arrX[i];
    }
    
    scanf("%d", &n);
    int arrY[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arrY[i]);
        arr[arrY[i] - 1] = arrY[i];
    }

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] != i + 1) check = 1;
    }

    if (check == 1) {
        printf("Oh, my keyboard!");
    } else {
        printf("I become the guy.");
    }
}