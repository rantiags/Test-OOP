#include <stdio.h>
#include <math.h>
#include "myfunction.h"

int LuasSegitiga (int panjang) {
	int luas = sqrt (3) / 4.0 * panjang * panjang; }
	
int LuasPersegi (int panjang) {
	int luas = panjang * panjang; }
	
int main () {
	int panjang, Luas_Segitiga, Luas_Persegi, volume, LuasPermukaan;
	printf ("Masukkan panjang prisma segitiga, masukkan -1 untuk berhenti : ");
	scanf ("%d", &panjang);
	
	while (panjang != -1) {
		Luas_Segitiga = LuasSegitiga(panjang);
		Luas_Persegi = LuasPersegi(panjang);
		volume = Luas_Segitiga * panjang;
		LuasPermukaan = (2 * Luas_Segitiga) + (3 * Luas_Persegi);
		
		printf ("\nVolume = %d\n", volume);
		printf ("Luas Permukaan = %d\n", LuasPermukaan);
		printf ("\nMasukkan panjang prisma segitiga, masukkan -1 untuk berhenti : ");
		scanf ("%d", &panjang);
	}
	
	return 0;
}
