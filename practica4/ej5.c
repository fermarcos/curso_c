//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio5
//5. Realiza un programa de autenticación, es decir que  acepte un “password ”, 
//de ser correcto, imprimir “OK” de  lo contrario imprimir, “GTFOH!”
#include<stdio.h>
#include<string.h>

int main()
{
	char password[]="hola123.,";
	char in[20];
	printf("PASSWORD: ");
	scanf("%s",in);
	printf((strcmp(in,password)==0)?"OK\n":"GTFOH!\n");
	return 0; 
}