//header itu yang ini
#include <stdio.h>

//function declaration
//nama lainnya adalah function prototype
int power_of_2(int);
//bisa dideklarasi tanpa nama dari variabel parameter
//karena yang penting adalah tipe data dari parameter tersebut

int main(void) {
    printf("%d", power_of_2(4));
    return 0;
}

//function definition
int power_of_2(int num) {
    return num * num;
}
