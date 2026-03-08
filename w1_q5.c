#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float unit;
	int item;
	char date[15];
	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &unit);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%s", date);
	printf("Item   Unit price  Purchase date\n");
	printf("%d    %.2f    %s", item, unit, date);
	return 0;
}
