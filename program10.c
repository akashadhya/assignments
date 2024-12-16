#include<stdio.h>
#include<math.h>


void display(int mat[][3], int row, int col){
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int norm(int mat[][3], int row, int col) {
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += mat[i][j];
        }
    }

    return sqrt(sum);
}


int main(){
    int matrix[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("The matrix is : \n");
    display(matrix, 3, 3);


    printf("The norm of the matrix is : %d", norm(matrix , 3 , 3));
    return 0;
}