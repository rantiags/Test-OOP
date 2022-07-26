/*	Kelompok 2:
	Adrien Ardra Ramadhan
	Bisma Alif Alghifari
	Miranti Anggunsari
	Reynaldo Alifiandro Marcelino	*/

#include <stdio.h>

int main(void) {
	//deklarasi dan inisialisasi
	int partai[3] = {0};
	int pemilih, pilihan, i;
	
	//meminta input banyaknya pemilih
	printf("Jumlah pemilih: ");
	scanf("%d", &pemilih);
	
	//menyeleksi input
	do {
		scanf("%d", &pilihan);
		if (pilihan > 0) {
			switch (pilihan) {
				case 1:
					partai[0] += 1;
					i++;
					break;
				case 2:
					partai[1] += 1;
					i++;
					break;
				case 3:
					partai[2] += 1;
					i++;
					break;
				default: //jika angka yang diinput diluar 1-3, program akan meminta input kembali
					printf("Suara anda dikatakan netral, silahkan masukkan kembali nomor partai yang dipilih\n");
					break;
			}
		}
	} while (i < pemilih);
	
	//menampilkan output
	printf("\nPartai	Suara	Histogram");
	printf("\n1	%d	", partai[0]); //output frekuensi suara
	for(i = 0; i < partai[0]; i++) { //output histogram
		printf("#");
		
	}
	
	printf("\n2	%d	", partai[1]);
	for(i = 0; i < partai[1]; i++) {
		printf("#");
	}
	
	printf("\n3	%d	", partai[2]);
	for(i = 0; i < partai[2]; i++) {
		printf("#");
	}
}
