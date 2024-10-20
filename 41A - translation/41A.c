#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[101], rev[101];
    bool con = false;

    scanf("%s %s", str, rev);
    int len = strlen(str), len1 = strlen(rev), i;
    
    if (len == len1) {
        for (i = 0; i < len; i++) {
            if (str[i] == rev[len - i - 1]) { 
                con = true;
                continue;
            } else {
                con = false;
                break;
            }
        }
    }
    (con == true) ? printf("YES") : printf("NO");
}