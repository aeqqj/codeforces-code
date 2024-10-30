#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j, lastdig, currdig, ncopy, ndiv;
    bool status;

    scanf("%d", &n);

    while (1) {
        n++;
        ncopy = n;
        status = false;
        for (i = 1; i <= 4; i++) {
            lastdig = ncopy % 10;
            ncopy /= 10;
            ndiv = ncopy;
            for (j = 1; j <= 4 - i; j++) {
                currdig = ndiv % 10;
                ndiv /= 10;
                if (currdig == lastdig) {
                    status = true;
                    break;
                } else {
                    continue;
                }
            }
            if (status == true) break;
        }
        if (status == false) break;
    }
    printf("%d", n);
}