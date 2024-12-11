#include <stdio.h>
#include <string.h>

int main() {
    char str[101], str1[101];
    int i;

    scanf("%s %s", str, str1);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != str1[i]) {
            printf("1");
        } else {
            printf("0");
        }
    }
}