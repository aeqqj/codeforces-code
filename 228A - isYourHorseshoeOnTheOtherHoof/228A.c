#include <stdio.h>

int main() {
    int i, j, arr[4], counter = 0;

    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0 + i; j < 4; j++) {
            if (arr[i] == arr[j] && i != j && (!arr[j] == 0)) {
                counter++;
                arr[j] = 0;
            }
        }
    }
    printf("%d", counter);  
}