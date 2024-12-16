#include <stdio.h>

#define MAX 50

void sort2DArray(int rows, int cols, int array[MAX][MAX]) {
    int size = rows * cols;
    int temp[size];
    int k = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[k++] = array[i][j];
        }
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = temp[k++];
        }
    }
}

void sum2DArrays(int rows, int cols, int array1[MAX][MAX], int array2[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void print2DArray(int rows, int cols, int array[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int array1[MAX][MAX], array2[MAX][MAX], result[MAX][MAX];

    printf("Enter the number of rows and columns of the arrays: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter elements of the second 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    sort2DArray(rows, cols, array1);
    sort2DArray(rows, cols, array2);

    printf("Sorted first array:\n");
    print2DArray(rows, cols, array1);

    printf("Sorted second array:\n");
    print2DArray(rows, cols, array2);

    sum2DArrays(rows, cols, array1, array2, result);

    sort2DArray(rows, cols, result);

    printf("Sorted resultant array after summation:\n");
    print2DArray(rows, cols, result);

    return 0;
}