#include <stdio.h>

void reverse(char* p, char* q);

int main(void) {
	char s1[100], s2[100], * p, * q;
	int i;

	printf("���ڿ� �Է� : ");
	scanf("%s", s1);

	p = s1; // �Է� ���ڿ��� ����� �迭 s1�� ������ p ����
	q = s2; // ���� ���ڿ��� ������ �迭 s2�� ������ q ����
	
	reverse(p, q);
	printf("���� ���ڿ� : %s \n", s2);
	
	getchar(); getchar(); return 0;
}

void reverse(char* rp, char* rq) {
	char* start = rp; // ������ ����

	while (*rp != '\0')
		rp++; // ������ rp�� ���ڿ� s1�� ������ ��ġ�� �̵�
	for (rp--; rp >= start; rp--, rq++)
		*rq = *rp; // ���ڿ��� �������� ������ rq�� ������(�迭 s2)���� ����
	*rq = '\0'; // �迭 s2�� ���ڿ� ���� �����ϱ� ���� '\0' ����
}