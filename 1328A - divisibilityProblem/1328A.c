#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double a, b, quotient;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &a, &b);
        quotient = ceil(a/b) * b;
        arr[i] = (quotient - a);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}