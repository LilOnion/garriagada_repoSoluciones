/*
 * Se inicia el programa
 * Se declara la funcion cuota_20 para el calculo de los
 * pagos mensuales.
 * Se operan las variables dentro de la funcion cuota_20.
 * Se declara el procedimiento imprimir_total
 * para imprimir el valor de la ultima cuota.
 * Se inicia la funcion main, se llama la funcion cuota_20 y 
 * el procedimiento imprimir_total
 * Se cierra el programa
*/

#include <stdio.h>

int cuota_20(){

	int i, mes_actual, mes_anterior;
	printf("Ingrese el valor de la primera cuota:\n");
	scanf("%d",&mes_anterior);
		
	for (i=1;i<=20;i++){
		mes_anterior=mes_anterior*2;
		mes_actual=mes_anterior*2;
		printf("$%d\n",mes_actual);	
	}
	return mes_actual;
}
	
void imprimir_total (int mes_actual){
	printf("El total que se pago fue:\n$%d",mes_actual);
	}
	
int main(){
	
	int x;
	x=cuota_20();
	imprimir_total(x);
	
	return 0;
}
