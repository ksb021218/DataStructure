#include <stdio.h>
#include "05_04-1.h"
#include "05_04.h"

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("���� ǥ��� : %s", express);

	result = evalPostfix(express);
	printf("\n\n���� ���=> %d\n", result);

	getchar(); return 0;
}