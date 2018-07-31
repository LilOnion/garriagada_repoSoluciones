//Dada una matriz cuadrada A, un programa que permita detectar si dicha matriz es simétrica.
//Se considera que una matriz es simétrica si A[i,j] = A[j,i] y esto se cumple para todo i distinto de j. 
//La simetrı́a es respecto a la diagonal principal.

#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int ancho, int largo, int matriz[ancho][largo]){

	for(int i=0; i<ancho; i++){
		for(int j=0; j<largo; j++){
			if(i==j){
				matriz[i][j]= 1;
			}
			printf("%d   ", matriz[i][j]);
		}
		printf("\n\n");
	}
}

void llenar_matriz(int ancho, int largo, int matriz[ancho][largo]){
	
	for(int i=0; i<ancho; i++){
		for(int j=0; j<largo; j++){
			printf("Ingrese los valores de la matriz en (%d,%d)", i, j);
			scanf("%d",&matriz[i][j]);
		}
	}
	system("clear");
}

int main (){
	
	int ancho,largo;
	
	printf("Ingrese el largo de la matriz:\n");
	scanf("%d",&largo);
	printf("Ingrese el ancho de la matriz:\n");
	scanf("%d",&ancho);
	
	int matriz[ancho][largo];
	
	llenar_matriz(ancho,largo,matriz);
	
	imprimir_matriz(ancho,largo,matriz);
	
	if(ancho==largo){
		printf("la matriz es simétrica");}
		else {
			printf("la matriz no es simetrica");}

	return 0;
}
