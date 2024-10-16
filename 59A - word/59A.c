#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[101];
    int i, countlow = 0, counthigh = 0;

    scanf("%s", string);

    int len = strlen(string), arr[len];

    for (i = 0; i < len; i++) {
        arr[i] = (int)string[i];
        if (arr[i] > 90) {
            countlow++;
        } else if (arr[i] <= 90) {
            counthigh++;
        }
    }

    if (countlow == counthigh || countlow > counthigh) {
        for (i = 0; i < len; i++) {
            string[i] = tolower(string[i]);
        }
    } else {
        for (i = 0; i < len; i++) {
            string[i] = toupper(string[i]);
        }
    }
    printf("%s", string);
}