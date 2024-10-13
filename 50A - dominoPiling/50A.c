#include <stdio.h>

int main() {
    int n, m, amount;

    scanf("%d %d", &n, &m);

    amount = n * m;
    amount = amount/2;

    printf("%d", amount);
}