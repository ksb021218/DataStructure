#include <stdio.h>
int main(void)
{
	int a[] = { 19, 2, 25, 92, 36, 45 }; // 배열 초기화
	int i, min, max;
	double sum = 0.0, average = 0.0, variance = 0.0;

	// (1)
	printf("배열에 저장된 원소들을 화면에 출력하시오. \n");
	for (i = 0; i < 6; i++)
		printf(" %d ", a[i]);

	// (2)
	min = a[0];
	max = a[0];
	for (i = 1; i < 6; i++) {
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}
	printf("\n\n배열 원소 중에서 최소값 : %d \n", min);
	printf("\n배열 원소 중에서 최대값 : %d \n", max);

	// (3)
	for (i = 0; i < 6; i++) {
		sum += a[i];
	}
	average = sum / 5;
	printf("\n배열 원소들의 평균을 구하시오 : %f \n", average);

	// (4)
	for (i = 0; i < 6; i++) {
		variance += (a[i] - average) * (a[i] - average); // 분산=(데이터값-평균)의 제곱의 합
	}
	printf("\n배열 원소들의 분산을 구하시오 : %f", variance);
	getchar(); // 또는 getch();
	return 0;
}