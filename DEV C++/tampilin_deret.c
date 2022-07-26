#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;
	int mod = 0;
	int count = 0;
	
	while (count<11)
	{
		printf("%d, ", num + mod);
		num = num + mod;
		mod++;
		count++;
	}
	

	return 0;

}

