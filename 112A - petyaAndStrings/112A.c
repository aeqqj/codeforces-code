#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i;
    char str1[101], str2[101];

    scanf("%s %s", str1, str2);

    for (i = 0; i < sizeof(str1); i++) {
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }

    if (strcmp(str1, str2) == 0) {
        printf("0");
    } else if (strcmp(str1, str2) == -1) {
        printf("-1");
    } else {
        printf("1");
    }
    return 0;
}