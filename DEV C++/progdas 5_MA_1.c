#include <stdio.h>

int main (void)
{
	int counter = 1;
	int loop, num, num1, num2, num3, x;
	
	scanf ("%d", &loop);
	printf ("Banyaknya angka yang diinginkan: %d \n");
	
	while (counter < loop){
		scanf ("%d", &num);
		switch (num){
			case 1 : num1++; counter++;
					break;
			case 2 : num2++; counter++;
					break;
			case 3 : num3++; counter++;
					break;
			default : printf ("Hanya bisa memasukkan angka 1, 2, atau 3!\n\n");
		}
	}
	
	printf ("Frekuensi angka 1: \n");
	for (x = 0; x <= num1; x++){
		printf ("#");
	}	
	printf ("Frekuensi angka 2: \n");
	for (x = 0; x <= num2; x++){
		printf ("#");
	}	
	printf ("Frekuensi angka 3: \n");
	for (x = 0; x <= num3; x++){
		printf ("#");
	}
	
	return 0;
}

