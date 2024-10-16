#include <stdio.h>

int main() {
    long long n;
    int i = 0;
    
    scanf("%lld", &n);
    
    while (n != 0) {
        if (n % 10 == 7 || n % 10 == 4) {
            i++;
        }
        n /= 10;
    }

    if (i == 7 || i == 4) {
        printf("YES");
    } else {
        printf("NO");
    }
}