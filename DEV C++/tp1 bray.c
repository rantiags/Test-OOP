#include <stdio.h>
/*
int main() {
	int array[3][3];
	int i, j, x = 1;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			array[i][j] = x;
			x++;
		}
	}
	
	printf("%d", array[0][1]);
}*/

int add1 (int array[4][4]);
int add2 ( int array1, int array2);

int main() {
	int array[4][4] = {
	{3, 4, 2, 3},
	{13, 4, 56, 3},
	{5, 9, 3, 5},
	{3, 1, 4, 9}};
	
	printf("%d", add1(array));
	printf("%d", add2(array[3][3], array[0][1]));
}

int add1 (int array[4][4]){
	return array[3][3] + array[0][1];
}

int add2 (int array1, int array2){
	return array1 + array2;
}
