#include <stdio.h>

int main() {
	char c1 = 'a', c2 = 'b', c3 = 'c';
	char c4 = '\101', c5 = '\116';
	char c6 = '\x30';
	printf("H\tI\b\bJ	k");
	printf("a%cb%c\t c%c\t abc\n", c1, c2, c3);
	printf("c4=%c c5=%c\n", c4, c5);
	printf("c6=%c\n", c6);
}

