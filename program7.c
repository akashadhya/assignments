#include <stdio.h>

int main(){

    int arr[100] = {12, 48, 55, 59, 69, 100};
    int n;
    int newElement;
    int target_index;

    n= 6;

    printf("Enter Element to be inserted: ");
    scanf("%d", &newElement);

    for(int i = 0; i < n; i++){
            if(arr[i] >= newElement){  
                target_index= i;
                break;
            }
            if(i == n-1){
                target_index = n;
            }
    }

    n+= 1;

    int temp;
    temp = arr[target_index];
    arr[target_index] = newElement;

    printf("\n The modified array is: ");
    for(int i = n-1; i >= target_index; i--){
        arr[i+1] = arr[i];
        if(i == target_index){
            arr[i+1] = temp;
        }
    }


    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}