//Parra Arroyo Fernando Marcos 
//Practica 14
//Programa que genera un aleatorio obtenido de /dev/random
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	int fdr,dato;//Declaracion de un descriptor de archivos.

	char *aleatorio="/dev/random\0"; // se declara la ruta del archivo
	fdr=open(aleatorio,O_RDONLY); // se abre el archivo en modo de lectura 

	if(fdr==-1) fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fdr);

	//si se puede leer el archivo se imprime un entero obtenido del archivo 
	printf((read(fdr,dato,sizeof(int))==-1)?"%d\n":"ERROR DE LECTURA",dato);

	if(close(fdr)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo"); //se cierra el descriptor de archivo
}
