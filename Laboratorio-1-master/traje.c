/*
 * iniciar programa
 * definir variables
 * pedir precio del traje
 * definir casos par el valor (mayor o menor que 2500.00)
 * operar el precio con el descuento que corresponda
 * imprimir el valor final del traje
 * finalizar programa
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float precio,descuento15,descuento8;
	
	printf("Bienvenido a El arapiento distinguido");
	printf("Ingrese el precio de su traje\n");
	scanf("%f",&precio);
	
	if (precio<2500.00){
		printf("\nSu traje tiene un descuento de 8 porciento\n");
		descuento8=0.08*precio;
		printf("El precio final de su traje son $ %f.0",descuento8);
		}
	if (precio>2500.00){
		printf("\nSu traje tiene un descuento de 15 porciento\n");
		descuento15=0.015*precio;
		printf("El precio final de su traje son $ %.0f",descuento15);
		}
	return 0;
}
