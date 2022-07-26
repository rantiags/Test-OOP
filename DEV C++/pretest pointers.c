#include <stdio.h>

/*
int main(void) {
	int x[] = {1, 2, 3, 4, 5}, *p = NULL;
	p = x;
	++*p;
	printf("%d", *p);
	return 0;
}
*/

#define OPERASI 4

double add(double a, double b){return a+b;}
double sub(double a, double b){return a-b;}
double mult(double a, double b){return a*b;}
double div(double a, double b){return a/b;}

int main(void) {
	double (*pointerKeFungsi[OPERASI]) (double, double) = {add, sub, mult, div};
	int pilihan;
	double num1, num2;
	printf("Masukkan pilihan operasi: "); scanf("%d", &pilihan);
	printf("Masukkan dua angka yang ingin dilakukan operasi: "); scanf("%lf %lf", &num1, &num2);
	printf("Hasilnya adalah: %.2lf", pointerKeFungsi[pilihan] (num1, num2));
	
	return 0;
}

/*
int main(void){
	char *p = NULL;
	char a[5] = "Digilab";
	p = a;
	printf("%c", p[2]);
	
	return 0;
}


int main(void){
	int x, *p = NULL;
	p = &x;
	printf("%d", &p);
	return 0;
}
*/
