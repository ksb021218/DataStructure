#include <stdio.h>
#include "05_04-1.h"
#include "05_04.h"

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("후위 표기식 : %s", express);

	result = evalPostfix(express);
	printf("\n\n연산 결과=> %d\n", result);

	getchar(); return 0;
}