#include <stdio.h>

void displayRound(int);

int main() {
    int i, j, n;
    
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 1000 != 0 || arr[i] % 100 != 0 || arr[i] % 10 != 0) displayRound(arr[i]);
        else {
            printf("1\n");
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}

void displayRound(int num) {
    int n, i = 1, arr[5] = {0, 0, 0, 0, 0}, count = 0;
    while (num) {
        n = num % 10;
        if (n > 0) {
            arr[count] = n * i;
            count++;
        }
        i *= 10;
        num /= 10;
    }
    printf("%d\n", count);
    for (i = 0; i < 5; i++) {
        if (arr[i] > 0) printf("%d ", arr[i]);
    }
}