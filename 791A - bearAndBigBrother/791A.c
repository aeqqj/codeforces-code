#include <stdio.h>

int main() {
    int x, y, count = 0;

    scanf("%d %d", &x, &y);

    while (x <= y) {
        x *= 3;
        y *= 2;
        count++;
    }
    printf("%d", count);
}