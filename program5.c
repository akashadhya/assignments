// Online C compiler to run C program online
#include <stdio.h>
#define N 100
int main() {
    int array[N];
    int n;
    int i;
    int elem;
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
    
    printf("Enter the search element: ");
    scanf("%d", &elem);
    
    for(i=0; i<n; i++){
        if(array[i] == elem){
            printf("Search element found at %d position", i+1);
            break;
        }
    }
    if(i==n) printf("Search element not found.");
    return 0;
}