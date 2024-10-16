#include <stdio.h>

int main() {
    int i, x, y, z, sum = 0;

    scanf("%d %d %d", &x, &y, &z);

    for (i = 1; i <= z; i++) {
        sum += x * i;
    }
    sum -= y;
    if (sum <= 0) {
        printf("0");
    } else {
        printf("%d", sum);
    }
    
}