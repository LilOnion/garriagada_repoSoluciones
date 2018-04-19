#include <stdio.h>
#include <string.h>
#define MAX_STRING_LEN 999

int main()
{
char nombre[MAX_STRING_LEN];
float libras, pies, kilos, metros;

printf("Ingrese el nombre del dinosaurio""\n");
scanf("%s", & nombre[MAX_STRING_LEN]);
printf("\n");
printf("Ingrese el peso en libras del dinosaurio""\n");
scanf("%f", & libras);
printf("\n");
printf("Ingrese la altura en pies del dinosaurio""\n");
scanf("%f", & pies);
printf("\n");

metros = pies * 0.3048;
kilos = libras * 0.45;

printf("El dinosaurio: %s", nombre);
printf("\n");
printf("tiene un peso en kilogramos es: %f", kilos);
printf("\n");
printf("y su altura en metros es: %f", metros);

return 0;
}
