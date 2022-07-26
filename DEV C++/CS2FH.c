//CS2_NF_PROGDAS5_MirantiAnggunsari_2106731472
#include <stdio.h>

int main(){
	int lim1, lim2;
	int saldo, sisasaldo, kredit;
	int inputrek;
	int rek1 = 2101; //nasabah pertama
	int rek2 = 2102; //nasabah kedua
	int rek3 = 2103; //nasabah ketiga
	
	printf("Selamat datang di Bank X\n");
	printf("Silahkan masukkan nomor rekening anda (210-1/2/3) : ");
	scanf("%d", &inputrek);
	printf("\nNomor rekening anda adalah %d atas nama ", inputrek); 
	switch (inputrek){
		case 2101 : printf("Salsabila Audy\n");
			break;
		case 2102 : printf("Brandon Watson\n");
			break;
		case 2103 : printf("Abigail Kayana\n");
			break;
		default   : printf("(nomor rekening yang anda masukkan salah)\n");
			break;
	}
	
	printf("Sisa saldo kredit anda adalah ");
	scanf("%d", &saldo);
	printf("Limit kredit anda adalah ");
	scanf("%d", &lim1);
	lim2 = lim1 / 2;
	printf("\nKarena adanya resesi, limit kredit anda diturunkan menjadi ");
	printf("%d \n", lim2);
		if(saldo == lim2){
			printf("Anda telah mencapai batas maksimal limit kredit");
		}
		else if(saldo > lim2){
			kredit = saldo - lim2;
			printf("Anda telah melebihi batas maksimal kredit\n");
			printf("Harap segera membayar kelebihan kredit sebesar ");
			printf("%d", kredit);
		}
		else{
			sisasaldo = lim2 - saldo;
			printf("Anda masih dapat mengambil kredit sebesar %d", sisasaldo);
		}

	return 0;
}
