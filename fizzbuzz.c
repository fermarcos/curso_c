//Fernando Marcos Parra Arroyo
//Practica 0
#include <stdio.h>
int main()
{
int i;

for (i=1;i<=30;i++)
{
	if(i%5==0&&i%3==0)
		printf("FIZZBUZZ\n");
	else 
		if(i%5==0)
	 		printf("BUZZ\n");
		else 
			if(i%3==0)
				printf("FIZZ\n");
}
return 0;
}
