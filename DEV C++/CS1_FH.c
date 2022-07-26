#include <stdio.h>

int main() {
	int num1, num2, num3, num4, num5;
	int sum1, sum2, sum3, sum4, sum5;
	
	printf("Hanya bisa masukkan angka 1-30 saja \n\n");
	
	do {
		printf("Angka pertama: ");
		scanf("%d", &num1);
	} while (num1 < 1 || num1 > 31);
	
	do {
		printf("Angka kedua: ");
		scanf("%d", &num2);
	} while (num2 < 1 || num2 > 31);
	
	do {
		printf("Angka ketiga: ");
		scanf("%d", &num3);
	} while (num3 < 1 || num3 > 31);
	
	do {
		printf("Angka keempat: ");
		scanf("%d", &num4);
	} while (num4 < 1 || num4 > 31);
	
	do {
		printf("Angka kelima: ");
		scanf("%d", &num5);
	} while (num5 < 1 || num5 > 31);
	
	printf("\nFrekuensi angka pertama: ");
	for (sum1 = 1; sum1 <= num1; sum1++){
		printf("*");}
		
	printf("\nFrekuensi angka kedua: ");
	for (sum2 = 1; sum2 <= num2; sum2++){
		printf("*");}
		
	printf("\nFrekuensi angka ketiga: ");
	for (sum3 = 1; sum3 <= num3; sum3++){
		printf("*");}
		
	printf("\nFrekuensi angka keempat: ");
	for (sum4 = 1; sum4 <= num4; sum4++){
		printf("*");}
		
	printf("\nFrekuensi angka kelima: ");
	for (sum5 = 1; sum5 <= num5; sum5++){
		printf("*");}
	
	return 0;
}
