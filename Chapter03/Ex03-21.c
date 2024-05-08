#include <stdio.h>
#define MAX(a,b)((a>b)?a:b)
#define MAX_COEF 50

typedef struct polynomial {
	int degree;
	int ceof[MAX_COEF];
} POLY;

POLY initpoly();
POLY multpoly(POLY a, POLY b);
void print(POLY p);

void main() {
	POLY A, B, C;
	A = initpoly();
	B = initpoly();

	C = multpoly(A, B);

	printf("A : "); print(A);
	printf("B : "); print(B);
	printf("C : "); print(C);
}

void print(POLY p) {
	int i;
	int degree = p.degree;
	for (i = 0; i <= p.degree; i++) {
		printf("%3dx^%d", p.ceof[i], degree--);
	}
	printf("\n");
}

POLY initpoly() {
	static int num = 65;
	int i;
	POLY p;
	printf("%c의 다항식의 차수 : ", num);
	scanf("%d", &p.degree);

	printf("%c의 다항식의 계수 : ", num);
	for (i = p.degree; i >= 0; i--) {
		scanf("%d", &p.ceof[p.degree - i]);
	}
	num++;

	return p;
}

POLY multpoly(POLY a, POLY b) {
	POLY c;
	int a_index = 0;
	int b_index = 0;
	int c_index = 0;
	int a_degree = a.degree, b_degree = b.degree;
	c.degree = MAX(a.degree, b.degree);

	while (a_index <= a.degree && b_index <= b.degree) {
		if (a_degree > b_degree) {
			c.ceof[c_index++] = a.ceof[a_index++];
			a_degree--;
		}
		else if (a_degree == b_degree) {
			c.ceof[c_index++] = a.ceof[a_index++] + b.ceof[b_index++];
			a_degree--;
			b_degree--;
		}
		else {
			c.ceof[c_index++] = b.ceof[b_index++];
			b_degree--;
		}
		return c;
	}
}