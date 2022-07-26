#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int counter = 0;
	int endwhile;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int number ;

	while (counter < 20) 
	{
		printf("Masukan angka 1, 2, atau 3 sebanyak 20 kali: ");
		scanf("%d", &number);
	
		if (number == 1)
		{
			sum1 = sum1 + 1;
			counter = counter + 1;
  }
		
			else if (number == 2)
			{
				sum2 = sum2 + 1;
				counter = counter +1;
			}
			else if (number == 3)
			{
				sum3 = sum3 + 1;
				counter = counter + 1;
			}
		
		 	else
			{
			printf("Frekuensi angka \n");
			}
		}
	
	printf("Angka 1 ada sebanyak %d kali\n", sum1);
	printf("Angka 2 ada sebanyak %d kali\n", sum2);
	printf("Angka 3 ada sebanyak %d kali\n", sum3);
	
	endwhile;
	
	return 0;
	}
	
	
	
	

