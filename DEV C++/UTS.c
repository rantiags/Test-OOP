#include <stdio.h>

/*
void main() {
	int a=10;
	switch(a) {
		case 5+5:
			printf("Hello\n");
		default:
			printf("OK\n");
	}
}


int fungsi(int num1, int num2){
	int result;
	result=num1*num2;
	return result;
}
int main(){
	int a,b,x;
	a=3; b=4;
	x=fungsi (a,b)+fungsi(b,a);
	printf("%d",x);
}
*/

int main(void){
	int sum = 0;
	int number;
	
	for (number = 2; number <= 20; number+=2){
		sum+=number;
	}
	printf("jumlah %d", sum);
	return 0;
}

