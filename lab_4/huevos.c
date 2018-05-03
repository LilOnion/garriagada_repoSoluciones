/*3 amigos
*juan=5h=10p
*manuel=3h=70p
*antonio=0h
*total de 8 huevos
*a cambio de 8 huevos, 80 pesos
*80 pesos / manuel y antonio
*como seria equitativo?
*no son 30 y 50
*/

#include <stdio.h>
#include <stdlib.h>

float division_pago(float amigos,float huevos){
	float huevos_por_cabeza, resto, pago;
	
	huevos_por_cabeza=(huevos/3);
	resto=(amigos-huevos_por_cabeza);
	pago=(resto*10);
	
	return pago;
}

int main(){
	float juan=5,manuel=3,huevos=8,pago_juan,pago_manuel;
	
	pago_juan=division_pago(juan,huevos);
	pago_manuel=division_pago(manuel,huevos	);
	
	printf("A Manuel le corresponden $%.0f\n",pago_manuel);
	printf("y a juan le corresponden $%.0f\n",pago_juan);
	printf("a cambio de los huevos");
	
	return 0;
}
