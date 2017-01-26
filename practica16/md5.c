//Parra Arroyo Fernando Marcos 
//Practica 16 HASH
//Programa que obtiene el MD5 de un archivo 

#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h> // contiene la función open
#include<unistd.h> //contiene la función clode
int main(int argc, char *argv[])
{
    unsigned char digest[MD5_DIGEST_LENGTH]; //Arreglo para guardar el MD5
    unsigned char data[1024]; //arreglo para guardar el contenido del archivo
    MD5_CTX mdContext;  // estructura definida en md5.h 
    int fdr,bytes;//Declaracion de un descriptor de archivos

    if(argc<2||argc>2) //se verifica que el programa tenga sólo un argumento
    {
    	printf("Error al ejecutar \n 	USO: ./md5 nombre_archivo\n");
    	return 1;
    }

	char *aleatorio= argv[1]; // se declara la ruta del archivo
	fdr=open(aleatorio,O_RDONLY); // se abre el archivo en modo de lectura 

	if(fdr==-1)
	{
		fprintf(stderr,"No se pudo abrir o crear el archivo");
		return -1;
	}

	MD5_Init(&mdContext); // inicializa la estructuraa de contexto de MD5_CTX
	while((bytes=read(fdr,data,1024))!=0) //mientras se pueda leer del archivo se guardan bloques de 1024 bytes en data
		MD5_Update(&mdContext,data,bytes); //calcula un resumen parcial MD5 del bloque de bytes señalado
	MD5_Final(digest,&mdContext); // Convierte el valor de retorno en una cadena de 33 caracteres incluyendo '\0'
	for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
        printf("%02x", digest[i]); //imprime el hexadecimal de los dos últimos caracteres de digest
    printf("\n");
    close(fdr); //se cierra el descriptor de archivo
    return 0;
}
