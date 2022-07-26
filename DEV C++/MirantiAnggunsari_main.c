/*
 * Tuliskan nama dan NPM anda di bawah ini
 * Nama : Miranti Anggunsari
 * NPM  : 2106731472
 */
 
#include <stdio.h>
#include <math.h>
#include "MirantiAnggunsari_func.h"

int main()
{
    float principle, rate, time;

    /* Masukkan modal, waktu dan bunga */
    printf("Masukkan modal awal: ");
    scanf("%f", &principle);

    printf("Masukkan jangka waktu (dalam tahun): ");
    scanf("%f", &time);

    printf("Masukkan bunga (dalam persen): ");
    scanf("%f", &rate);

    /* Menampilkan hasil perhitungan CI */
    printf("Modal ditambah bunga = %.2f", compint(principle, rate, time));

    return 0;
}
