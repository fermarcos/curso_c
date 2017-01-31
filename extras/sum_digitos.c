//Parra Arroyo Fernanod Marcos
//Programa que suma los digitos de un número de dos digitos
#include<stdio.h>

int main()
{
	int in;
	printf("Ingrese un número de dos digitos= ");
	scanf("%d",&in);
	printf((in>=10 && in<=99)?"Suma= %d\n":"Error ingrese un número entre 10 y 99\n",in/10+in-(in/10*10));
	return 0;
}