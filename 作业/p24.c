#include <stdio.h>

int main() {
	int i = 3, j;
	j = ++i;
	printf("%d,%d\n", i, j);
	int a = 3, b;
	b = a++;
	printf("%d,%d\n", a, b);
	int c = 3;
	printf("%d\n", ++c);
	int d = 3;
	printf("%d\n", d++);
	printf("%d\n", d);
	return 0;
}
