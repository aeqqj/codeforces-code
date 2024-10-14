#include <stdio.h>

int main() {
    char colors[100];
    int len, i, count = 0;

    scanf("%d", &len);
    scanf("%s", &colors);

    for (i = 0; i < len; i++) {
        if (colors[i] == colors[i + 1]) {
            count++;
        }
    }
    printf("%d", count);
}