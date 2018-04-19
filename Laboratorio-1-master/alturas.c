/*
 * iniciar programa
 * definir variables
 * dar condiciones para las estaturas
 * operar estaturas
 * imprimir estatura promedio
 * finalizar programa
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char fin = ' ';
	float cantidadestaturas=0,estaturapromedio=0,estaturas=0,estatura;
	
	printf("Algoritmo para estatura promedio");
	printf(", las estaturas pueden tener hasta dos decimales\n");
		
	estaturapromedio=estaturas/cantidadestaturas;
	
	while (fin!='s'||fin!='S'){
		printf("Ingrese una estatura en metros");
		scanf("%f",&estatura);
	
		estaturas=estaturas+estatura;
		cantidadestaturas++;
	}
	
	
	printf("La estatura promedio es: %f metros",estaturapromedio);
	
	return 0;
}
