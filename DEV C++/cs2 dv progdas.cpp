#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	int var = 0;
	int counter = 0;
	
	while(counter <= 10) {
		printf("%d, ", num + var);
		num = num + var;
		var++;
		counter++;
	}
	
	return 0;
}
