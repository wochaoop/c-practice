#include <stdio.h>

int main() {
	int year1 = 1900;
	int year2 = 2008;
	int year3 = 2021;
	int k1, k2, k3;
	k1 = (year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0;
	k2 = (year2 % 4 == 0 && year2 % 100 != 0) || year2 % 400 == 0;
	k3 = (year3 % 4 == 0 && year3 % 100 != 0) || year3 % 400 == 0;
	if (k1) {
		printf("%d��������\n", year1);
	}
	else {
		printf("%d�겻������\n", year1);
	}
	if (k2) {
		printf("%d��������\n", year2);
	}
	else {
		printf("%d�겻������\n", year2);
	}
	if (k3) {
		printf("%d��������\n", year3);
	}
	else {
		printf("%d�겻������\n", year3);
	}
	return 0;
}


