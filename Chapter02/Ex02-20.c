#include <stdio.h>

int main(void) {
	char s1[100] = { '\0' }, s2[100] = { '\0' };
	int i;

	printf("첫번째 문자열 : ");
	scanf("%s", s1);
	printf("두번째 문자열 : ");
	scanf("%s", s2);

	for (i = 0; (s1[i] != '\0') & (s2[i] != '\0'); i++) {
		if (s1[i] != s2[i]) {
			printf("입력된 문자열이 다릅니다!\n");
			getch(); return 0;
		}
	}

	if (s1[i] != s2[i])
		printf("입력된 문자열이 다릅니다!\n");
	else printf("입력된 문자열이 같습니다!\n");

	getch(); return 0;
}