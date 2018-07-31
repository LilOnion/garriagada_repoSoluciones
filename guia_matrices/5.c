#include <stdio.h> 
#include <stdlib.h>

void llenar_matriz(int ancho, int largo, int matriz[ancho][largo]){
	
	int numero;
	
	for (int i=0; i<ancho; i++){
		for (int j=0; j<largo; j++){
			
			printf("Ingrese valor de la matriz en (%d,%d): \n",i,j);
			scanf("%d", &numero);
			
			matriz[i][j]=numero;
		}
	}
	system("clear");
}

void imprimir_matriz(int ancho, int largo, int matriz[ancho][largo]){
	
	printf("La matriz es:\n");
	
	for (int i=0; i<ancho; i++){
		for (int j=0; j<largo; j++){			
			printf("%d   ", matriz[i][j]);
		}
	printf("\n\n");
	}
}

void matriz_traspuesta(int ancho, int largo, int matriz[ancho][largo]){
	
	int i, j;
	
	for (i=0; i<largo; i++){
		for (j=0; j<ancho; j++){
		printf("%d   ", matriz[j][i]);
		}
	printf("\n\n");
	}
}

int main (){

	int ancho;
	int largo;
	
	printf ("Ingrese valor de ancho:\n");
	scanf ("%d", &ancho);
	printf("Ingrese valor de largo:\n");
	scanf("%d", &largo);
	
	int matriz[ancho][largo];
	
	llenar_matriz(ancho, largo, matriz);
	imprimir_matriz(ancho, largo, matriz);
	
	printf("la matriz traspuesta es: \n");
	matriz_traspuesta(ancho,largo,matriz);
		
	return 0;
}
