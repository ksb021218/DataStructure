#include <stdio.h>

int fibonacci(int);			//�Ǻ���ġ ���� : f(n) = f(n-1) + f(n-2)

int main(void) {
	int i, n = 0;

	printf("�� �ڸ����� �Ǻ���ġ ������ ���ϰڽ��ϱ�? : ");
	scanf("%d", &n);

	printf("\n�Ǻ���ġ ���� %d��: ", n);

	for (i = 1; i <= n; i++)
		printf("%d ", fibonacci(i));

	getchar(); getchar();
	return 0;
}

int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2); // ���ȣ��
	}
}