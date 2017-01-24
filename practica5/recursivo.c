//Parra Arroyo Fernando Marcos
//practica 5
#include<stdio.h>

int factorial(int);

int main()
{
	int num;
	printf("Ingrese un número: ");
	scanf("%d",&num);
	printf("El factorial es: %d\n",factorial(num));
	return 0; 
}

int factorial(int n)
{
	if(n==1) return 1;
	else return n*factorial(n-1);
}
