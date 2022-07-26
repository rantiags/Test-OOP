//https://bit.ly/2EfIkyu
/*program untuk menjumlahkan 2 buah matrix
dan menampilkan output dari penjumlahan*/
#include<stdio.h>
//prototype
int enterdata(int);
int addmatrices(int,int[10][10],int[10][10]);
int display(int,int[10][10]);

int main(){ 
	int ukuran; //declear batas ukuran
	printf("Masukan besar matrix persegi (1-10) = ");
	scanf("%d", &ukuran); //input batas ukuran matrix
	enterdata(ukuran);//calling function selanjutnya
}
int enterdata(int ukuran){ //function input matrix
	int i, j, input1[10][10], input2[10][10]; //declear
	printf("\n======masukan matrix pertama======\n");
	for (i = 0 ; i < ukuran ; i++){
		for(j=0 ; j < ukuran ; j++){
			printf("masukan angka baris %d kolom %d = ",i,j);
			scanf("%d", &input1[i][j]);//input matrix 1
		}
	}
	printf("\n======masukan matrix kedua======\n");
	for (i = 0 ; i < ukuran ; i++){
		for(j=0 ; j < ukuran ; j++){
			printf("masukan angka baris %d kolom %d = ",i,j);
			scanf("%d", &input2[i][j]);//input matrix 2
		}
	}
	addmatrices(ukuran, input1, input2); // caling function selanjutnya
}
int addmatrices(int ukuran, int matrix1[10][10],
int matrix2[10][10]){ //function penjumlahan
	int matrix[10][10]= {{0},{0}}; //declear matrix hasil
	int i,j;
	for (i = 0 ; i < ukuran ; i++){
		for(j=0 ; j < ukuran ; j++){
			matrix[i][j] = matrix1[i][j] + matrix2[i][j]; //penjumlahan
		}
	}
	display(ukuran, matrix); // caling function selanjutnya
}
int display(int ukuran, int sum[10][10]){ //function output
	int i,j;
	for (i = 0 ; i < ukuran ; i++){
		printf("\n"); //membuat baris baru
		for(j=0 ; j < ukuran ; j++){
			printf("%d\t",sum[i][j]);//print setiap kolom
		}
	}
}

