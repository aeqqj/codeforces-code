#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, flag;
    char str1[100], str2[100], str3[100];
    
    scanf("%s %s %s", str1, str2, str3);

    if (strlen(str1) + strlen(str2) > 100) {
        printf("NO");
        exit(0);
    }
    strcat(str1, str2);
    
    int len = strlen(str3);
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (str1[i] == str3[j]) {
                str3[j] = '0';
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
        if (flag == 1) break;
    }
    if (flag == 0) printf("YES");
    else printf("NO");
}