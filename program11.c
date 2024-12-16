#include<stdio.h>

void display(int mat[][3], int row, int col){
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


void transpose(int mat[][3]){
    int temp[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            temp[j][i] = mat[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mat[i][j] = temp[i][j];
        }
    }
}

int main(){
    int matrix[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printf("Before transposeing the matrix is : \n");
    display(matrix, 3, 3);

    printf("After transposeing the matrix is : \n");
    transpose(matrix);
    display(matrix, 3, 3);

    return 0;
}