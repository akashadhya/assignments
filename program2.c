// Online C compiler to run C program online
#include <stdio.h>
#define N 100
int main() {
    int array[N];
    int n;
    int i;
    int max=0, min= 0xffff;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    
    printf("\nSo the array is: ");
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    
    for(i=0; i<n; i++){
        if(array[i] > max){
            max = array[i];
            continue;
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    
    printf("\nThe max and min of the array is : ");
    printf("%d and %d", max, min);
    return 0;
}