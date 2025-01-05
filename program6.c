#include <stdio.h>
#include <stdbool.h>

void read_matrix(int mat[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void transpose_matrix(int mat[3][3], int trans[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

bool is_symmetric(int mat[3][3], int size) {
    int trans[3][3];
    transpose_matrix(mat, trans, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] != trans[i][j]) return false;
        }
    }
    return true;
}

int main() {
    int mat[3][3];
    read_matrix(mat, 3);

    if (is_symmetric(mat, 3)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
