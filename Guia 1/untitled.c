#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int m;
 float c1, c2, c3, p;

	printf("Ingrese su numero de matricula");
	printf("\n");
	scanf("%d",& m);
	printf("Ingrese las 3 calificaciones");
	printf("\n");
	scanf("%f",& c1);
	scanf("%f",& c2);
	scanf("%f",& c3);
	printf("\n");


		p=(c1+c2+c3)/3;

	printf("El alumno:  %d", m);
	printf("\n");
	printf("tiene un promedio: %f", p);

  return 0;
}
