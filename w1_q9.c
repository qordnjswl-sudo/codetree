#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char fir, sec;
	printf("_ A R _\n");
	printf("Enter any character to make a work that have meaning\n");
	printf("Enter first and last character: \n");
	scanf("%c %c", &fir, &sec);
	
	printf("This is your word %c A R %c", fir, sec);
	return 0;
}
