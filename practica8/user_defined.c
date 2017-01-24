//Parra Arroyo Fernando Marcos
//práctica 8

#include<stdio.h>
#include<string.h>
struct becario{ //se define la estructura becario
	char nombre[35];
	int edad;
	float promedio;
	char procedencia[30];
	int generacion;
	unsigned int proyecto:1;//campo de bit, esa variable solo guardara un bit
};
int main()
{
	struct becario bec[8]; //Se define un arreglo de estructuras

	strcpy(bec[0].nombre,"Diana Laura Arrieta Jiménez"); //recibe a donde va copiar la cadena y la cadena que va copiar
	bec[0].edad=22;
	bec[0].promedio=9.2;
	strcpy(bec[0].procedencia,"Facultad Ingeniería UNAM");
	bec[0].generacion=11;
	bec[0].proyecto=1;

	strcpy(bec[1].nombre,"Oscar David Anota Olmos");
	bec[1].edad=22;
	bec[1].promedio=9.8;
	strcpy(bec[1].procedencia,"ESCOM IPN");
	bec[1].generacion=11;
	bec[1].proyecto=1;

	strcpy(bec[2].nombre,"Virgilio Castro Rendón");
	bec[2].edad=22;
	bec[2].promedio=9.7;
	strcpy(bec[2].procedencia,"Facultad Ingeniería UNAM");
	bec[2].generacion=11;
	bec[2].proyecto=1;

	strcpy(bec[3].nombre,"Jorge Alberto Hernández Cuecuecha");
	bec[3].edad=22;
	bec[3].promedio=9.1;
	strcpy(bec[3].procedencia,"Facultad Ingeniería UNAM");
	bec[3].generacion=11;
	bec[3].proyecto=1;

	strcpy(bec[4].nombre,"Cristian Alexis Monroy Rubio");
	bec[4].edad=22;
	bec[4].promedio=9.7;
	strcpy(bec[4].procedencia,"FES Aragón");
	bec[4].generacion=11;
	bec[4].proyecto=1;

	strcpy(bec[5].nombre,"Fernando Marcos Parra Arroyo");
	bec[5].edad=22;
	bec[5].promedio=9.7;
	strcpy(bec[5].procedencia,"Facultad Ingeniería UNAM");
	bec[5].generacion=11;
	bec[5].proyecto=1;

	strcpy(bec[6].nombre,"Omar Santiago López");
	bec[6].edad=22;
	bec[6].promedio=9.0;
	strcpy(bec[6].procedencia,"FES Cuautitlan");
	bec[6].generacion=11;
	bec[6].proyecto=1;

	strcpy(bec[7].nombre,"Gonzalo Vazquez Cruz");
	bec[7].edad=24;
	bec[7].promedio=9.6;
	strcpy(bec[7].procedencia,"Facultad de Ciencias UNAM");
	bec[7].generacion=11;
	bec[7].proyecto=1;

	//se imprimen los datos correspondientes a cada elemento del arreglo de estructuras
	for(int a=0;a<8;a++)
	{
		printf("Nombre: %s\n",bec[a].nombre);
		printf("Edad: %d\n",bec[a].edad);
		printf("Promedio: %.1f\n",bec[a].promedio);
		printf("Procedencia: %s\n",bec[a].procedencia);
		printf("Generación: %d\n",bec[a].generacion);
		printf((bec[a].proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
		printf("-----------------------------------------------------\n");
	}
}
