#include <stdio.h>

int main()
{
	float x, x2;
	
	printf("Ingrese el valor de x""\n");
	printf("se reemplazara en el siguiente polinomio "" p(x)=(x*x*x)+(2*(x*x))+(3*x)+5""\n");
	scanf("%f", & x);
	
	x2=(x*x*x)+(2*(x*x))+(3*x)+5;
	
	printf("el valor de x luego de evaluarla por el polinomio es %f",x2);
	
	return 0;
}
	
