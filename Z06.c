#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void drawCircle(int radius) {
	int kof = 1;//коэффициент растяжения вдоль оси Х, при 2 больше похоже на круг
	for (int x = radius; x >= -radius; x--) {
		double dy = 0.0;
		double temp = modf(sqrt(radius*radius - x*x)*kof, &dy);//разделяем на дробную и целую часть
		int y = (int)dy;
		if (temp >= 0.50)//округляем в большую сторону
			y++;

		//double y = (int)sqrt(radius*radius - x*x)*kof;

		for (int j = -kof*radius; j <= kof*y; j++) {
			if (j >= -y && j <= y) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}


int main() {
	drawCircle(11);
	_getch();
	return 0;
}