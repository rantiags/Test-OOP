#include <stdio.h>

int recursiong(int input){
	int ret = 1;
	long iterate;
	if (input == 1) return ret;
	for (iterate = 1; iterate < input; iterate++)
		ret += recursiong(iterate) * recursiong(input - iterate);
	return ret;
}

int main(void){
	printf("%d", recursiong(5));
	return 0;
}
