#include <stdio.h>
#include <limits.h>

void find_elements(int arr[], int size, int *third_max, int *fifth_min, int *middle) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX, min4 = INT_MAX, min5 = INT_MAX;

    for (int i = 0; i < size; i++) {
        // Update maximums
        if (arr[i] > max1) {
            max3 = max2; max2 = max1; max1 = arr[i];
        } else if (arr[i] > max2) {
            max3 = max2; max2 = arr[i];
        } else if (arr[i] > max3) {
            max3 = arr[i];
        }
        // Update minimums
        if (arr[i] < min1) {
            min5 = min4; min4 = min3; min3 = min2; min2 = min1; min1 = arr[i];
        } else if (arr[i] < min2) {
            min5 = min4; min4 = min3; min3 = min2; min2 = arr[i];
        } else if (arr[i] < min3) {
            min5 = min4; min4 = min3; min3 = arr[i];
        } else if (arr[i] < min4) {
            min5 = min4; min4 = arr[i];
        } else if (arr[i] < min5) {
            min5 = arr[i];
        }
    }
    *third_max = max3;
    *fifth_min = min5;
    *middle = arr[size / 2];
}

int main() {
    int arr[10] = {5, 2, 9, 1, 6, 7, 8, 3, 4, 10};
    int third_max, fifth_min, middle;

    find_elements(arr, 10, &third_max, &fifth_min, &middle);

    printf("Third Max: %d\n", third_max);
    printf("Fifth Min: %d\n", fifth_min);
    printf("Middle Element: %d\n", middle);

    return 0;
}
