#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int dec = 10;
	int res[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		srand(time(NULL));
		int num1 = rand() % dec;
		int num2 = rand() % dec;

		int kol = 0;
		do {
			printf("Input composition of %d and %d: ", num1, num2);
			int answ = 0;
			scanf_s("%d", &answ);

			if (answ == num1*num2) {
				printf("Correct!\n");
				break;
			}
			else {
				printf("Uncorrect\n");
				kol++;
			}

		} while (true);

		res[i] = kol;
		dec *= 10;
	}

	int mid = 0;
	for (int i = 0; i < 3; i++)
		mid += res[i];

	printf("Your statistic: %d.\n", mid / 3);

	_getch();
	return 0;
}