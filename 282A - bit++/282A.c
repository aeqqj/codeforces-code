#include <stdio.h>
#include <string.h>

int main () {
	
	int n, x = 0;
	char ops [4];
	
	scanf("%d\n", &n);
	
	if (1 <= n <= 150) {
		do {
			scanf("%s", ops);
			strupr(ops);

			if (strcmp(ops, "++X") == 0 || strcmp(ops, "X++") == 0) {
				++x;
			} else if (strcmp(ops, "--X") == 0 || strcmp(ops, "X--") == 0) {
				--x;
			} else {
				printf("Invalid");
				return 1;
			}
			--n;
		} while (n>0);
	}
	
	printf("%d", x);

	return 0;
}