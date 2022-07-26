#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct inputKas {
  int jenisKas;
  char keterangan[256];
  float nominal;
}inputKas;
typedef enum kodeHari {
	SEN, SEL, RAB, KAM, JUM, SAB, MIN
}kodeHari;

int main(void){
	inputKas *kas[7];
	char pilihan, temp[256];
	int hari, ASCII, jumlah, loop;
	int countSen = 1, countSel = 1, countRab = 1, countKam = 1, countJum = 1, countSab = 1, countMin = 1;
	for(hari = SEN; hari <= MIN; hari++){
		//input Senin
		system("CLS");
		while(countSen != 0){
    		printf("\nKas Hari Senin\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Senin? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[SEN]->jenisKas = 0;
    			kas[SEN]->nominal = 0;
      		  	countSen = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[SEN] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[SEN][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[SEN][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[SEN][loop].keterangan);
        		}//end for input Senin
        		countSen = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countSen = 0;
			}//end if
		}//end while Senin
		//input Selasa
		system("CLS");
		while(countSel != 0){
    		printf("\nKas Hari Selasa\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Selasa? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
     			kas[SEL]->jenisKas = 0;
    			kas[SEL]->nominal = 0;
      		  	countSel = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[SEL] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[SEL][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[SEL][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[SEL][loop].keterangan);
        		}//end for input Selasa
        		countSel = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countSel = 0;
			}//end if
		}//end while Selasa
		//input Rabu
		system("CLS");
		while(countRab != 0){
    		printf("\nKas Hari Rabu\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Rabu? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[RAB]->jenisKas = 0;
    			kas[RAB]->nominal = 0;
      		  	countRab = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[RAB] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[RAB][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[RAB][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[RAB][loop].keterangan);
        		}//end for input Rabu
        		countRab = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countRab = 0;
			}//end if
		}//end while Rabu
		//input Kamis
		system("CLS");
		while(countKam != 0){
    		printf("\nKas Hari Kamis\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Kamis? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[KAM]->jenisKas = 0;
    			kas[KAM]->nominal = 0;
      		  	countKam = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[KAM] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[KAM][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[KAM][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[KAM][loop].keterangan);
        		}//end for input Kamis
        		countKam = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countKam = 0;
			}//end if
		}//end while Kamis
		//input Jumat
		system("CLS");
		while(countJum != 0){
    		printf("\nKas Hari Jumat\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Jumat? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[JUM]->jenisKas = 0;
    			kas[JUM]->nominal = 0;
      		  	countJum = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[JUM] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: ");  
					scanf("%d", &kas[JUM][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[JUM][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[JUM][loop].keterangan);
        		}//end for input Jumat
        		countJum = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countJum = 0;
			}//end if
		}//end while Jumat
		//input Sabtu
		system("CLS");
		while(countSab != 0){
    		printf("\nKas Hari Sabtu\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Sabtu? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[SAB]->jenisKas = 0;
    			kas[SAB]->nominal = 0;
      		  	countSab = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[SAB] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[SAB][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[SAB][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[SAB][loop].keterangan);
        		}//end for input Sabtu
        		countSab = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countSab = 0;
			}//end if
		}//end while Sabtu
		//input Minggu
		system("CLS");
		while(countMin != 0){
    		printf("\nKas Hari Minggu\n");
    		printf("\nApakah Anda hendak mencatat transaksi hari Minggu? (Y/N): ");
    		scanf("%s", &pilihan);
    		ASCII = pilihan;
    		if (ASCII == 110 || ASCII == 78) {
    			kas[MIN]->jenisKas = 0;
    			kas[MIN]->nominal = 0;
      		  	countMin = 0;
   			}else if (ASCII == 121 || ASCII == 89) {
        		printf("\nBerapa banyak transaksi yang ingin dicatat? : ");
        		scanf("%d", &jumlah);
        		kas[MIN] = (inputKas*) calloc(jumlah, sizeof(inputKas));
        		for(loop = 0; loop < jumlah; loop++){
        			printf("\nInput ke-%d", loop+1);
          			printf("\nJenis transaksi\n1. Pemasukan\n2. Pengeluaran\nPilihan\t\t: "); 
					scanf("%d", &kas[MIN][loop].jenisKas);
          			printf("Nominal\t\t: "); scanf("%f", &kas[MIN][loop].nominal);
          			printf("Keterangan\t: "); scanf("%c %[^\n]", &temp, kas[MIN][loop].keterangan);
        		}//end for input Minggu
        		countMin = 0;
			} else{
				printf("\nInvalid input! Program has been terminated\n");
				countMin = 0;
			}//end if
		}//end while Minggu
	}//end for input
	free(kas);
	return 0;
}
