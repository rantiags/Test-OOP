#include <stdio.h>
#include <stdlib.h>

typedef struct InputSenin {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputSenin;
typedef struct InputSelasa {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputSelasa;
typedef struct InputRabu {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputRabu;
typedef struct InputKamis {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputKamis;
typedef struct InputJumat {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputJumat;
typedef struct InputSabtu {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputSabtu;
typedef struct InputMinggu {
	char jenisKas[256];
	char keterangan[256];
	float nominal; 
}InputMinggu;

int main(void) {
	int loop;
	char *hari[] = {"", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	printf("PROGRAM CATATAN KEUANGAN MAHASISWA SELAMA SATU MINGGU\n\n");
	printf("Pilihan:\n");
	for(loop = 1; loop <= 7; loop++) {
		printf("%d.\t%s\n", loop, hari[loop]);
	}
	printf("Silahkan masukkan pilihan hari (1-7): ");

  return 0;
}
