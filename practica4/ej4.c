//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio 4
//4.Realiza un programa que tome como parámetro un carácter, 
//hecho esto,regresa su equivalente hexadecimal en la terminal, el formato es tu decisión.
#include<stdio.h>
int main(int argc, char * argv[])
{
	if(argc<=1)
		printf("Uso: ./ej4 c\n c=caracter\n");
	else
		printf("0x%x\n",*argv[1]);
	return 0;
}