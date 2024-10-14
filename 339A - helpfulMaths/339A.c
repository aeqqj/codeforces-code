#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*, const void*);

int main() {
    char arr[100];
    int i;

    scanf("%99s", arr);

    int len = strlen(arr), half = (len/2) + 1;

    qsort(arr, len, sizeof(char), compare);

    printf("%c", arr[half-1]);
    for (i = half; i < len; i++) {
        printf("+%c", arr[i]);
    }
}

int compare(const void* x, const void* y) {
    return (*(char*)x - *(char*)y);
}