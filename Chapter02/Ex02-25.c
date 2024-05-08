#include <stdio.h>

int sum(int, int);

int main(void) {
	int n = 0, result = 0;

	printf("1보다 큰 숫자를 입력하세요: ");
	scanf("%d", &n);

	result = sum(n, result);

	printf("\n1부터 %d까지의 합 = %d \n", n, result);

	getchar(); getchar();
	return 0;
}

int sum(int x, int result) {
	if (x == 0)
		return result;
	else {
		result += x;
		x--;
		sum(x, result); // 재귀호출
	}
}