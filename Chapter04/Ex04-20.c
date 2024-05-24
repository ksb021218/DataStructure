#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* next;
} node;

node* head, * tail;

void init_list(void) {
    head = (node*)malloc(sizeof(node));
    tail = (node*)malloc(sizeof(node));
    head->next = tail;
    tail->next = tail;
}

// 노드를 정렬된 순서로 삽입하는 함수
node* ordered_insert(int k) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = k;

    node* current = head;
    // current->next가 tail이 아니고, current->next의 데이터가 k보다 작은 동안 반복
    while (current->next != tail && current->next->data < k) {
        current = current->next;
    }
    // new_node를 current->next 앞에 삽입
    new_node->next = current->next;
    current->next = new_node;

    return head;
}

// 리스트를 출력하는 함수
node* print_list(node* t) {
    node* current = t;
    while (current != tail) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    return head;
}

// 특정 값을 가진 노드를 삭제하는 함수
int delete_node(int k) {
    node* current = head;
    while (current->next != tail && current->next->data != k) {
        current = current->next;
    }
    if (current->next == tail) {
        printf("값이 %d인 노드를 찾을 수 없습니다.\n", k);
        return -1;  // 노드를 찾지 못함
    }

    node* temp = current->next;
    current->next = current->next->next;
    free(temp);
    return 0;
}

int main(int argc, char* argv[]) {
    node* t;

    init_list();
    ordered_insert(10);
    ordered_insert(5);
    ordered_insert(8);
    ordered_insert(3);
    ordered_insert(1);
    ordered_insert(7);

    printf("\nInitial Linked list is ");
    print_list(head->next);

    delete_node(8);
    printf("\nLinked list after deletint 8 is ");
    print_list(head->next);

    return 0;
}
