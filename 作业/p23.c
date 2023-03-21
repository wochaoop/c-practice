#include <stdio.h>

int main() {
	int a1 = 5, a2 = -5, b1 = 3, b2 = -3;
	int i = 2, j = 4;
	int x1 = a1 % b1;
	int x2 = a2 % b1;
	int y1 = a1 % b2;
	int y2 = a2 % b2;
	int z = j % i;
	printf("%d %% %d=%d\n", a1, b1, x1);
	printf("%d %% %d=%d\n", a2, b1, x2);
	printf("%d %% %d=%d\n", a1, b2, y1);
	printf("%d %% %d=%d\n", a2, b2, y2);
	printf("%d %% %d=%d\n", j, i, z);
	return 0;
}
