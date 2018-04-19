#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, cuadrado, cubo;

	printf("Ingrese un numero entero postivo");
	scanf("%d", & n);
	printf("\n");

	cuadrado=n*n;
	cubo=cuadrado*n;

	printf("El cuadrado del numero es: %d", cuadrado);
	printf("\n");
	printf("El cubo del numero es: %d", cubo);

return 0;

}
