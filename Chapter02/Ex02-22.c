#include <stdio.h>

int main(void) {
	char s[100] = { '\0' }, * p;
	int i;

	printf("문자열 입력 : ");
	scanf("%s", s);

	/* 배열을 사용하는 경우
	for(i=0; s[i]!='\0';i++) {
		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;
		else if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	}
	*/

	// 포인터를 사용하는 경우
	p = s;
	
	for (i = 0; *p != '\0'; p++) {
		if (*p >= 65 && *p <= 90)
			*p += 32;
		else if (*p >= 97 && *p <= 122)
			*p -= 32;
	}

	printf("문자열 변환: %s \n", s);

	getch(); return 0;
}