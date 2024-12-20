#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i, count = 0;
    char n, alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 
                         'g', 'h', 'i', 'j', 'k', 'l',
                         'm', 'n', 'o', 'p', 'q', 'r', 
                         's', 't', 'u', 'v', 'w', 'x', 
                         'y', 'z'};
    char* ptr;

    for (;;) {
        scanf("%c", &n);
        if (isalpha(n)) {
            if (strchr(alpha, n)) {
                ptr = strchr(alpha, n);
                *ptr = '0';
                count++;
            } 
        }

        if (n == '}') break;
    }

    printf("%d", count);
}
