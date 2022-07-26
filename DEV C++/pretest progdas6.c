#include <stdio.h>



int main(void){
	int i = inc(10);
	prinf("%d", --i);
	return 0;
}

int inc(int num) {
	return num++;
}
