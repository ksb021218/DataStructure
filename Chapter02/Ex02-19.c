#include <stdio.h>

int main(void) {
	int i;
	char s[5][30];

	for (i = 0; i < 5; i++) {
		printf("%d번째 문자열을 입력하세요(문자열 최대길이 30) : ", i + 1);
		scanf("%s", &s[i]);
	}

	printf("\n-------------------------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d번째 문자열 출력 : %s \n", i + 1, s[i]);
	}

	getchar(); // 또는 getch();
	return 0;
}