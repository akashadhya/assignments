#include <stdio.h>

void sort_array(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        for (int j = i + 1; j < size / 2; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = size / 2; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {5, 2, 9, 1, 6, 7, 8, 3, 4, 10};
    sort_array(arr, 10);

    printf("Modified Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
