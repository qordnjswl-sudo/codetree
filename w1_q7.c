#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float loa, rat, pay, mon;
	printf("Enter amount of loan: ");
	scanf("%f", &loa);
	printf("Enter interest rate: ");
	scanf("%f", &rat);
	printf("Enter monthly payment: ");
	scanf("%f", &pay);

	mon = rat * 0.01 / 12;
	printf("balance remaining after first payment: %.2f\n", loa - pay + loa*mon);
	loa = loa - pay + loa * mon;
	printf("balance remaining after second payment: %.2f ", loa - pay + loa*mon);
	return 0;
}
