//Parra Arroyo Fernando Marcos
//Practica 19
//Longitud de un archivo

#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char*argv[])
{
	int fd, bytes; 
	if(argc!=2) // Se verifica el número de parámetros
	{
		 fprintf(stderr,"ERROR\n USO: ./longitud archivo\n");
		 return -1;
	}
	
	fd = open(argv[1],O_RDONLY);//Se abre el archivo con permiso de lectura
	if(fd==-1)fprintf(stderr,"Error al abrir el archivo\n");// Verifica que se haya podido generar el descriptor de archivo
	else
	{
		bytes = lseek(fd,0,SEEK_END);//Se posiciona el puntero al final del archivo con un offset de 0 para obtener el número de bytes
		printf("Tamaño del archivo %s :\n bits: %d\n bytes: %d\n Kilobytes: %.3f\n",argv[1],bytes*8,bytes,bytes/1024.0);
		if(close(fd)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo"); //se cierra el descriptor de archivo
	}
	return 0;
}
