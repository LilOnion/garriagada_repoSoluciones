/*
 * iniciar programa
 * definir variables
 * presentar las opciones para votar
 * contar votos totales y los por candidato
 * calcular los porcentajes
 * casos de empate
 * casos de ganador
 * imprimir ganador o empate
 * imprimir votos por candidato y sus porcentajes
 * imprimir los votos nulos y su porcentaje
 * finalizar programa
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	char fin;
	float porcentaje1=0,porcentaje2=0,porcentaje3=0,porcentajenulos=0;
	int candidato1=0,candidato2=0,candidato3=0,votos=0,voto,nulos=0;
	
		printf("Votaciones para presidente de alumno ICB\n");
		printf("Para votar por el candidato 1 presione 1\n");
		printf("Para votar por el candidato 2 presione 2\n");
		printf("Para votar por el candidato 3 presione 3\n");
	
		while (fin!='f'){
			printf("Ingrese voto\n");
			scanf("%d",&voto);
			switch (voto){
				case 1:
					candidato1++;
					votos++;
					break;
				case 2:
					candidato2++;
					votos++;
					break;
				case 3:
					candidato3++;
					votos++;
					break;
				default :
					nulos++;
					votos++;
					break;
			}
		}
	
		printf("\nPara finalizar la votacion presione 'f'\n");
		scanf("%c",&fin);
	
	porcentaje1=(candidato1/votos)*100;
	porcentaje2=(candidato2/votos)*100;
	porcentaje3=(candidato3/votos)*100;
	porcentajenulos=(nulos/votos)*100;
	
	if ((candidato1>candidato2)&&(candidato2>candidato3)){
		printf("¡¡Felicitaciones, candidato1 ha ganado las elecciones!!\n");
	}
	if ((candidato2>candidato1)&&(candidato1>candidato2)){	
		printf("¡¡Felicitaciones, candidato2 ha ganado las elecciones!!\n");
	}
	if ((candidato3>candidato2)&&(candidato2>candidato1)){
		printf("¡¡Felicitaciones, candidato3 ha ganado las elecciones!!\n");
	}
	if ((candidato1=candidato2)&&(candidato2>candidato3)){
		printf("Hubo un empate etntre el candidato1 y el candidato 2\n");
	}
	if ((candidato1=candidato3)&&(candidato3>candidato2)){
		printf("Hubo un empate entre el candidato 1 y el candidato 3\n");
	}
	if ((candidato2=candidato3)&&(candidato3>candidato2)){
		printf("Hubo un empate entre el candidato 2 y el candidato 3\n");
	}
	
	printf("El candidato 1 obtuvo: %d votos ",candidato1);
	printf("o un %f porciento de los votos",porcentaje1);
	printf("El candidato 2 obtuvo: %d votos ",candidato2);
	printf("o un %f porciento de los votos",porcentaje2);
	printf("El candidato 3 obtuvo: %d votos ",candidato3);
	printf("o un %f porciento de los votos",porcentaje3);
	printf("Hubo una cantidad de : %d votos nulos ",nulos);
	printf("o un %f porciento de los votos",porcentajenulos);
	printf("La cantidad total fue: %d votos \n",votos);
	
	return 0;
}

