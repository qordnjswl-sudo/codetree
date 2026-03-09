#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	printf("Our university missed one character\n");
	printf("H_NYANG UNIVERSITY\n");
	printf("Please enter character to complete word:\n");
	scanf("%c", &ch);
	
	printf("Thank you for filling, this is your fulfill word\n");
	printf("H%cNYANG UNIVERSITY", ch);
	return 0;
}
