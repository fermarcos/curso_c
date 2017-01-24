//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio3
// Programa que imprima los primeros N números primos 
#include<stdio.h>

int main()
{
	int num ,i,j,div;
	printf("Ingrese un número: ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		div=0;
		for(j=1;j<=num;j++)
			if(i%j==0) div++;
		if(div==2) printf("%d\n",i);
	}	
	return 0; 
}