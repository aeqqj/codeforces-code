#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    char string[n];
    scanf("%s", string);
    for (i = 0; i < n; i++) {
        string[i] = toupper(string[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 65; j <= 90; j++) {
            if (!memchr(string, j, n)) {
                printf("NO");
                return 0;
            } 
        }
    }
    printf("YES");
}