#include <stdio.h>

int main ()
{
	printf ("Nama : Miranti Anggunsari\n");
	printf ("NPM  : 2106731472\n\n");
	
	int ch1; //masukkan curah hujan saat ini
	printf ("Berapakah curah hujan di Kota Depok saat ini?\n");
	scanf ("%d", &ch1);
	
	int ch2; //masukkan curah hujan yang pernah jadi tertinggi
	printf ("Berapakah curah hujan tertinggi yang pernah terjadi di Kota Depok?\n");
	scanf ("%d", &ch2);
	
	printf ("\n");

	if (ch1 > ch2) {
		printf ("Maka, hingga saat ini curah hujan tertinggi yang pernah terjadi di Kota Depok adalah %d", ch1);
	}
	if (ch1 < ch2) {
		printf ("Maka, hingga saat ini curah hujan tertinggi yang pernah terjadi di Kota Depok adalah %d", ch2);
	}
	
	return 0;
}
