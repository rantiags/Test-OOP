#include <stdio.h>

void main()
{
	int celcius, fahrenheit;
	printf("Masukkan suhu dalam celcius = ");
	scanf("%d",&celcius);
	
	fahrenheit = (celcius * 9 / 5) + 32;
	printf("Suhu dalam fahrenheit = ");
	printf("%d", &fahrenheit);
}
