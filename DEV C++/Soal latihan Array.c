#include <stdio.h>

int main() {
	int pilih[4] = {0}, i, j, loop;
	
	printf ("Selamat datang di program Pemilu 2021!\n");
	printf ("Anda hanya dapat memilih salah satu dari ketiga partai yang tersedia,\n");
	printf ("dengan menginput angka 1, 2 atau 3\n\n");
	printf ("Jumlah Pemilih : ");
	scanf ("%d", &loop);
	printf ("Masukkan pilihan anda : \n");
	
	for (i=0; i<loop; i++) {
		scanf ("%d", &j);
		switch (j) {
			case 1: 
				pilih[1]++;
				break;
			case 2: 
				pilih[2]++;
				break;
			case 3: 
				pilih[3]++;
				break;
			default :
				printf ("----------Nomor parpol yang anda pilih tidak ada---------- \n");
				i--;
		}
	}
	
	printf ("\n\n%s%13s%18s \n", "Partai", "Suara", "Histogram");
	for (i=1; i<=3; i++) {
		printf ("%6d%13d%9s", i, pilih[i], " ");
		for (j=1; j<=pilih[i]; j++) {
			printf ("#");
		}
		printf ("\n");
	}

	int max;
	max = pilih[1];
	j = 1;
	
	for (i=2; i<=3; i++) {
		if (max < pilih[i]) {
			max = pilih[i];
			j = i;
		}
	}

	printf ("\n\nDari pemilihan tersebut didapat pemenang parpol yang paling banyak divoting\n");
	printf ("adalah partai politik dengan nomor urut %d dengan jumlah suara %d \n\n", j, max);
	
	return 0;
}
