#include <stdio.h>

int main(void) {
	int score[10][5], i;
	
	for (i = 0; i < 10; i++) {
		printf("%d번 학생의 국어, 영어, 수학 점수를 입력하세요 : ", i + 1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		score[i][4] = score[i][3] / 3;
	}

	printf("\n\n학번\t 국어\t 영어\t 수학\t 총점\t 평균\n");
	printf("************************************************\n");

	for (i = 0; i < 10; i++) {
		printf(" %d\t  %d\t  %d\t  %d\t %d\t  %d\n", i + 1, score[i][0], score[i][1], score[i][2], score[i][3], score[i][4]);
	}

	getch(); return 0;
}