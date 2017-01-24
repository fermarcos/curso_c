//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio 2
//Realice un programa que imprima los números nones de 1 a n ingresados por el usuario
#include<stdio.h>

int main()
{
	int num ,i;
	printf("Ingrese un número: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
		printf((i&1)?"%d\n":"",i);
	return 0; 
}