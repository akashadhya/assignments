#include <stdio.h>
#include <stdlib.h>
#include<math.h>


double calculateMean(int array[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return (double)sum / size;
}


double calculateMedian(int array[], int size) {
  int temp;

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  if (size % 2 == 0) {
    return (array[size / 2 - 1] + array[size / 2]) / 2.0;
  } else {
    return array[size / 2];
  }
}


int calculateMode(int array[], int size) {
  int maxCount = 0;
  int mode = array[0];
  int count;
  for (int i = 0; i < size; i++) {
    count = 0;
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
      }
    }
    if (count > maxCount) {
      maxCount = count;
      mode = array[i];
    }
  }
  return mode;
}

double calculateStandardDeviation(int array[], int size) {
  double mean = calculateMean(array, size);
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += (array[i] - mean) * (array[i] - mean);
  }
  return sqrt(sum / size);
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);

  printf("Mean: %.2f\n", calculateMean(array, size));
  printf("Median: %.2f\n", calculateMedian(array, size));
  printf("Mode: %d\n", calculateMode(array, size));
  printf("Standard Deviation: %.2f\n", calculateStandardDeviation(array, size));

  return 0;
}