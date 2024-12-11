#include <stdio.h>
#include <stdlib.h>

// H�m t?o ma tr?n 2 chi?u
int** createMatrix(int rows, int cols) {
    // C?p ph�t b? nh? cho ma tr?n
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Nh?p gi� tr? cho t?ng ph?n t? trong ma tr?n
    printf("Nhap gia tri cho ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}

// H�m in ma tr?n 2 chi?u
void printMatrix(int** matrix, int rows, int cols) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// H�m gi?i ph�ng b? nh?
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows, cols;

    // Nh?p s? h�ng v� s? c?t
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    // T?o ma tr?n
    int** matrix = createMatrix(rows, cols);

    // In ma tr?n
    printMatrix(matrix, rows, cols);

    // Gi?i ph�ng b? nh?
    freeMatrix(matrix, rows);

    return 0;
}

