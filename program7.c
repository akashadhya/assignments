#include <stdio.h>

void sort_2d_array(int arr[3][3]) {
    int temp[9], k = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[k++] = arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = temp[k++];
        }
    }
}

void sum_arrays(int arr1[3][3], int arr2[3][3], int sum[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void print_2d_array(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr1[3][3] = {{9, 2, 7}, {4, 6, 1}, {3, 5, 8}};
    int arr2[3][3] = {{3, 5, 1}, {7, 8, 2}, {6, 4, 9}};
    int sum[3][3];

    sort_2d_array(arr1);
    sort_2d_array(arr2);
    sum_arrays(arr1, arr2, sum);

    printf("Sorted Array 1:\n");
    print_2d_array(arr1);

    printf("Sorted Array 2:\n");
    print_2d_array(arr2);

    printf("Sum Array:\n");
    print_2d_array(sum);

    return 0;
}
