
//Parra Arroyo Fernando Marcos
//Pratica 9
#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);
int main(int argc, char *argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
	}	
	printf("%d\n",atoi(argv[argc-1]));
}
//int atoi(char *num)
//{
//	return strtol(num,NULL,10);
//}
