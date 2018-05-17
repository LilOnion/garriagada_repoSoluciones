#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numero_al_azar_A(){
	int nA;
	nA=(rand()%100)+1;
	return nA;
}
int numero_al_azar_B(){
	int nB;
	nB=(rand()%100)+1;
	return nB;
}
void juego(){
	int x,y;
	int i=0,j=0;
	char letra;
	char tecla='S';
	while(tecla=='S'||tecla=='s'){
		printf("Apueste por A o B\n");
		scanf(" %c",&letra);
		y=numero_al_azar_A();
		x=numero_al_azar_B();
		printf("La opcion A obtuvo %d apuestas\n",x);
		printf("La opcion B obtuvo %d apuestas\n",y);
		if(letra=='A'&&x>y){
			printf("¡Felicitanciones! Ha ganado\n");
			i++;
		}
		if(letra=='A'&&x<y){
			printf("Mala suerte, ha perdido\n");
			j++;	
		}		
		if(letra=='B'&&x<y){
			printf("¡Felicitanciones! Ha ganado\n");
			i++;
		}
		if(letra=='B'&&x>y){
			printf("Mala suerte, ha perdido\n");
			j++;
		}
		printf("Ha ganado %d veces\n",i);
		printf("Ha perdido %d veces\n",j);
		printf("¿Desea apostar otra vez? (s/n)\n");
		scanf(" %c",&tecla);
		if(tecla=='n'||tecla=='N'){
			break;
		}
	}
}
int main(){
	srand(time(NULL));
	printf("APUESTAS POR A Y B\n");
	juego();
	return 0;
}
