#include <stdio.h>

int sum(int, int);

int main(void) {
	int n = 0, result = 0;

	printf("1���� ū ���ڸ� �Է��ϼ���: ");
	scanf("%d", &n);

	result = sum(n, result);

	printf("\n1���� %d������ �� = %d \n", n, result);

	getchar(); getchar();
	return 0;
}

int sum(int x, int result) {
	if (x == 0)
		return result;
	else {
		result += x;
		x--;
		sum(x, result); // ���ȣ��
	}
}