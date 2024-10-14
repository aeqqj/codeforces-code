#include <stdio.h>
#include <math.h>

int main() {
    float n;

    scanf("%f", &n);
    
    n = ceil(n / 5);

    printf("%.0f", n);
}