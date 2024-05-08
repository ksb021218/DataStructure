#include <stdio.h>

int fibonacci(int);			//피보나치 수열 : f(n) = f(n-1) + f(n-2)

int main(void) {
	int i, n = 0;

	printf("몇 자리까지 피보나치 수열을 구하겠습니까? : ");
	scanf("%d", &n);

	printf("\n피보나치 수열 %d개: ", n);

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
		return fibonacci(n - 1) + fibonacci(n - 2); // 재귀호출
	}
}