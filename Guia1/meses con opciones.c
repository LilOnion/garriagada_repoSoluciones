#include <stdio.h>
#include <stdlib.h>

int main ()
{
int mes;

 printf("Ingrese un numero del 1 al 12\n");
 scanf("%d",&mes);
 
switch (mes){

case 1:
	printf("El numero ingresado corresponde al mes de Enero");
	break;
case 2:
	printf("El numero ingresado corresponde al mes de Ferbrero");
	break;
case 3:
	printf("El numero ingresado corresponde al mes de Marzo");
	break;
case 4:
	printf("El numero ingresado corresponde al mes de Abril");
	break;
case 5:
	printf("El numero ingresado corresponde al mes de Mayo");
	break;
case 6:
	printf("El numero ingresado corresponde al mes de Junio");
	break;
case 7:
	printf("El numero ingresado corresponde al mes de Julio");
	break;
case 8:
	printf("El numero ingresado corresponde al mes de Agosto");
	break;
case 9:
	printf("El numero ingresado corresponde al mes de Septiembre");
	break;
case 10:
	printf("El numero ingresado corresponde al mes de Octubre");
	break;
case 11:
	printf("El numero ingresado corresponde al mes de Noviembre");
	break;
case 12:
	printf("El numero ingresado corresponde al mes de Diciembre");
	break;
default:
	printf("El numero ingresado no es valido");
	break;
}
return 0;
}
