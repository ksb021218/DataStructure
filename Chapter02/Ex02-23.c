#include <stdio.h>

void reverse(char* p, char* q);

int main(void) {
	char s1[100], s2[100], * p, * q;
	int i;

	printf("문자열 입력 : ");
	scanf("%s", s1);

	p = s1; // 입력 문자열이 저장된 배열 s1에 포인터 p 연결
	q = s2; // 역순 문자열을 저장할 배열 s2에 포인터 q 연결
	
	reverse(p, q);
	printf("역순 문자열 : %s \n", s2);
	
	getchar(); getchar(); return 0;
}

void reverse(char* rp, char* rq) {
	char* start = rp; // 시작점 저장

	while (*rp != '\0')
		rp++; // 포인터 rp를 문자열 s1의 마지막 위치로 이동
	for (rp--; rp >= start; rp--, rq++)
		*rq = *rp; // 문자열을 역순으로 포인터 rq의 참조값(배열 s2)으로 저장
	*rq = '\0'; // 배열 s2에 문자열 끝을 지정하기 위해 '\0' 저장
}