//https://bit.ly/2EfIkyu
/*program untuk menghitung standar deviasi
dari 10 angka input*/
#include <stdio.h>
#include <math.h>
float calculateSD(float input[]);//prototype
int main(){
	float input[10] = {0,0,0,0,0,0,0,0,0,0}; //deklarasi array
	int i;
	printf("===STANDAR DEVIASI===\n");
	for (i = 0 ; i < 10 ; i++){
		printf("masukan angka = ");
		scanf("%f", &input[i]);//input untuk array
	}
	//print dan calling function
	printf("standar deviasi = %.2f", calculateSD(input));
}
float calculateSD(float input[]){//passing array
	float total, std_dev;//deklarasi komponen aritmatik
	float sum = 0, mean = 0;
	int j; 
	for (j = 0 ; j < 10 ; j++){
		total += input[j];// total input
	}
	mean = total / 10;//rata rata
	for (j = 0; j < 10 ; j++){
		sum += (pow((input[j] - mean),2)); //sigma dalam akar
	}
	std_dev = sqrt(sum/10);//hasil akhir
	return std_dev; //nilai return
}
