#include <stdio.h>
#define ROW 2
#define COLUMN 3

int main(){
	int i, j, k, determinan;
	int matrix[10][10], trans[10][10], multi[10][10];
	
	//input elemen matrix//
	printf("=======INPUT ELEMEN MATRIX 2x3=======\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Masukkan nilai matrix[%d][%d] : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	//display matrix awal//
	printf("\n=============MATRIX AWAL=============");
	for(i = 0; i < 2; i++ ){
		printf("\n");
		for(j = 0; j < 3; j++){
			printf("%d\t", matrix[i][j]);
        }
    }
    
	//display matrix transpose//
	printf("\n\n========MATRIX TRANSFORMASI==========");
	for(i = 0; i < 3; i++){
		printf("\n");
		for(j = 0; j < 2; j++){
			printf("%d\t", trans[i][j]);
		}
	}
	
	//display multiplication matrix//
	printf("\n\n===========RESULT MATRIX============\n");
	for (i = 0; i < 2; i++){
  		for ( j = 0; j < 3; j++){
  			multi[i][j] = 0;
  			for (k = 0; k < 3; k++)
  			multi[i][j] += matrix[i][k] * trans[k][i];
		  } 
	}
  	
  	for ( i = 0; i < 2; i++)
  		for ( j = 0; j < 2; j++) {
    	printf("%d  ", multi[i][j]);
    	if (j == 2 - 1)
    	printf("\n");
  	}
	
    return 0;
}
