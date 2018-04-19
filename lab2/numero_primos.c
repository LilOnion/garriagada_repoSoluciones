/* Se inicia el programa
 * Se declaran las variables numero limite y los operadores
 * para los numeros anteriores a al numero limite
 * Se condicionan las variables segun el numero ingresado
 * Se ioperan las variables calcuclando los numeros primos
 * Se imprimen los numeros primos contenidos
 * Se cierra el programa
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int numerolimite=0,i=1,j=2,a=0,primos=0;

	printf("Ingrese el numero limite para el calculo de primos \n");
	scanf("%d",&numerolimite);

	for(j=2;j<=numerolimite;j++){
		
		for(i=1;i<=j;i++){
		
			if(i%j==0){
				a++;
			}
		
			if(a==2){
				primos++;
			}
		}
	}
	printf("La cantidad de numeros primos es: %d",primos);
	return 0;
}
