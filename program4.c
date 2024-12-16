// Online C compiler to run C program online
#include <stdio.h>
#define N 100
int main() {
    int array[N];
    int n;
    int i;
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
    printf("\n");
    
    for(i=0; i<n; i++){
        if(i%2 == 0){
            continue;
        } else{
            int temp = array[i];
            array[i] = array[i-1];
            array[i-1] = temp;
        }
    }
    
    printf("\nThe rotated array is : ");
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}