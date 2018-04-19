#include <stdio.h>

int main()
{

float total, sueldo, ventas, porcentaje;

printf("Ingrese el sueldo base""\n");
scanf("%f", & sueldo);
printf("Ingrese el monto de las ventas de la semana""\n");
scanf("%f", & ventas);

porcentaje = (ventas / 100) * 7;
total = sueldo + (ventas + porcentaje);

printf("El porcentaje de ventas de esta semana es el 7 por ciento""\n");
printf("Por lo tanto el sueldo total de: $%.0f", total);

return 0;

}
