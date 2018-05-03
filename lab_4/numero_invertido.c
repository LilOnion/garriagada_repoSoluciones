/*Se inicia el progama
 *Se captura el numero a invertir
 *Se declara la condicion del ciclo
 *Se imprimen los resultados de las operaciones
 *Se finaliza el programa
 */
#include <stdio.h>

int main(){	
int numero,x=2;
printf("Ingrese numero \n");
scanf("%d",&numero);
		
while (x>1){

int resto;
		
resto=numero%10;
numero=numero/10;

x=resto;
		
printf("%d",resto);
}
return 0;
}
