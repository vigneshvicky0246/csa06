#include <stdio.h>
#define MAX 2
int i,j;
void add(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) {
    for ( i = 0; i < MAX; i++) {
        for ( j = 0; j < MAX; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void subtract(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) {
    for ( i = 0; i < MAX; i++) {
        for ( j = 0; j < MAX; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}
void strassenMultiplication(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) {
    int M1, M2, M3, M4, M5, M6, M7;

    M1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    M2 = (A[1][0] + A[1][1]) * B[0][0];
    M3 = A[0][0] * (B[0][1] - B[1][1]);
    M4 = A[1][1] * (B[1][0] - B[0][0]);
    M5 = (A[0][0] + A[0][1]) * B[1][1];
    M6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    M7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;
}

void printMatrix(int matrix[MAX][MAX]) {
    for ( i = 0; i < MAX; i++) {
        for ( j = 0; j < MAX; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX] = {{1, 2}, {3, 4}};
    int B[MAX][MAX] = {{5, 6}, {7, 8}};
    int C[MAX][MAX];

    strassenMultiplication(A, B, C);

    printf("Resultant matrix:\n");
    printMatrix(C);

    return 0;
}

