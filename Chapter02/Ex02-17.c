#include <stdio.h>

int main(void) {
	int score[10][5], i;
	
	for (i = 0; i < 10; i++) {
		printf("%d�� �л��� ����, ����, ���� ������ �Է��ϼ��� : ", i + 1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		score[i][4] = score[i][3] / 3;
	}

	printf("\n\n�й�\t ����\t ����\t ����\t ����\t ���\n");
	printf("************************************************\n");

	for (i = 0; i < 10; i++) {
		printf(" %d\t  %d\t  %d\t  %d\t %d\t  %d\n", i + 1, score[i][0], score[i][1], score[i][2], score[i][3], score[i][4]);
	}

	getch(); return 0;
}