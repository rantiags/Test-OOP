#include <stdio.h>

void damageCalculate(int base_atk, float add_atk, int weapon_atk, float crit_dmg, float crit_rate){
    int attack = (int)(base_atk + weapon_atk + (base_atk * (0.01 * add_atk)));
    int crit = (int)(attack + (attack * (0.01 * crit_dmg)));
    int jumlahCrit = (int)(0.1 * crit_rate);
    printf("Statistik Karakter : \n");
    printf("Attack: %d\n", attack);
    printf("Damage Critical: %d\n", crit);
    printf("Jumlah damage akan critical: %d dari 10 serangan\n", jumlahCrit);

}

int main(){
    int pilihan, lanjut;
    int base_atk, weapon_atk;
    float add_atk, crit_dmg, crit_rate;
    printf("Selamat datang di damage calculator!\n");
    while(pilihan !=3) {
        printf("\nMasukkan angka untuk memilih menu\n");
        printf("1. Perhitungan Damage\n");
        printf("2. Panduan\n");
        printf("3. Keluar\n");
        printf("Pilih 1/2/3\n");
        scanf("%d", &pilihan);

        switch(pilihan){
            case 1:
                do {
                    printf("\nMasukkan nilai base attack : ");
                    scanf("%d", &base_atk);
                    printf("Masukkan nilai additional attack percentage : ");
                    scanf("%f", &add_atk);
                    printf("Masukkan nilai weapon base attack : ");
                    scanf("%d", &weapon_atk);
                    printf("Masukkan nilai damage critical percentage : ");
                    scanf("%f", &crit_dmg);
                    printf("Masukkan nilai critical rate percentage : ");
                    scanf("%f", &crit_rate);

                    damageCalculate(base_atk, add_atk, weapon_atk, crit_dmg, crit_rate);
                    do{
                    	printf("\nApakah ingin melakukan pencarian kembali?(0 untuk lanjut, -1 untuk kembali ke menu awal)\n");
                    	printf(">>>");
                    	scanf("%d", &lanjut);
                    	if(lanjut == -1) break;
                	}while(lanjut != 0 || lanjut != -1);
                }while(lanjut == 0);

                break;
            case 2:
                printf("\nKetika memilih 1, masukkan angka yang dibutuhkan sebagai parameter nilai damage\n");
                printf("Attack dan damage criticalnya akan memiliki perhitungan sebagai berikut\n");
                printf("Attack = base attack + weapon base attack + (base attack * (0.01 * additional attack percentage))\n");
                printf("Damage critical = Attack + (Attack * (0.01 * damage critical percentage))\n");
                printf("Pilih 3 jika sudah selesai menggunakan program\n");
                break;
            default:
                printf("\nInput yang dimasukkan tidak benar\n");
        }
    }
    printf("Terima kasih sudah menggunakan Damage Calculator ini\n");
    return 0;
}