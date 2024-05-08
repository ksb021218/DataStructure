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

	if (count == 0) printf("등록된 주소록이 없습니다. \n\n");
	else {
		printf("\n 이름\t    전화번호\t 주소\t\t 생일\n");
		printf("---------------------------------------------------\n");
		for (i = 0; i < count; i++) {
			printf("%s\t %s\t %s\t\t %s \n", aB_2012[i].name, aB_2012[i].phone,
				aB_2012[i].addr, aB_2012[i].birthday);
		}
	}
}

void append(void) {
	count++;

	printf("추가할 이름: "); scanf("%s", aB_2012[count - 1].name);
	printf("추가할 전화번호: "); scanf("%s", aB_2012[count - 1].phone);
	printf("추가할 주소: "); scanf("%s", aB_2012[count - 1].addr);
	printf("추가할 생일: "); scanf("%s", aB_2012[count - 1].birthday);
	printf("-------추가 완료---------\n\n");
}

void search(void) {
	char name[10];
	int i;

	printf("검색할 이름: "); scanf("%s", name);
	for (i = 0; i < count; i++) {
		if (strcmp(name, aB_2012[i].name) == 0)
			printf("%s\t %s\t %s\t %s \n\n", aB_2012[i].name, aB_2012[i].phone,
				aB_2012[i].addr, aB_2012[i].birthday);
		else if (i == count)
			printf("%s의 정보가 없습니다.\n\n", name);
	}
}
void del(void) {
	char name[10];
	int i, j;

	printf("삭제할 이름: "); scanf("%s", name);
	for (i = 0; i < count; i++) {
		if (strcmp(name, aB_2012[i].name) == 0) { // 삭제할 레코드를 찾은 경우
			for (j = i; j + 1 < count; j++) { // 삭제할 레코드 뒤 레코드를 앞자리로 이동
				strcpy(aB_2012[j].name, aB_2012[j + 1].name);
				strcpy(aB_2012[j].phone, aB_2012[j + 1].phone);
				strcpy(aB_2012[j].addr, aB_2012[j + 1].addr);
				strcpy(aB_2012[j].birthday, aB_2012[j + 1].birthday);
			}
			printf("삭제 완료! \n\n");
			count--;
		}
		else if (i == count)
			printf("%s의 정보가 없습니다.\n\n", name);
	}
}
void menu(void) {
	char choice;
	
	do {
		printf("\n\n==============================================================================\n");
		printf("------------------------------------주소록 메뉴-------------------------------\n");
		printf("1)목록보기\t\t2)추가 \t\t3)검색 \t\t4)삭제\t\t5)종료\n");
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
			printf("\n주소록 프로그램을 종료합니다.\n"); return;
		default:
			printf("메뉴 번호를 다시 확인해주세요!\n");
		}
	} while (choice != '5');
}

int main(void) {
	menu();
}