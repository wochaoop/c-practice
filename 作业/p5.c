#include <stdio.h>

int main() {
	int max(int x, int y);
	int a, b, c;
	printf("�������һ��������\n");
	scanf("%d", &a);
	printf("������ڶ���������\n");
	scanf("%d", &b);
	c = max(a, b);
	printf("��������������Ľϴ���Ϊ��%d\n", c);
	return 0;
}

int max(int x,int y) {
	int z;
	if (x > y) {
		z = x;
	}
	else {
		z = y;
	}
	return z;
}

