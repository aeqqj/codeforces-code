#include <stdio.h>

int main() {
    int n, i, counta = 0, countd = 0;
    
    scanf("%d", &n);

    char arr[n];

    scanf("%s", arr);

    for (i = 0; i < n; i++) {
        if (arr[i] == 'A') {
            counta++;
        } else {
            countd++;
        }
    }
    
    if (counta == countd) {
        printf("Friendship");
    } else if (counta > countd) {
        printf("Anton");
    } else {
        printf("Danik");
    }
}