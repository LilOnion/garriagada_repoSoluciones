/*
 * Se inicia el programa
 * Se define la funcion horas para calcular las horas trabajadas en la semana
 * Se define la funcion paga_por_hora para calcular el pago semanal
 * Se establce el procedimiento imprimir_pago para imprimir el pago semanal
 * Se inicia la funcion main, se incluyen las funciones antes declaradas y el procedimeinto
 * Se finaliza el programa
*/
#include <stdio.h>
#include <stdlib.h>

float horas (){
	float i=1, horas_trabajadas=0, horas_semana=0;
	
	for(i=1;i<7;i++){
	printf("Ingrese las horas trabajadas del dia %.0f\n",i);
	scanf("%f",&horas_trabajadas);
	horas_semana=horas_semana+horas_trabajadas;
	}
	system ("clear");
	return horas_semana;
}

float paga_por_hora(float horas_semana){
	float pago_por_hora, pago_semanal; 
	printf("Ingrese el pago por hora trabajada\n");
	scanf("%f",&pago_por_hora);
	pago_semanal=horas_semana*pago_por_hora;
	system ("clear");
	return pago_semanal;
}

void imprimir_pago(float pago_semanal){
	printf("El sueldo de la semana es:\n $%.0f",pago_semanal);
}

int main(){
	float x=0;
	x=horas();
	x=paga_por_hora(x);
	imprimir_pago(x);
	return 0;
}
