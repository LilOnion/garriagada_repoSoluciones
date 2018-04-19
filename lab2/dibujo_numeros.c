/* Se inicia el programa
 * Se declaran las variables para el numero a ingresar
 * y para definir los limites del "dibujo"
 * Se establecen las condiciones del ciclo <9 y >1
 * Se pide el numero y se asigna valor a la variable: maximo
 * 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int maximo,i,o,p;

	while (maximo<1||maximo>9){
	printf("Ingrese su numero: \n");
	scanf("%d",&maximo);}
	
	for(i=1;i<=maximo;i++){

		for(o=1;o<=i;o++){
		printf("%d",o);

			if(o==i){

				for(p=o-1;p>0;p--){
				printf("%d",p);
				}
			}
		}
		printf("\n");
	}
return 0;
}
