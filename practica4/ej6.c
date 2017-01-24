//Parra Arroyo Fernando Marcos
//practica 4
//ejercicio 6
//6. Realiza un programa que calcule área de ciertas figuras geométricas,
//solamente,triangulo, rectángulo, cuadrado, dependiendo de la selección del usuario, 
//se pedirán, base, altura o solo lado.

#include<stdio.h>

int main()
{
	int op,salir=1;
	float b,h;
	while(salir!=0)
	{
		printf("\n\n----------AREAS-----------\n1) Triángulo\n2) Rectángulo\n3) Cuadrado\n4) Salir\n\n Ingrese una opción: ");
		scanf("%d",&op);
		if(op==1)
		{
			printf("base= ");
			scanf("%f",&b);
			printf("altura= ");
			scanf("%f",&h);
			printf("\nArea= %f",(b*h)/2);
		}
		else if (op==2)
		{
			printf("base= ");
			scanf("%f",&b);
			printf("altura= ");
			scanf("%f",&h);
			printf("\nÁrea= %f",b*h);
		}
		else if (op==3)
		{
			printf("lado= ");
			scanf("%f",&b);
			printf("\nÁrea= %f",b*b);
		}
		else if (op==4) salir=0;
		else printf("Opción no valida\n");
	}
	return 0; 
}