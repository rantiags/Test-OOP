#include <stdio.h>

float average(float age[]); //deklarasi function//

int main() {
	float avg, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
	
	avg = average(age); //hanya nama dari array yang dipass sebagai argumen//
	printf("Average age = %.2f", avg);
	return 0;
}

float average(float age[]) {
	int i;
	float avg, sum = 0.0;
	
	for (i = 0; i < 6; ++i){
		sum += age[i];
	}
	avg = (sum / 6);
	return avg;
}

/*
void display(int age){
	printf("%d", age);
}

int main(){
	int ageArray[] = {2, 3, 4};
	display(ageArray[2]); //passing elemen array
	return 0;
}
*/
