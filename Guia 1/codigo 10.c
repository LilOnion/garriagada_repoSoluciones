#include <stdio.h>

int main()
{
float kmviaje, precioxkm, boleto;

printf("Bienvenido a Autobuses Camino al Cielo""\n");
printf("Ingrese los kilometros de distancia del viaje""\n");
scanf("%f", & kmviaje);
printf("Ingrese el costo por kilometro recorrido""\n");
scanf("%f", & precioxkm);

boleto = kmviaje + precioxkm;

printf("El precio del boleto es de $%f",boleto);

return 0;
}
