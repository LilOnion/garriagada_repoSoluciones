#include <stdio.h>

int main()
{  
float precio, galones, litros;

printf("Ingrese la cantiad de galones a surtir""\n");
printf("\n");
scanf("%f", & galones);

litros = galones * 3.785;
precio = litros * 820;

printf("El total es $%.0f por litro", precio);
printf("\n");
printf("Gracias, que tenga buen viaje");

return 0;

}
