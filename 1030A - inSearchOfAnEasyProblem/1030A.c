#include <stdio.h>

int main() {
    int i, n, k = 0, con = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &k);
        if (k == 1) {
            con = 1;
        } 
    }

    if (con == 1) {
        printf("HARD");
    } else {
        printf("EASY");   
    }
}