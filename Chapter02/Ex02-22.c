#include <stdio.h>

int main(void) {
	char s[100] = { '\0' }, * p;
	int i;

	printf("���ڿ� �Է� : ");
	scanf("%s", s);

	/* �迭�� ����ϴ� ���
	for(i=0; s[i]!='\0';i++) {
		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;
		else if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	}
	*/

	// �����͸� ����ϴ� ���
	p = s;
	
	for (i = 0; *p != '\0'; p++) {
		if (*p >= 65 && *p <= 90)
			*p += 32;
		else if (*p >= 97 && *p <= 122)
			*p -= 32;
	}

	printf("���ڿ� ��ȯ: %s \n", s);

	getch(); return 0;
}