#include <stdio.h>

// �ִ� ��� ���� ũ�� ����
#define MAX_ROWS 100
#define MAX_COLS 100

// �������� ��Ÿ���� ����ü
typedef struct {
    int row; // ��
    int col; // ��
    int value; // ��
} SparseMatrixElement;

// �������� 2���� �迭�� ��ȯ�ϴ� �Լ�
void extract_nonzero(int sparse[], int rows, int cols, SparseMatrixElement extracted[]) {
    int index = 0;

    // ����� ��ȸ�ϸ� 0�� �ƴ� ���Ҹ� �����Ͽ� extracted �迭�� ����
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = sparse[i * cols + j];
            if (value != 0) {
                extracted[index].row = i;
                extracted[index].col = j;
                extracted[index].value = value;
                index++;
            }
        }
    }
}

// ���� �Լ�
int main() {
    int sparse[MAX_ROWS][MAX_COLS] = {
        {0, 0, 3, 0},
        {0, 0, 0, 0},
        {0, 2, 0, 0},
        {0, 0, 0, 1}
    };

    SparseMatrixElement extracted[MAX_ROWS * MAX_COLS];

    // �������� 2���� �迭�� ��ȯ
    extract_nonzero((int*)sparse, 4, 4, extracted);

    // ��� ���
    printf("Extracted Nonzero Elements:\n");
    for (int i = 0; i < 4; i++) {
        printf("Row: %d, Col: %d, Value: %d\n", extracted[i].row, extracted[i].col, extracted[i].value);
    }

    return 0;
}
