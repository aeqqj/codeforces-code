#include <stdio.h>

int main() {
    int i, n, x, y, z, prob = 0;

    scanf("%d", &n);

    while (n >= 1) {
        scanf("%d %d %d", &x, &y, &z);

        if ((x == 1 && y == 1) || (y == 1 && z == 1) || (x == 1 && z == 1)){
            prob += 1;
        }
        --n;
    }
    printf("%d", prob);

    return 0;
}