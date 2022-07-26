#include <stdio.h>

int main(void) {
	int a, i;
	scanf("%d", &a);
	
	i = 1;
	while (i < 10) {
		a -= i;
		i++;
	}
	printf("%d", a);
	return 0;
}
