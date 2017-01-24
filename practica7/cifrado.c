//Parra Arroyo Fernando Marcos
//Practica 7
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//Un arreglo se puede definir de la siguiente manera.
	int i[]={'h','o','l','a'};

	for(int a=0;a<sizeof(i)/sizeof(int);a++)
	{
		i[a]=i[a]^8;
	}

	printf("\nCIFRADO\n");
	for(int a=0;a<sizeof(i)/sizeof(int);a++)
	{
		printf("%c",i[a]);
	}

	printf("\n\nDESCIFRADO\n");
		for(int a=0;a<sizeof(i)/sizeof(int);a++)
	{
		i[a]=i[a]^8;
	}
		for(int a=0;a<sizeof(i)/sizeof(int);a++)
	{
		printf("%c",i[a]);
	}
	printf("\n");
}

