#include <stdio.h>

int main() {
    int i, n, count = 0;

    scanf("%d", &n);

    for(;;) {
        if (n >= 100) {
            n -= 100;
            count++;
        } else if (n >= 20) {
            n -= 20;
            count++;
        } else if (n >= 10) {
            n -= 10;
            count++;
        } else if (n >= 5) {
            n -= 5;
            count++;
        } else if (n >= 1) {
            n -= 1;
            count++;
        }
        if (n == 0) break;
    }
    printf("%d", count);
}