#include <stdio.h>
#include <string.h>

int count = 0;

struct addressBook {
	char name[10];
	char phone[15];
	char addr[50];
	char birthday[8];
} aB_2012[50];

void list(void) {
	int i;

	if (count == 0) printf("��ϵ� �ּҷ��� �����ϴ�. \n\n");
	else {
		printf("\n �̸�\t    ��ȭ��ȣ\t �ּ�\t\t ����\n");
		printf("---------------------------------------------------\n");
		for (i = 0; i < count; i++) {
			printf("%s\t %s\t %s\t\t %s \n", aB_2012[i].name, aB_2012[i].phone,
				aB_2012[i].addr, aB_2012[i].birthday);
		}
	}
}

void append(void) {
	count++;

	printf("�߰��� �̸�: "); scanf("%s", aB_2012[count - 1].name);
	printf("�߰��� ��ȭ��ȣ: "); scanf("%s", aB_2012[count - 1].phone);
	printf("�߰��� �ּ�: "); scanf("%s", aB_2012[count - 1].addr);
	printf("�߰��� ����: "); scanf("%s", aB_2012[count - 1].birthday);
	printf("-------�߰� �Ϸ�---------\n\n");
}

void search(void) {
	char name[10];
	int i;

	printf("�˻��� �̸�: "); scanf("%s", name);
	for (i = 0; i < count; i++) {
		if (strcmp(name, aB_2012[i].name) == 0)
			printf("%s\t %s\t %s\t %s \n\n", aB_2012[i].name, aB_2012[i].phone,
				aB_2012[i].addr, aB_2012[i].birthday);
		else if (i == count)
			printf("%s�� ������ �����ϴ�.\n\n", name);
	}
}
void del(void) {
	char name[10];
	int i, j;

	printf("������ �̸�: "); scanf("%s", name);
	for (i = 0; i < count; i++) {
		if (strcmp(name, aB_2012[i].name) == 0) { // ������ ���ڵ带 ã�� ���
			for (j = i; j + 1 < count; j++) { // ������ ���ڵ� �� ���ڵ带 ���ڸ��� �̵�
				strcpy(aB_2012[j].name, aB_2012[j + 1].name);
				strcpy(aB_2012[j].phone, aB_2012[j + 1].phone);
				strcpy(aB_2012[j].addr, aB_2012[j + 1].addr);
				strcpy(aB_2012[j].birthday, aB_2012[j + 1].birthday);
			}
			printf("���� �Ϸ�! \n\n");
			count--;
		}
		else if (i == count)
			printf("%s�� ������ �����ϴ�.\n\n", name);
	}
}
void menu(void) {
	char choice;
	
	do {
		printf("\n\n==============================================================================\n");
		printf("------------------------------------�ּҷ� �޴�-------------------------------\n");
		printf("1)��Ϻ���\t\t2)�߰� \t\t3)�˻� \t\t4)����\t\t5)����\n");
		printf("==============================================================================\n");
		scanf("%c", &choice); getchar();
		switch (choice) {
		case '1':
			list(); break;
		case '2':
			append(); getchar(); break;
		case '3':
			search(); getchar(); break;
		case '4':
			del(); getchar(); break;
		case '5':
			printf("\n�ּҷ� ���α׷��� �����մϴ�.\n"); return;
		default:
			printf("�޴� ��ȣ�� �ٽ� Ȯ�����ּ���!\n");
		}
	} while (choice != '5');
}

int main(void) {
	menu();
}