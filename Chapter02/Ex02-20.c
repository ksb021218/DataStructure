#include <stdio.h>

int main(void) {
	char s1[100] = { '\0' }, s2[100] = { '\0' };
	int i;

	printf("ù��° ���ڿ� : ");
	scanf("%s", s1);
	printf("�ι�° ���ڿ� : ");
	scanf("%s", s2);

	for (i = 0; (s1[i] != '\0') & (s2[i] != '\0'); i++) {
		if (s1[i] != s2[i]) {
			printf("�Էµ� ���ڿ��� �ٸ��ϴ�!\n");
			getch(); return 0;
		}
	}

	if (s1[i] != s2[i])
		printf("�Էµ� ���ڿ��� �ٸ��ϴ�!\n");
	else printf("�Էµ� ���ڿ��� �����ϴ�!\n");

	getch(); return 0;
}