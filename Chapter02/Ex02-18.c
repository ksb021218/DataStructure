#include <stdio.h>
int main(void)
{
	int a[] = { 19, 2, 25, 92, 36, 45 }; // �迭 �ʱ�ȭ
	int i, min, max;
	double sum = 0.0, average = 0.0, variance = 0.0;

	// (1)
	printf("�迭�� ����� ���ҵ��� ȭ�鿡 ����Ͻÿ�. \n");
	for (i = 0; i < 6; i++)
		printf(" %d ", a[i]);

	// (2)
	min = a[0];
	max = a[0];
	for (i = 1; i < 6; i++) {
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}
	printf("\n\n�迭 ���� �߿��� �ּҰ� : %d \n", min);
	printf("\n�迭 ���� �߿��� �ִ밪 : %d \n", max);

	// (3)
	for (i = 0; i < 6; i++) {
		sum += a[i];
	}
	average = sum / 5;
	printf("\n�迭 ���ҵ��� ����� ���Ͻÿ� : %f \n", average);

	// (4)
	for (i = 0; i < 6; i++) {
		variance += (a[i] - average) * (a[i] - average); // �л�=(�����Ͱ�-���)�� ������ ��
	}
	printf("\n�迭 ���ҵ��� �л��� ���Ͻÿ� : %f", variance);
	getchar(); // �Ǵ� getch();
	return 0;
}