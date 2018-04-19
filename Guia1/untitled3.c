#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, a2, b2, c2;
	printf("Ingrese el valor del cateto 1");
	printf("\n");
	scanf("%d", & a);
	printf("Ingrese el valor del cateto 2");
	scanf("%d", & b);
	printf("\n");
	
	a2=a*a;
	b2=b*b;
	c2=a2+b2;

	printf("La hipotenusa al cuadrado es: %d", c2);

return 0;
}
