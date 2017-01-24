//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio1
//Realice un programa que imprima los números de 0 a n Ingersados por el usuario
#include<stdio.h>

int main()
{
	int num ,i;
	printf("Ingrese un número: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
		printf("%d\n",i);
	return 0; 
}