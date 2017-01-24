//Parra Arroyo Fernando Marcos
//Practica 3
#include<stdio.h>
#include<time.h>
#include<limits.h>

int main()
{
	time_t fin = INT_MAX; //Se gasigna el valor máximo que puede guardar una variable de tipo entero
	printf("Fecha del fin del mundo:%s\n",ctime(&fin)); //Imprime la hora y fecha con base en el argumento dado a ctime
	return 0;
}