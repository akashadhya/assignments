#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int binomial(int n, int r){
    return factorial(n) / (factorial(r) *(factorial(n-r)));
}

void trinagle(int lines){
    for(int i=0; i<lines; i++){
        for(int j=0; j<lines-i-1;j++){
            printf(" ");
        }

        for(int j=0; j<=i; j++){
            printf("%d ", binomial(i, j));
        }

        printf("\n");
    }
}


int main(){

    int lines = 10;
    printf("The Pascal's triangle is : \n");
    trinagle(lines);
}