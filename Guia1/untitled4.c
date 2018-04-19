#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int base, altura, superficie, perimetro;

	printf("Ingrese la base del rectangulo");
	scanf("%d", & base);
	printf("\n");
	printf("Ingrese la altura del rectangulo");
	scanf("%d", & altura);
	printf("\n");
	
	superficie = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("La superficie del rectangulo es: %d", superficie);
	printf("\n");
	printf("El perimetro del rectangulo es: %d", perimetro);

return 0;
}
