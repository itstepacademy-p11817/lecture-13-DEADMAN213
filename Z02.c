#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int delta = 0;
	int num = 9;
	int mid = 0;

	if (num % 2 == 0)
		mid = num / 2;
	else
		mid = num / 2 + 1;

	for (int i = 0; i < num; i++) {
		for (int j = 1; j <= num; j++) {
			if (j >= mid - delta && j <= mid + delta)
				printf("*");
			else
				printf(" ");
		}
		if (i < mid - 1)
			delta++;
		else
			delta--;
		printf("\n");
	}


	_getch();
	return 0;
}