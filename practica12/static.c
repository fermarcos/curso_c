//Parra Arroyo Fernando Marcos 
//practica 12

#include<stdio.h>
#include<string.h> // incluye definición de strcpy
#include<stdlib.h> //inclutye definición de calloc y free

int main()
{

	char *ptr_d=(char *) calloc(sizeof(char),10); // se reserva el espacio para 10 char
	strcpy(ptr_d,"hola\0"); 
	for(int i=0;i<sizeof(ptr_d)/sizeof(char);i++)
	{
		printf(!(*(ptr_d+i) =='\0')?"%c\n":"",*(ptr_d+i)); //Se imprime si es diferente de fin de cadena
	}
	free(ptr_d); // se libera el espacio ocupado por ptr_d
}


