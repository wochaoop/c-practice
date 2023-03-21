#include <stdio.h>

int main() {
	int x = 1973, y = 2021;
	printf("请比较%d和%d的大小\n", x, y);
	printf("两个数中的最大数为：%d\n", x > y ? x : y);
	return 0;
}
