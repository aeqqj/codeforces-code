#include <stdio.h>

int main() {
    int i, n, k, count = 0, oldn, newn;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        oldn = newn;
        scanf("%d", &newn);

        if (newn != oldn) count++;
    } 

    printf("%d", count);
}