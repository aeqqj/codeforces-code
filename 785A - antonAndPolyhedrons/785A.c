#include <stdio.h>

int main() {
    int n, i, count = 0;
    char letter[20];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", letter);
        if (letter[0] == 'T') {
            count += 4;
        } else if (letter[0] == 'C') {
            count += 6;
        } else if (letter[0] == 'O') {
            count += 8;
        } else if (letter[0] == 'D') {
            count += 12;
        } else if (letter[0] == 'I') {
            count += 20;
        }
    }

    printf("%d", count);
}