//Parra Arroyo Fernando Marcos
//Programa que calcula el máximo número formado por n digitos
// gcc -Wall -g extra4.c -o extra4 -lm

#include<stdio.h>
#include<math.h>


int main()
{
	int in;
	printf("Ingrese un número entre 1 y 8: ");
	scanf("%d",&in);
	printf((in>=1 && in<=8)?"Máximo= %d\n":"Error ingrese un número entre 1 y 8\n",(int)pow(10,in)-1);
	return 0;
}