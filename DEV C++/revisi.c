#include <stdio.h>
#include <string.h>

typedef struct Data{
	char nama[100], no[100];
	int gol, stat, anak, gajiPokok, gajiKotor, gajiBersih;
}Data;

int main(){
	int i, jumlahPegawai, tunjanganNikah = 0, tunjanganAnak = 0, tunjanganTotal = 0, pajak;

	printf("Masukkan jumlah data: ");
	scanf("%d", &jumlahPegawai);
	
	//Deklarasi array
	char dataNama[jumlahPegawai][100];
	char dataNo[jumlahPegawai][100];
	int dataGol[jumlahPegawai];
	int dataStat[jumlahPegawai];
	int dataAnak[jumlahPegawai];
	int dataPokok[jumlahPegawai];
	int dataKotor[jumlahPegawai];
	int dataBersih[jumlahPegawai];
	
	for(i = 0; i < jumlahPegawai ; i++){	
		//Input data pegawai
		Data info;
		printf("\nMasukkan nama: ");
		scanf("%s", &info.nama);
		printf("Masukkan nomor pegawai: ");
		scanf("%s", &info.no);
		printf("Masukkan golongan: ");
		scanf("%d", &info.gol);
		printf("Masukkan status pernikahan\n(0 jika belum, 1 jika sudah): ");
		scanf("%d", &info.stat);
	
		while (info.stat != 0 && info.stat != 1 ){
			printf("Input salah, masukkan kembali!\n");
			printf("Masukkan status pernikahan\n(0 jika belum, 1 jika sudah): ");
			scanf("%d", &info.stat);
		}
		if (info.stat == 1) {
			printf("Masukkan jumlah anak: ");
			scanf("%d", &info.anak);
		} else info.anak = 0;
	
		switch(info.gol){
			case 1:
				info.gajiPokok = 3000000;
				pajak = 0.05*info.gajiPokok;
				break;
			case 2:
				info.gajiPokok = 4000000;
				pajak = 0.05*info.gajiPokok;
				break;
			case 3:
				info.gajiPokok = 50000000;
				pajak = 0.05*info.gajiPokok / 100;
				break;
			case 4:
				info.gajiPokok = 60000000;
				pajak = 0.1* info.gajiPokok / 100;
				break;
			case 5:
				info.gajiPokok = 7000000;
				pajak = 0.1* info.gajiPokok / 100;
				break;
			case 6:
				info.gajiPokok = 8000000;
				pajak = 0.15* info.gajiPokok / 100;
				break;
		}
	
		if 		(info.stat == 1) tunjanganNikah = 0.05 * info.gajiPokok;
		else if (info.stat == 0) tunjanganNikah = 0;						 //Tunjangan Pasangan
	
		if      (info.anak == 0) tunjanganAnak = 0;
		else if (info.anak == 1) tunjanganAnak = 2 * info.gajiPokok / 100;   //Tunjangan Anak
		else if (info.anak == 2) tunjanganAnak = 4 * info.gajiPokok / 100;
		else if (info.anak >= 3) tunjanganAnak = 6 * info.gajiPokok / 100;
		else tunjanganAnak == 0;
		
		tunjanganTotal = tunjanganNikah + tunjanganAnak;   //Tunjangan Total
		info.gajiKotor = info.gajiPokok + tunjanganTotal; //Gaji Kotor
		info.gajiBersih = info.gajiKotor - pajak;		 //Gaji Bersih

		strcpy(dataNama[i], info.nama);
		strcpy(dataNo[i], info.no);
		dataGol[i] = info.gol;
		dataStat[i] = info.stat;
		dataAnak[i] = info.anak;
		dataPokok[i] = info.gajiPokok;
		dataKotor[i] = info.gajiKotor;
		dataBersih[i] = info.gajiBersih;
	}
	
	printf("\nNama\t\tNo\t\tGol\t\tStatus\t\tGajPok\t\tGajKot\t\tGajBer\n");
	for(i = 0; i < jumlahPegawai ; i++)
	printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", 
	dataNama[i], dataNo[i], dataGol[i], dataStat[i], dataPokok[i], dataKotor[i], dataBersih[i]);	
	
	return 0;
}
