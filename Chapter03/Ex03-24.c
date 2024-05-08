#include <stdio.h>

// 최대 행과 열의 크기 정의
#define MAX_ROWS 100
#define MAX_COLS 100

// 희소행렬을 나타내는 구조체
typedef struct {
    int row; // 행
    int col; // 열
    int value; // 값
} SparseMatrixElement;

// 희소행렬을 2차원 배열로 변환하는 함수
void extract_nonzero(int sparse[], int rows, int cols, SparseMatrixElement extracted[]) {
    int index = 0;

    // 행렬을 순회하며 0이 아닌 원소를 추출하여 extracted 배열에 저장
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

// 메인 함수
int main() {
    int sparse[MAX_ROWS][MAX_COLS] = {
        {0, 0, 3, 0},
        {0, 0, 0, 0},
        {0, 2, 0, 0},
        {0, 0, 0, 1}
    };

    SparseMatrixElement extracted[MAX_ROWS * MAX_COLS];

    // 희소행렬을 2차원 배열로 변환
    extract_nonzero((int*)sparse, 4, 4, extracted);

    // 결과 출력
    printf("Extracted Nonzero Elements:\n");
    for (int i = 0; i < 4; i++) {
        printf("Row: %d, Col: %d, Value: %d\n", extracted[i].row, extracted[i].col, extracted[i].value);
    }

    return 0;
}
