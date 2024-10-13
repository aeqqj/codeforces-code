#include <stdio.h>
#include <math.h>

int main() {
    int arr[5][5];
    int i, j, x, y, move;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            scanf(" %d", &arr[i-1][j-1]);
        }
    }

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (arr[i-1][j-1] == 1) {
                x = j;
                y = i;
            }
        }
    }
    printf("%d", move = abs(3 - y) + abs (3 - x));
}