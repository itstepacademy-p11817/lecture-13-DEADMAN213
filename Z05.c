#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

//Количество цифр в числе
int numberDigits(int num) {
	long long dec = 10;
	int kol = 0;

	do {
		num /= 10;
		kol++;
	} while (num != 0);

	return kol;
}

//Сумма и среднее арифметическое
int sumDigits(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

//Количество нулей
int amountZero(int num) {
	int kol = 0;
	while (num != 0) {
		int rem = num % 10;
		if (rem == 0) {
			kol++;
		}
		num /= 10;
	}

	return kol;
}


int main() {
	int num = 0;

	printf("Menu:\n");
	printf("0 - Exit.\n");
	printf("1 - Amount of digits in number.\n");
	printf("2 - To count a sum of digits and average.\n");
	printf("3 - To count a amount of zeros in number.\n");

	int ch = 0;
	do {
		printf("Input choice: ");
		scanf_s("%d", &ch);
		if (ch != 0) {
			printf("Input number: ");
			scanf_s("%d", &num);
		}

		int sum = 0;
		switch (ch) {
		case 1: 
			printf("In number %d digits.\n", numberDigits(num));
			break;

		case 2: 
			printf("Sum of digits: %d.\nAverage: %.2f.\n", sumDigits(num), (double)sumDigits(num) / numberDigits(num));
			break;

		case 3:
			printf("Amount of zeros in number %d.\n", amountZero(num));
			break;
		}

	} while (ch != 0);
	
	_getch();
	return 0;
}