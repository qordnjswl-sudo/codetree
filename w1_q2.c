#include <stdio.h>

int main(void) {
	float PI = 3.14;
	int rad, hei;
	printf("Enter radius of rectangle: ");
	scanf_s("%d", &rad);
	printf("Enter height of rectangle: ");
	scanf_s("%d", &hei);
	printf("Volume of cone = %f", 1.0/3.0*PI*rad*rad*hei);
	return 0;
}
