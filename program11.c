#include <stdio.h>
#include <stdlib.h>

void find_average_and_median(int *arr, int size, float *average, float *median) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    *average = sum / (float)size;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    *median = (size % 2 == 0) ? (arr[size / 2 - 1] + arr[size / 2]) / 2.0 : arr[size / 2];
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    float average, median;
    find_average_and_median(arr, size, &average, &median);

    printf("Average: %.2f\n", average);
    printf("Median: %.2f\n", median);

    free(arr);
    return 0;
}
