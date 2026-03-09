#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, mon, bir;
	printf("enter year (XXXX): ");
	scanf("%d", &year);
	printf("enter month (in number): ");
	scanf("%d", &mon);
	printf("enter birth date: ");
	scanf("%d", &bir);

	printf("I was born in %d %d %d", year, mon, bir);
	return 0;
}
