#include <stdio.h>
int main(void) {
	double d1 = 12.34, d2 = 56.78, temp;
	double* p1, * p2;
	p1 = &d1;
	p2 = &d2;

	printf("[before]\t p1: %f p2: %f \n", *p1, *p2);

	// °ª ±³È¯
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("[after]\t\t p1: %f p2: %f \n", *p1, *p2);

	getchar(); return 0;
}