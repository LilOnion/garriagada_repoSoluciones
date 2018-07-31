//Escriba un programa que cree una matriz cuadrada A de NxN, 
//luego rellénela de ceros e imprı́mala en pantalla.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
//	printf("Ingrese el tamaño del tablero");
	
	int A[6][6];
	
	// llenar la matriz de ceros
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			A[i][j]=0;
		}
	}
	
	// imprimir la matriz
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			printf("%d   ", A[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
