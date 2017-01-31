//Parra Arroyo Fernando Marcos
//Crea  un  programa  que  calcule n + m por  linea  de  comandos.   (Validar  
//para  que  solo funcione con enteros.)

#include<stdio.h>
int main(int argc, char * argv[])
{
	int x,y;
	if(argc!=3 ||!(sscanf(argv[1],"%d",&x) && sscanf(argv[2],"%d",&y)))  fprintf(stderr,"ERROR\nUSO: ./suma num1 num2\nnum1 int\nnum2 int\n");
	else printf("%d + %d = %d\n",x,y,x+y);
}
