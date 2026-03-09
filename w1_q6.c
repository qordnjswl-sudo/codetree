#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dol;
	printf("Enter a dollar amount: ");
	scanf("%d", &dol);
	printf("$20 bills: %d\n", dol / 20);
	dol %= 20;
	printf("$10 bills: %d\n", dol/10);
	dol %= 10;
	printf("$5 bills: %d\n", dol/5);
	dol %= 5;
	printf("$1 bills: %d", dol);

	return 0;
}
