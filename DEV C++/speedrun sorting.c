/*  Topik           : Program sorting Mahasiswa sesuai nama dan nilai
    Oleh Kelompok 6 : Lauren Christy Tanudjaja - 2106707870
                      Miranti Anggunsari - 2106731472
    Tanggal         : 3 Maret 2022                                     */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menuUtama() {
  printf("\nProgram akan menampilkan data mahasiswa yang sudah diurutkan berdasarkan:\n");
  printf(" 1. Nama secara Ascending\n");
  printf(" 2. Nama secara Descending\n");
  printf(" 3. Nilai secara Ascending\n");
  printf(" 4. Nilai secara Descending\n");
  printf("\n\n 0. Keluar\n");
}

void menuLain () {
  int option;
  printf ("Apakah Anda ingin melanjutkan program?");
  printf("\n1. Menampilkan berdasarkan Nama secara Ascending atau A-Z");
  printf("\n2. Menampilkan berdasarkan Nama secara Descending atau Z-A");
  printf("\n3. Menampilkan berdasarkan Nilai secara Ascending atau ke yang tertinggi");
  printf("\n4. Menampilkan berdasarkan Nilai secara Descending atau ke yang terendah");
  printf("\n0. Keluar");
}

void namaAscending (char nama[][100], float *nilaiAkhir) {
  int i, j;
  float temp1;
  char temp[100];

  for(i=0; i < 4 ; i++) {
      for(j = i+1; j < 5; j++){
         if(strcmp(nama[i],nama[j]) > 0){
             strcpy(temp, nama[i]);
             strcpy(nama[i], nama[j]);
             strcpy(nama[j], temp);
             temp1 = nilaiAkhir[i];
             nilaiAkhir[i] = nilaiAkhir[j];
             nilaiAkhir[j] = temp1;
         }
      }
   }

  for(i = 0; i < 5; i++) {
	printf("Mahasiswa #%d\n", i+1);
	printf("Nama: %s\n", nama[i]);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir[i]);
    if(nilaiAkhir[i] >= 60) 
    	printf("Status: Lulus\n\n");
    else if("nilaiAkhir[i] < 60")
    	printf("Status: Tidak Lulus\n\n");
	}
}

void namaDescending (char nama[][100], float *nilaiAkhir) {
  int i, j;
  float temp1;
  char temp[100];

  for(i = 0; i < 4 ; i++) {
      for(j = i+1; j < 5; j++){
         if(strcmp(nama[i],nama[j]) < 0){
             strcpy(temp, nama[i]);
             strcpy(nama[i], nama[j]);
             strcpy(nama[j], temp);
             temp1 = nilaiAkhir[i];
             nilaiAkhir[i] = nilaiAkhir[j];
             nilaiAkhir[j] = temp1;
         }
      }
   }

   for(i = 0; i < 5; i++) {
    printf("Mahasiswa #%d\n", i+1);
    printf("Nama: %s\n", nama[i]);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir[i]);
    if(nilaiAkhir[i] >= 60) 
      printf("Status: Lulus\n\n");
    else if("nilaiAkhir[i] < 60")
      printf("Status: Tidak Lulus\n\n");
	}
} 

void nilaiAscending (char nama[][100], float *nilaiAkhir) {
	int i, j, posisi;
	float temp1;
	char temp[100];
	
	for (i=0; i<5; i++) {
		posisi = i;
		for (j = i+1; j < 5; j++) {
			if (nilaiAkhir[posisi] > nilaiAkhir[j]) {
				posisi = j;
			}
		}
		if (posisi != i) {
			temp1 = nilaiAkhir[i];
			nilaiAkhir [i] = nilaiAkhir[posisi];
			nilaiAkhir[posisi] = temp1;
			strcpy(temp, nama[i]);
			strcpy(nama[i], nama[posisi]);
			strcpy(nama[posisi], temp);
		}
	}
	
	for(i = 0; i < 5; i++) {
    printf("Mahasiswa #%d\n", i+1);
    printf("Nama: %s\n", nama[i]);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir[i]);
    if(nilaiAkhir[i] >= 60) 
		printf("Status: Lulus\n\n");
    else if("nilaiAkhir[i] < 60")
		printf("Status: Tidak Lulus\n\n");
	}
}

