#include<stdio.h>

void display(int mat[][3], int row, int col) {
	printf("\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void matrixMul(int mat1[][3], int mat2[][3]) {
	int mat[3][3]= {0};

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(int k=0; k<3; k++) {
				mat[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	printf("The multiplication matrix is : \n");
	display(mat, 3,3);
}



int main() {
	int mat1[3][3], mat2[3][3];
	printf("Enter elements of the first matrix : \n");

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("\nEnter the elements of the second array:");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("Matrix 1: \n");
	display(mat1, 3, 3);
	printf("Matrix 2: \n");
	display(mat2, 3, 3);

	matrixMul(mat1, mat2);

}