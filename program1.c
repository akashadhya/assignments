// Online C compiler to run C program online
#include <stdio.h>
#define N 100
int main() {
    int array[N];
    int n;
    int i,j;
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
    
    /* sort using bubble sort */
    for(i=n-1; i>=0; i--){
        for(j=i-1; j>=0; j--){
            if(array[j] <= array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("\nAfter sorting: ");
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}