void nilaiDescending (char nama[][100], float *nilaiAkhir) {
	int i, j, posisi;
	float temp1;
	char temp[100];
	
	for (i=0; i<5; i++) {
		posisi = i;
		for (j = i+1; j < 5; j++) {
			if (nilaiAkhir[posisi] < nilaiAkhir[j]) {
				posisi = j;
			}
		}
		if (posisi != i) {
			temp1 = nilaiAkhir[i];
			nilaiAkhir [i] = nilaiAkhir[posisi];
			nilaiAkhir[posisi] = temp1;
			strcpy(temp, nama[i]);
			strcpy(nama[i], nama[posisi]);
			strcpy(nama[posisi], temp);
		}
	}
	
	for(i = 0; i < 5; i++) {
    printf("Mahasiswa #%d\n", i+1);
    printf("Nama: %s\n", nama[i]);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir[i]);
    if(nilaiAkhir[i] >= 60) 
      printf("Status: Lulus\n\n");
    else if("nilaiAkhir[i] < 60")
      printf("Status: Tidak Lulus\n\n");
	}
}

int main(void) {
	int pilihan, i; 
	char nama[5][100];
	float nilaiTugas[5], nilaiUTS[5], nilaiUAS[5], nilaiAkhir[5];
  
	printf("Sorting Data Mahasiswa by Kelompok 6\n");
  printf("Silahkan input data mahasiswa sebanyak 5 orang.\n\nSilahkan masukkan data!\n\n");
  
  for(i = 0; i < 5; i++) {
  	printf("Mahasiswa #%d\nNama: ", i+1);
  	scanf("%100s", &nama[i]);
  	printf("Nilai Tugas: ");
  	scanf("%f", &nilaiTugas[i]);
  	printf("Nilai UTS: ");
  	scanf("%f", &nilaiUTS[i]);
  	printf("Nilai UAS: ");
  	scanf("%f", &nilaiUAS[i]);
  	printf("\n");
  }

	system("cls");
	for (i = 0; i < 5; i++)
		nilaiAkhir[i] = ((20 * (nilaiTugas[i])) + (35 * (nilaiUTS[i])) + (45 * (nilaiUAS[i]))) / 100;

	for(i = 0; i < 5; i++) {
    printf("Mahasiswa #%d\n", i+1);
    printf("Nama: %s\n", nama[i]);
    printf("Nilai Tugas: %.2f\n", nilaiTugas[i]);
    printf("Nilai UTS: %.2f\n", nilaiUTS[i]);
    printf("Nilai UAS: %.2f\n", nilaiUAS[i]);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir[i]);
    printf("\n");
  }
  
  menuUtama();
	while(1) {
		printf("\n\nPilihan Anda\t: ");
		scanf("%d", &pilihan);
		switch(pilihan) {
      case 0: exit(0);
			write();
	    break;
    	case 1: system("cls");
	  	      namaAscending(nama, nilaiAkhir);
            menuLain();
		        break;
		  case 2: system("cls");
	  	      namaDescending(nama, nilaiAkhir);
            menuLain();
		  	    break;
    	case 3: system ("cls");
		     		nilaiAscending(nama, nilaiAkhir);
            menuLain();
            break;
      case 4: system ("cls");
	    			nilaiDescending(nama, nilaiAkhir);
            menuLain();
			    	break;
    	default: system("cls"); 
	    	    printf("Pilihan yang anda masukkan tidak valid.");
 		    	  menuLain();
    	    	break;
		}
	}
  return 0;
}
