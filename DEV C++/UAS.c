#include <stdio.h>

void fun(int p[3][4]) {
	printf("%d", p[1][1]);
}

int main() {
	int a[3][4];
	fun(a);
	return 0;
}
