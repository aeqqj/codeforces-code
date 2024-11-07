#include <stdio.h>

int main() {
    long long int n, i, sum = 0;

    scanf("%lld", &n);

    if (n % 2 == 0) {
        sum = n/2;
    } else {
        sum = ((n-1) / 2) - n;
    }
    
    printf("%lld", sum);
}