#include <stdio.h>
#include <stdlib.h>

int main()
{

char dibujo='*';
int altura,ancho,i,a;

//int alturafinal;
//int anchofinal=0;

	printf("Ingrese la altura del rectangulo:\n");
	scanf("%d",&altura);

	printf("Ingrese el ancho del rectangulo:\n");
	scanf("%d",&ancho);

	for (i=0;i!=ancho;i++){
	//printf ("%c",dibujo);
		printf("\n");

		for (a=0;a!=altura;a++){
		printf("%c",dibujo);
		}
	}
return 0;
}
