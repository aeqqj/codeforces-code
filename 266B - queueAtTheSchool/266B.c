#include <stdio.h>

void swap(char*, char*);

int main() {
    int n, t, i, j;

    scanf("%d %d", &n, &t);

    char str[n];
    scanf("%s", str);

    for (i = 0; i < t; i++) {
        for (j = 0; j < n - 1; j++) {
            if (str[j] < str[j + 1]) {
                swap(&str[j], &str[j + 1]);
                j++;
            }
        }
    }
    printf("%s", str);
}

void swap(char* x, char* y) {
    char temp = *x;

    *x = *y;
    *y = temp;
}