#include <stdio.h>
#define ROW 2
#define COLUMN 3

int main(){
	int i, j;
	int matrix[ROW][COLUMN];
	
	//input elemen matrix//
	printf("=======INPUT ELEMEN MATRIX 2x3=======\n");
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COLUMN; j++){
			printf("Masukkan nilai matrix[%d][%d] : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	//display matrix awal//
	printf("\n=============MATRIX AWAL=============");
	for(i = 0; i < ROW; i++ ){
		printf("\n");
		for(j = 0; j < COLUMN; j++){
			printf("%d\t", matrix[i][j]);
        }
    }
    
	//display matrix transpose//
	printf("\n\n========MATRIX TRANSFORMASI==========");
	for(i = 0; i < COLUMN; i++){
		printf("\n");
		for(j = 0; j < ROW; j++){
			printf("%d\t", matrix[j][i]);
		}
	}
	
	//display multiplication matrix//
	printf("\n\n===========RESULT MATRIX============");
	
	
    return 0;
}
