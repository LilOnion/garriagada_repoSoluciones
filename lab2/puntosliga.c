/*Se inicia el programa
 * Se declaran las variables del total de puntos,
 * goles del equipo visita y goles del equipo local
 * Se establece el limite del ciclo
 * Se pide los goles de la fecha
 * Se establece las operaciones para el resulado de
 * la fecha jugada, asignando valores
 * a la variable: totalpuntos
 * Se imprime el total de los puntos
 * Se cierra el programa
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,goleslocal,golesvisita,totalpuntos=0;

for(i=0; i<5; i++){
	printf("Ingrese los goles del equipo local: \n");
	scanf("%d",&goleslocal);
	printf("Ingrese los goles del equipo visita: \n");
	scanf("%d",&golesvisita);

	if (goleslocal<golesvisita){
		totalpuntos+=3;
		}
	else if (goleslocal==golesvisita){
		totalpuntos++;
		}
}
printf("El total de puntos hasta ahora son: %d",totalpuntos);

return 0;
}
