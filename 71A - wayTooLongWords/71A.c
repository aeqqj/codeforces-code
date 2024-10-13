#include <stdio.h>
#include <string.h>

int main() {
    int len, n, i;
    char word[101];

    scanf("%d", &n);

    if (1 <= n <= 100) {
        for (i = 0; i < n; i++) {

            scanf("%s", &word);

            len = strlen(word);

            if (len > 10) {
                printf("%c%d%c\n", word[0], len - 2, word[len-1]);
            } else {
                printf("%s\n", word);
            }
        }
    }
    return 0;
}