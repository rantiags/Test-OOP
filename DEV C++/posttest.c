#include <stdio.h>
void func1 (int * p, int n);
void func2 (int * x, int * y);
void func3 (int * p, int size);

int main() {
	int data[] = {13, 147, 99, 1};
	int n = sizeof(data) / sizeof(data[0]);
	func1(data, n);
	func3(data, n);
}

void func1( int * p, int n) {
	int i, j;
	for (i=0; i<n-1; i++){
		for (j=0; j<n-1; j++){
			if(*(p+j)>*(p+j+1)){
				func2(p+j, p+j+1);
			}
		}
	}
}

void func2(int*x, int*y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void func3(int*p, int size){
	int i;
	for(i=0; i<size; i++){
		printf("%d ", *(p+i));
	}
	puts("");
}
/*
int main (void) {

	int angka;
	printf("Input angka: "); scanf("%d", &angka);
	
	if (checkDuplikat(angka))
		printf("Ada angka duplikat");
	else
		printf("Tidak ada angka duplikat");
	
	return 0;
}

int checkDuplikat(int angka) {
	int ada[10] ={0};
	int sisa;
	
	while (angka) {
		sisa = angka % 10;
		if (ada[sisa] == 1)
			break;
		ada[sisa] = 1;
		angka /= 10;
	}
	return angka;
}

	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int i, j, mid = 1;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i == mid || j == mid)
				printf("%d,", arr[i][j]);
	return 0;
}
*/
