#include <stdio.h>

int main(void) {
	int i;
	char s[5][30];

	for (i = 0; i < 5; i++) {
		printf("%d��° ���ڿ��� �Է��ϼ���(���ڿ� �ִ���� 30) : ", i + 1);
		scanf("%s", &s[i]);
	}

	printf("\n-------------------------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d��° ���ڿ� ��� : %s \n", i + 1, s[i]);
	}

	getchar(); // �Ǵ� getch();
	return 0;
}