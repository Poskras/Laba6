#include <stdio.h>
int main() {
	//1
	int  years;
	printf ("Write years: ");
	scanf_s ("%d", &years);	
	printf ("%d\n", years);
	int remainder = years % 4;
	printf("%d\n\n", remainder);

	if (( years % 4 == 0 && years % 100 != 0) || years % 400 == 0) {
		printf("Year %d leap year\n", years);
	}
	else {
		printf("Year %d anleap year\n", years);
	}
		return 0;
}