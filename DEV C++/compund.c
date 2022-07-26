/**
 * Tuliskan nama dan NPM anda di bawah ini
 * Nama :
 * NPM  :
 */
 
/**
 * Soal:
 * Ubahlah program di bawah ini menjadi 1 buah main program dan 1 buah file function. 
 * Function berisi perhitungan compound interest, sedangkan main program berisi dialog input dan output program. 
 *
 * Format penamaan file:
 * NamaAnda_main.c
 * NamaAnda_func.h
 * 
 * atau dipisah antara header file dan function file. Format penamaan file:
 * NamaAnda_main.c
 * NamaAnda_func.h
 * NamaAnda_func.c
 *
 * Ketentuan:
 * tidak boleh menggunakan variabel global
 * 
 */ 

#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;

    /* Masukkan modal, waktu dan bunga */
    printf("Masukkan modal awal: ");
    scanf("%f", &principle);

    printf("Masukkan jangka waktu (dalam tahun): ");
    scanf("%f", &time);

    printf("Masukkan bunga (dalam persen): ");
    scanf("%f", &rate);

    /* Perhitungan compound interest */
    CI = principle* (pow((1 + rate / 100), time));

    /* Menampilkan hasil perhitungan CI */
    printf("Modal ditambah bunga = %.2f", CI);

    return 0;
}
