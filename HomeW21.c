#include <stdio.h>

/*Написать программу, которая вычисляет время в минутах до
полудня или полуночи, в зависимости от того, что ближе к введенному
пользователем времени в часах(0 - 24) и минутах(0 - 60).*/

int main() {
	int hours;
	int minutes;
	printf ("Enter hours and minutes:\n");
		scanf_s("%d", &hours);
		scanf_s("%d", &minutes);
	printf ("%d:%d\n", hours, minutes);

	int T = hours * 60 + minutes;
	if (T == 0) {
		printf("0");
	}
	else if (T <= 720) {
		int a = 720 - T;
		printf("%d",a);
	}
	else {
		int b = 1440 - T;
		printf("%d", b);
	}
}