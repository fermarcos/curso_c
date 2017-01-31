//Parra Arroyo Fernando Marcos
//Programa que genera una contraseña segura

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
	
int main(int argc, char * argv[])
{
	char * simbolos = "!#$&/()=?;,-_";
	char * letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVXYZ";
	char * numeros = "1234567890";
	int tam,i,op;	
	srand(time(NULL));

	if(argc!=2 ||!sscanf(argv[1],"%d",&tam)) 
		fprintf(stderr,"ERROR\nUSO: ./contrasena tamanho\ntamanho int\n");
	else 
	{
		char contrasena[tam];
		for(i=0;i<tam;i++)
		{
			op=rand()% 9 + 1;
			if(op==1 || op==3 || op== 6) contrasena[i] = simbolos[rand()%strlen(simbolos)];
			else if(op==2 || op==4 || op== 7) contrasena[i] = numeros[rand()%strlen(numeros)];
			else contrasena[i] = letras[rand()%strlen(letras)];
		}
		printf("Contraseña: %s\n",contrasena);
	}
}