#include <stdio.h>

int main(void) {
    int angka, hasil = 0, temp, sisa,
        factorial = 1, i;
    printf("Masukkan angka: ");
    scanf("%d", angka);

    for (temp = angka; temp; temp /= 10, factorial = 1) {
        sisa = temp % 10;
        for (i = 1; i <= sisa; i++)
            factorial *= i;
        hasil += factorial;
    }

    if (hasil == angka)
        printf("Angka tersebut adalah angka Strong!");
    else
        printf("Angka tersebut bukan angka Strong!");

    return 0;
}
