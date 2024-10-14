#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*, const void*);

int main() {
    char user[101];
    int i, len, count = 0;

    scanf("%s", user);

    len = strlen(user);

    qsort(user, len, sizeof(char), compare);

    for (i = 0; i < len; i++) {
        if (user[i] != user[i + 1]) {
            count++;
        }
    }
    
    if (count % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}

int compare(const void* x, const void* y) {
    return (*(char*)x - *(char*)y);
}