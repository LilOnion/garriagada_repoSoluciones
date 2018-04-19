#include <stdio.h>

int main ()
{
	//declarar variables
	int lado1, lado2, lado3;
	
	//pedir datos
	printf("Ingrese el valor del lado 1""\n");
	scanf("%d",&lado1);
	printf("Ingrese el valor del lado 2""\n");
	scanf("%d",&lado2);
	printf("Ingrese el valor del lado 3""\n");
	scanf("%d",&lado3);
	
	//comparar datos
	if (lado1==lado2 && lado2==lado3) {
		printf("El triangulo es equilatero""\n");
	}
	if (lado1==lado2 && lado2!=lado3)||(lado2==lado3 && lado3!=lado1)||(lado3==lado1 && lado1!=lado2) {
			printf("El triangulo es isoceles""\n");
	}
	if (lado1!=lado2 && lado2!=lado3 && lado3!=lado1) {
		printf("El triangulo es escaleno");
	}
	return 0;
}
