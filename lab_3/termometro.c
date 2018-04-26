/* Se inicia el programa
 * Se define la funcion medidor para contar
 * e imprimir la cantidad de grados
 * Se define la funcion main
 * Se pide la cantidad de grados
 * Se imprime la "tabla" del termometro
 * Se llama a la funcion termometro
*/
#include <stdio.h>

int medidor (int celcius){
		int i=0;
			for (i=0;i<=celcius;i++){
			printf("-");
			}
	return celcius;
}

int main(){
	int celcius;
	printf("Ingrese los grados:\n");
	scanf("%d",&celcius);
	
	printf("0°         10°         20°         30°         40°         50°\n");
	printf("|          |          |          |          |\n");
	medidor (celcius);
return 0;
}
