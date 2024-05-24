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

// ��带 ���ĵ� ������ �����ϴ� �Լ�
node* ordered_insert(int k) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = k;

    node* current = head;
    // current->next�� tail�� �ƴϰ�, current->next�� �����Ͱ� k���� ���� ���� �ݺ�
    while (current->next != tail && current->next->data < k) {
        current = current->next;
    }
    // new_node�� current->next �տ� ����
    new_node->next = current->next;
    current->next = new_node;

    return head;
}

// ����Ʈ�� ����ϴ� �Լ�
node* print_list(node* t) {
    node* current = t;
    while (current != tail) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    return head;
}

// Ư�� ���� ���� ��带 �����ϴ� �Լ�
int delete_node(int k) {
    node* current = head;
    while (current->next != tail && current->next->data != k) {
        current = current->next;
    }
    if (current->next == tail) {
        printf("���� %d�� ��带 ã�� �� �����ϴ�.\n", k);
        return -1;  // ��带 ã�� ����
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
