/*
* Program ini berfungsi untuk menentukan apakah angka input merupakan angka armstrong.
* Angka armstrong merupakan angka yang penjumlahan dari masing-masing digitnya 
*   dipangkatkan dengan jumlah digitnya menghasilkan angka itu sendiri.
* Contoh: 153 -> 3 digit -> 1^3 + 5^3 + 3^3 = 153
* Contoh: 371 -> 3^3 + 7^3 + 1^3 = 371
*/
#include <stdio.h>

int main(void) {

    int angka, counter = 0;
    int hasil = 0, mult = 1, count, sisa, temp;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for (temp = angka; temp > 0; counter++ ){
        temp /= 10;
        count == counter;
}

    for (temp = angka, mult = 1; temp; temp /= 10) {
        for (sisa = temp % 10; count; count--)
            mult *= sisa;
        hasil += mult;
        count == counter;
    }

    if (hasil == angka)
        printf("Angka tersebut bukan angka Armstrong!");
    else
        printf("Angka tersebut merupakan angka Armstrong!");
		

    return 0;
}
