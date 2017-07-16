#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int num = 0;
	int dec = 1;
	printf("Input number: ");
	scanf_s("%d", &num);
	int temp = 0;
	int subnum = 0;

	while (num > 0) {
		int temp = num%10;
		if (temp != 3 && temp != 6) {
			subnum += temp*dec;
			dec *= 10;
		}
		num /= 10;
	}

	printf_s("Number: %d.\n", subnum);
	_getch();
	return 0;
}