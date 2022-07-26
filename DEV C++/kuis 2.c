#include <stdio.h>

int main(void){
	int n[6];
	int m[6];
	int i;
	int j;
	int k = 10;
	for(i = 0; i < 6; i++) {
		n[i] = k;
		k++;
		printf("%4d\n", n[i]);
	}
	i = 0;
	for (j = 5; j >= 0; j--){
		m[j] = n[i];
	}
	j = 0;
	for(i = 0; i < 6; i++) {
		n[i] = m[j];
		j++;
	}
	for(i = 0; i < 6; i++){
		printf("%4d\n", n[i]);
	}
}
