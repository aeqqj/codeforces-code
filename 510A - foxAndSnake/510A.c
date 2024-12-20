#include <stdio.h>

int main() {
    int i, j, r, c, count = 1;

    scanf("%d %d", &r, &c);

    for (i = 1; i <= r; i++) {
        if (i % 2 != 0) {
            for (j = 1; j <= c; j++) {
                printf("#");
            }
            printf("\n");
        } else {
            for (j = 1; j <= c; j++) {
                if (count % 2 != 0 && j == c) printf("#");
                else if (count % 2 == 0 && j == 1) printf("#");
                else printf(".");
            }
            count++;
            printf("\n");
        }
    }
}