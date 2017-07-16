#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool twoDigits(int num) {
	int kol = 0;
	int temp = num;

	for (int i = 4; i > 0; i--) {
		int n = temp % 10;
		temp /= 10;
		int stemp = temp;
		for (int j = 0; j < i - 1; j++) {
			int sn = stemp % 10;

			if (n == sn) {
				kol++;
			}
			if (kol > 1) {
				return false;
			}

			stemp = stemp / 10;
		}
	}

	if (kol == 1) {
		printf("Number: %d.\n", num);
		return true;
	}
	return false;
}

int main() {
	int kol = 0;

	for (int i = 1000; i <= 9999; i++) {
		if (twoDigits(i)) {
			kol++;
		}
	}

	printf("Amount of numbers: %d.\n", kol);
	_getch();
	return 0;
}